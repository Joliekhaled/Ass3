#include "Nodes.h"
#include <iostream>
#include <vector>
using namespace std;
 Ll::Ll()
 {
    head = NULL;
    sum=0; 
 }

int Ll::sumnodes()
{
    node* p = head;
    sum = 0;
    while (p != NULL)
    {
        sum = sum + p->value;
        p = p->next;
    }
    return sum;
}
//delete node
void Ll::deleteNode(int Node1)
{
    node* p = head;
    node* q = head;
    while (p != NULL)
    {
        if (p->value == Node1)
        {
            q->next = p->next;
            delete p;
            break;
        }
        q = p;
        p = p->next;
    }
}
// take value from user and insert it in the linked list
void Ll::insertNode(int value)
{
    node* p = new node;
    p->value = value;
    p->next = NULL;
    p->count = 1;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        node* q = head;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = p;
    }
}
void Ll::printList()
{
    node* p = head;

    if (p == NULL) {
        cout << "List empty" << endl;
        return;
    }
    while (p != NULL)
    {
        cout << "Value: " << p->value << " " << "Count: " << p->count;
        cout << endl;
        p = p->next;
    }

}
void Ll::linkedlist()
{
bool prime = 0;
for (int i = 0; i < v.size(); i++)
{
node* p = head;
while (p != NULL)
{
if (p->value == v[i])
{
p->count++;
prime = 1;
break;
}
p = p->next;
}
if (prime == 0)
{
insertNode(v[i]);
}
prime = 0;
}
}
