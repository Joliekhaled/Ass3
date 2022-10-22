#include "Nodes.h"
#include <iostream>
#include <vector>
using namespace std;
void insertafter(int first, int second);
int main()
{
   
    int n;
    cout << "Please enter the size of the vector: " << endl;
    cin >> n;
   
    cout << "Please enter the elements of the vector : " << endl;
    
    for (int i=0; i<n; i++)
    {   int x;
        cin >> x;
        v.push_back(x);
    }
    vector <int >::iterator iter;
    cout<<"The vector before inserting any elements"<<endl;
    for (iter=v.begin(); iter != v.end(); iter++)
    {
        cout << *iter<<endl;
        
    }
    int firstelement, secondelement;
    cout << "Please enter the first and the second element:" << endl;
    cin >> firstelement >> secondelement;
    insertafter(firstelement, secondelement);
    Ll *obj = new Ll;
    obj->linkedlist();
    obj->printList();
    cout << "The sum of all nodes is : " << obj->sumnodes();
    
    return 0;
}
void insertafter(int first, int second)
{  
   vector <int >::iterator iter;
   
    
    for (int i =0; i<v.size(); i++)
    {
        if(v.at(i)==first){
            
            v.insert(v.begin()+i+1, second);
        }
        
    }
  
cout<<"The vector after inserting " << second << " after " << first << ":" <<endl;
    for (iter=v.begin(); iter != v.end(); iter++)
    {
        cout << *iter<<endl;
        
    } 
}
