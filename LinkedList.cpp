#include <stdexcept>

class stack {
private:
    struct Node {
        int data;
        Node* next;
        Node(int value) : data(value), next(nullptr) {}
    };

    Node* top;

public:
    stack() : top(nullptr) {}

    ~stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            throw std::out_of_range("stack is empty. Cannot pop.");
        }
        Node* temp = top;
        int data = top->data;
        top = top->next;
        delete temp;
        return data;
    }

    bool isEmpty() const {
        return top == nullptr;
    }

    int peek() const {
        if (isEmpty()) {
            throw std::out_of_range("stack is empty. Cannot peek.");
        }
        return top->data;
    }
};

#include <iostream>

int main() {
    stack mystack;

    mystack.push(10);
    mystack.push(20);
    mystack.push(30);

    std::cout << "Top element: " << mystack.peek() << std::endl;
    std::cout << "Popped element: " << mystack.pop() << std::endl;
    std::cout << "Popped element: " << mystack.pop() << std::endl;
    std::cout << "Is stack empty? " << (mystack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}