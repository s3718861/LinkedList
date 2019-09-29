#include <iostream>
#include "Node.h"

class LinkedList {

    public:
        LinkedList();
        ~LinkedList();

        int size();
        void clear();
        int get(int i);

        void addFront(const int data);
        void addBack(const int data);

        bool contains(const int value);
        void deleteFront();
        void deleteBack();
        void print();

    private: 
        Node* head;
        int length;
};