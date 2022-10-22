#include <iostream>
#include <vector>
using namespace std;
 vector <int >v;
 struct node
 { 
     int value;
     node*next;
     int count;
 };
 class Ll
 { 
    private:
    node *head; 
    int sum;
     
    public:
    Ll() ;
    void insertNode(int);
    void printList();
    void deleteNode(int);
    void linkedlist();
    int sumnodes();
};