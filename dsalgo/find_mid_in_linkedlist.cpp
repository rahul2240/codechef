#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node* next;
};

void printMid(Node* ptr){
    Node* fast_ptr = new Node();
    Node* slow_ptr = new Node();
    
    fast_ptr = ptr;
    slow_ptr = ptr;
    
    if(ptr!=NULL){
        while(fast_ptr != NULL && fast_ptr->next!=NULL){
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;
        }
        cout<<"middle: "<<slow_ptr->data<<" ";
    }
    
}

void printList(Node* ptr){
    
    
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

void app(Node** head_ref, int data){
    Node* ptr = new Node();
    ptr->data = data;
    ptr->next = (*head_ref);
    (*head_ref) = ptr;
}

int main()
{
   Node* head = NULL;
   
   app(&head, 5);
   app(&head, 10);
   app(&head, 15);
   app(&head, 20);
   app(&head, 25);
   app(&head, 30);
   app(&head, 35);
   
   printList(head);
   
   printMid(head);
   
   return 0;
}
