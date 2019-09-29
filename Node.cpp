#include "Node.h"

#include <iostream>

using std::string;
using std::cout;
using std::endl;

Node::Node(int data, Node* next) //:
    // data(data),
    // next(next)
{
    this->data = data;
    this->next = next;
    cout << "Node Copy: " << data << endl;
}

Node::Node() {

}


Node::Node(const Node& other) :
    data(other.data),
    next(other.next)
{
    cout << "Node Copy: " << data << endl;
}

Node::~Node() {
    cout << "Node deconstructor " << data << endl;
    next = nullptr;
}

int main() {
    return 0;
}