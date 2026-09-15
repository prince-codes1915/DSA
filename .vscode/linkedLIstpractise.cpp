#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
    }

    void push_back(int val){
    Node* temp = new Node(val);
    if(head == NULL){
        head = tail = temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
   }

   void pop_back()
   {
    if(head == NULL) return;
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
   }

   void pop_front(){
    if(head == NULL) return;

    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;

   }

   void insert(int val , int pos)
   {
    
   }

   void printList(){
    Node* temp = head;
    while(temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
   }

};



int main()
{
    List ll;
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_front(1);
    ll.printList();
}