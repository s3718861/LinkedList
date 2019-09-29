#include "LinkedList.h"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

LinkedList::LinkedList() {
    this->length = 0; //setting the length initally to zero
    this->head = nullptr; //no head has been defined on creation, set to nullptr
}

LinkedList::~LinkedList() {
    cout << "List deleted" << endl;
}

void LinkedList::addFront(const int data){
    Node* node = new Node();
    node->data = data;
    node->next = this->head; //stores the value of the previous node in the new node

    this->head = node; //stores address of the current node as the head
    this->length++;    //counts the length of the list

}

//for doubly linked list
void LinkedList::addBack(const int data) {

}

void LinkedList::deleteFront() {
    this->length--;
}

void LinkedList::print() {
    Node* head = this->head;
    int i = 1;
    while(head) {
        cout << i << " " << head->data << endl;
        head = head->next;
        i++;
    }
}

int LinkedList::size() {
    return this->length;
}


// int main() {
//     cout << "Linked list exercise :)" << endl;
//     LinkedList testList = LinkedList();
//     testList.addBack(222);
//     testList.addBack(333);
//     testList.addBack(444);

//     testList.print;
//     cout << testList.size;
// }




