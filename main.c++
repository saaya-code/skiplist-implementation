#include "skiplist.c++"



int main(){
    skiplist * s = new skiplist(5);
    s->insertElement(3);
    s->insertElement(4);
    return 0;
}