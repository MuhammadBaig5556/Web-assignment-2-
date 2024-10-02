#include <iostream>
#include "LinkedList.cpp"

int main() {
    LinkedList myList;

    myList.insertAtBeginning(3);
    myList.insertAtEnd(7);
    myList.insertAtBeginning(1);
    myList.insertAtEnd(9);

    std::cout << "Original List: ";
    myList.printList();

    myList.insertAtPosition(5, 2); // Inserting 5 at position 2

    std::cout << "List after insertion: ";
    myList.printList();

    return 0;
}
