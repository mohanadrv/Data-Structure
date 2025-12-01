#include<iostream>
using namespace std;


struct node{
        int data;
        node *next;
    };
class linkedlist{
 
    node *head;
    linkedlist(){
        head=NULL;
    }
    void add_at_the_begining(int x){
        node newnode;
        newnode.data=x;
        if (head == NULL){
            head =&newnode;
            newnode.next = NULL;
        }
        else{
            newnode.next=head;
        }
    }
    void add_at_the_end(int x){
   }   
    
    void add_at_any_location(int loc){
   }

   void insert (int x, int position){
    node * p;
    p = head; 
    int c=1;
    node *newNode = new node();
    while(p->next != NULL){
        p = p->next;
        c=c+1;
    }
    newNode->next=p->next;
    p->next=newNode;
    }
  void insert_before_value(int x, int newValue){
        node* temp = head;

        if (temp == NULL) return;

        if (temp->data == x) {
            node* n = new node();
            n->data = newValue;
            n->next = head;
            head = n;
            return;
        }

        while (temp->next != NULL && temp->next->data != x)
            temp = temp->next;

        if (temp->next == NULL) return;

        node* n = new node();
        n->data = newValue;
        n->next = temp->next;
        temp->next = n;
    }

};

    
