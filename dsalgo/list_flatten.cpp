// Given a linked list where every node represents a linked list and contains two pointers of its type:
// (i) Pointer to next node in the main list (we call it ‘right’ pointer in below code)
// (ii) Pointer to a linked list where this node is head (we call it ‘down’ pointer in below code).
// All linked lists are sorted. See the following example

//       5 -> 10 -> 19 -> 28
//       |    |     |     |
//       V    V     V     V
//       7    20    22    35
//       |          |     |
//       V          V     V
//       8          50    40
//       |                |
//       V                V
//      30               45

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* down, *right;
};

void append(Node** head_ref, int data){
    
    Node* ptr = new Node();
    

    ptr -> data = data;
    
    ptr -> down = (*head_ref);
    
    (*head_ref) = ptr;
  
}

void pl(Node* ptr){
    
    Node* ptr1 = new Node();
    
    while(ptr!=NULL){
        
        ptr1 = ptr;
        while( ptr1 != NULL ){
            cout<<ptr1->data<<" -> ";
            ptr1 = ptr1->down;
        }
        
        cout<<"\n";
        
        ptr = ptr -> right;
    }
}

Node* merge(Node* ptr1, Node* ptr2){
    if (ptr1 == NULL) return ptr2;
    if (ptr2 == NULL) return ptr1;
    
    Node* result = new Node();
    
    if (ptr1->data < ptr2->data){
        result = ptr1;
        result->down = merge(ptr1->down, ptr2);
    } else {
        result = ptr2;
        result->down = merge(ptr1, ptr2->down);
    }
    
    return result;
}

Node* flatten(Node* ptr){
    
    if ( ptr == NULL || ptr -> right == NULL ) return ptr;
    return merge(ptr, flatten(ptr->right));
}

int main() {
	
	Node* head = NULL;
	Node* head1 = NULL;
	Node* head2 = NULL;
	
	
	
	append(&head, 10);
	append(&head, 7);
	append(&head, 3);
	
	append(&head->right, 11);
	append(&head->right, 6);
	append(&head->right, 5);
	
	append(&head->right->right, 15);
	append(&head->right->right, 9);
	append(&head->right->right, 8);
	
	head1 = head->right;
	head2 = head1->right;
	
	pl(head);
	
	Node*ptr = new Node();
	ptr = flatten(head);
	
	cout<<"------------------------"<<endl;
	pl(ptr);
	return 0;
}
