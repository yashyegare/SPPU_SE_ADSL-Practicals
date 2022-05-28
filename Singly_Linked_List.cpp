// implementation of singly linked list

#include <bits/stdc++.h>

using namespace std;

//A class to create node

class Node {

public:

int data;

Node* next;

};

// A function to print the given linked list

// starting from the given node

void printList(Node* n)

{

while (n != NULL)

 {

cout << n->data << " ";

n = n->next;

 }

}

int main()

{

//creating nodes

Node* head = NULL;

Node* second = NULL;

Node* third = NULL;

Node* tail = NULL;

// allocate four nodes

head = new Node();

second = new Node();

third = new Node();

  tail = new Node(); 

head->data = 2; // assign data in head node

head->next = second; // Link first node with second

  second->data = 3; // assign data to second node

  second->next = third;//Link second node with third

  third->data = 5; // assign data to third node

  third->next = tail;//Link third node with tail

tail->data = 7;// assign data to tail node

tail->next=NULL;//link tail node with NULL

//printing singly linked list

cout<<"Created singly linked list: "<<endl;

printList(head);

return 0;

}