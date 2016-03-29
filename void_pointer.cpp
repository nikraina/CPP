#include <iostream>
#include <string>

using namespace std;

struct Node {
    void * data;
    struct Node *next;
};

int main()
{
   Node* head = new Node;
   Node* temp = new Node;
   int x = 3;
   head->data = (void *) &x;
   int* y = (int *)head->data;
   cout<<"Node initially has integer then same node can have string as well"<<endl;
   cout<<"temp_data ::"<<*y<<endl;
   
   
   string str = "hello";
   
   temp->data = (void *) &str;
   
   string* dref = (string *)temp->data;
   cout<<"temp_data ::"<<*dref<<endl;
   
   
   return 0;
}
 