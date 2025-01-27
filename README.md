# SkipList Library

## Overview
This project is an implementation of a SkipList data structure in C++. The SkipList allows efficient searching, insertion, and deletion operations with logarithmic complexity. Currently, the implementation includes basic operations such as inserting elements and printing the list.

## Features
- **Insertion:** Adds new elements in sorted order.
- **Printing:** Displays the elements in the skiplist.
- **Dynamic Memory Management:** Uses dynamic memory allocation to manage nodes.

## Planned Features
In future releases, the library will include:
- **Deletion of elements.**
- **Search functionality with skip pointers for optimization.**
- **Optimization for memory usage and performance.**
- **Customizable skip intervals for better flexibility.**
- **Error handling and boundary checks.**

## Installation
To use the SkipList library in your project:
1. Clone the repository.
   ```sh
   git clone https://github.com/saaya-code/skiplist-implementation.git
   ```
2. Include the necessary header files in your project.
3. Compile using a C++ compiler such as g++.

## Usage
Example usage of the SkipList:

```cpp
#include <iostream>
#include "skiplist.h"

int main() {
    skiplist *s = new skiplist(5);
    s->insertElement(6);
    s->insertElement(3);
    s->insertElement(4);
    s->printList();
    delete s;
    return 0;
}
```

## Compilation
Compile the project using the following command:

```sh
g++ -o skiplist_example skiplist.cpp -std=c++11
```

## Memory Management
- The `malloc` function is used for node creation.
- Ensure proper memory cleanup to avoid memory leaks.

## Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a new branch for your feature.
3. Submit a pull request with a detailed explanation of your changes.

## License
This project is licensed under the MIT License.

## Author
saaya-code

## Contact
For any inquiries, reach out at [boualimohamed74@gmail.com].

