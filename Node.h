class Node {
    public: 
        Node(int data, Node* next);
        Node();
        Node(const Node& other);
        ~Node();

        int data;
        Node* next;
};