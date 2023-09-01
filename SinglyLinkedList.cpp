#include<bits/stdc++.h>
using namespace std;

//creating a class Node to encapsulate all the Nodea of the linked list
class Node{
    public:
    int data;
    Node* next;

//constructor which initialises the data and points the value of the null pointer to NULL
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    //using dynamic object creation make a pointer of type node
    Node* node1 = new Node(10);
    cout << node1 << endl; // prints the address of the pointer node1
    cout<< node1->data << endl; 
    cout<< node1->next << endl;
    return 0;
}