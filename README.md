# Insert a Node at a specific position in a linked list

This challange is part of a tutorial track by https://www.youtube.com/mycodeschool and is accompanied by a video lesson

## Introduction
- Add function definition for insertAtPosition(int value, int position), insertAtEnd(int value), insertAtBeginning(int value) that insert the node base on the function name.

**Example**
- head refers to the first node in the list 1 -> 2 -> 3
- data = 4
- position = 2
- Insert a node at position  with . The new list is 1 -> 2 -> 4 -> 3

### Function Description
- Complete the function insertAtPositio in the editor below. It must return a reference to the head node of your finished list. 
- insertAtPositio has the following parameters:
    + value: an integer value to insert as data in your new node
    + position: an integer position to insert the new node, zero based indexing

### Input Format
- The first line contains an integer , the number of elements in the linked list.
- Each of the next **n** lines contains an integer SinglyLinkedListNode[i].data.
- The next line contains an integer **data**, the data of the node that is to be inserted.
- The last line contains an integer **position**.

### Constraints
- 1 <= n <= 1000
- 1 <= SinglyLinkedListNode[i].data <= 1000, where SinglyLinkedListNode[i] is the ith element of the linked list.
- 0 <= position <= n.

### Note: 
- My set up: Apple M1 with visual studio code, NO PLUGIN
- I ran into this issues
```
Node.cpp:6:41: error: use of undeclared identifier 'nullptr'
    Node(int value) : data(value), next(nullptr) {}
```
- Run this
```cplus
g++ -std=c++11 Node.cpp LinkedList.cpp driver.cpp -o driver
```
- Output
```
// Output
Original List: 1 3 7 9 
List after insertion: 1 3 5 7 9 

// Explanation
// The initial linked list is . Insert  at the position  which currently has  in it. The updated linked list is .
```

### Requirements:
Your program must be split into 4 files: 
- The driver program
- The class interface (add if needed)
- The class header file (class definition - add if needed)
- The class implementation file.

The driver program for each programming project should begin with "header comments" containing:
```cplus
/**
Your name
Programming assignment number
A short description of the program
Course
The date
*/

/**
For example:
Programmer: TRUC HUYNH
Project number: 2
Project Desc: Quadratic Expression class
Course: COSC 2436 PF III Data Structures
Date:   01/12/2024
*/
```
**note:**
- Use a standard indentation convention in your code (see examples in textbook).
- Use meaningful variable names.
- **Do not use global variables.**
- **Your class methods should not contain any input or output operations. All input and output should be done in your driver.**

### Submission:
Project will automatically clone to your github account. Please clone to your work space and work on it. Make sure you push regularly to create good habit. Your code will automatically submit to my board when you push. I will grade by due date. 
