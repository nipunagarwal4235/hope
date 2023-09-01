#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor to free up memory when deleting a node
    ~Node(){
        int value = this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtStart(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtEnd(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d)
{
    if(position == 1)
    {
        insertAtStart(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<(position-1)){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL)
    {
        insertAtEnd(tail,d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp->next;
    temp->next = nodetoinsert;
}

void deleteAtPosition(Node* &head, int position){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head ->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* prev = NULL;
        int count = 1;
        while(count<position){
            prev= current;
            current = current->next;
            count++;
        }
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    // creating a new node
    Node* node1 = new Node(10);
    // cout << node1 << endl; 
    // cout<< node1->data << endl; 
    // cout<< node1->next << endl;

    //pointing head at the node 
    Node* head = node1;

    // print(head);

    //insert at the head or the starting 
    // insertAtStart(head,12);
    // print(head);

    // insertAtStart(head,15);
    // print(head);

    Node* tail = node1;

    insertAtEnd(tail,12);
    print(head);

    insertAtEnd(tail,115);
    print(head);
    insertAtPosition(tail,head,3,32);
    print(head);
    deleteAtPosition(head,2);
    print(head);
    return 0;
}