#include <string>
#include <iostream>
#include <stdlib.h>


class node{
    public:
    int data;
    node * next;
    node * skip;
};

class skiplist{

    private:
    node * createNode(int x){
        node * newElement = (node *)malloc(sizeof(node));
        newElement->data = x;
        newElement->next = nullptr;
        newElement->skip = nullptr;
        return newElement;
    }
    public:
        int length;
        int size;
        int skip_by;
        node * head;
        skiplist(int skip_by){
            this->length = 0;
            this->size = 0;
            this->head = nullptr;
            this->skip_by = skip_by;
        } 

        void insertElement(int x){
            node * newElement = createNode(x);
            std::cout<<"INSERTING NEW ELEMENT "<<x<<std::endl;
            node * temp = this->head;
            if(temp == nullptr){
                this->head = newElement;
            }else if(x < head->data){
                newElement->next = head;
                head = newElement;
            }
            else{
                while(temp->next != nullptr && temp->next->data < x){
                    temp = temp->next;
                }
                node * temp2 = temp->next;
                newElement->next = temp2;
                temp->next = newElement;

            }
            this->length++;
            this->size+=sizeof(newElement);
        }

        void printList(){
            node * temp = head;
            std::cout<<"|";
            while(temp!=nullptr){
                std::cout<<temp->data<< "|";
                temp = temp->next;
            }
        }
   
};


int main(){
    skiplist * s = new skiplist(5);
    s->insertElement(6);
    s->insertElement(3);
    s->insertElement(4);
    s->printList();
    return 0;
}