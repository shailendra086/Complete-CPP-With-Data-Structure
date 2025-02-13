#include <iostream>
using namespace std;


//linked list node making

class Node {
    public:
    int data;
    Node* next;
    //consturcture to initialize the node with data and next pointer
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main() {
    Node* node1 = new Node(10);
    cout << node1->data<<endl;
    cout << node1->next<<endl;
    return 0;
}