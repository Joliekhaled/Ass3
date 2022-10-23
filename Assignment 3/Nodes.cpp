#include "Nodes.h"
#include <iostream>
#include <vector>
using namespace std;
 Ll::Ll()
 {
    head = NULL;
    sum=0; 
 }

void Ll::deleteNode(int Node1)
{
    node *p = head, *q = NULL;
    int S = 0;
  
    if (head == NULL) {
        cout << "The linked List is empty, so no things exist to delete" << endl;
        return;
    }
    while (p != NULL) {
        p = p->next;
        S++;
    }
    if (S < Node1) {
        cout << "Index out of range"<< endl;
        return;
    }
    p = head;
  
    if (Node1 == 1) {
        head = head->next;
        delete p;
        return;
    }
    while (Node1-- > 1) {
    
       q = p;
       p = p->next;
    }
 
   q->next = p->next;
    delete p;
}
 
void Ll::insertNode(int value)
{
    
    node* N = new node[value];
  
    
    if (head == NULL) {
        head = N;
        return;
    }
  
    
    node* n = head;
    while (n->next != NULL) {
        n = n->next;
    }
 
    n->next = N;
}
  
void Ll::printList()
{
    node* p = head;
  
    
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
  
    
    while (p != NULL) {
        cout << p->value << " "<< p->count;
        
        p = p->next;
    }
}
void Ll:: linkedlist ()
{
for (int i=0; i<v.size(); i++)
{   node *p= head;
    bool prime = 1;
    while (p->next!=NULL)
    {
        if (p->value == v[i])
        {
            p->count++;
            prime=0;
        }
        p=p->next;
    }
    if (prime==1)
    {
        insertNode(v[i]);
    }
}
}
 int Ll::sumnodes()
{   node*p=head;
    sum=0;
    while (p!=NULL)
    {
       sum=sum+p->value;
    }
    return sum;
}
