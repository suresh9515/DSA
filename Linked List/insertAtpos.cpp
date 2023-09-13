#include<iostream>
using namespace std;
//insert at spectific position

struct Node{
	int data ;
	Node* next;
	Node(int x){
		data= x;
		next=NULL;		
	}
};
Node* insertAtpos(Node* head,int pos,int n){
	
	//traverse until pos
	Node* temp = new Node(n);
	if(pos==1){
		temp->next=head;
		return temp;
		
	}
	Node* curr =head;
	for(int i=0; (i<=pos-3 && curr!=NULL); i++){
		curr =curr->next;
	}
	if(curr==NULL){
		return head;
	}
	temp->next=curr->next;
	curr->next=temp;
	return head;
}
void display(Node* head){
	Node* curr = head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
int main(){
	Node* head = new Node(10);
	head->next= new Node(20);
	head->next->next= new Node(30);
	head->next->next->next= new Node(40);
    head =	insertAtpos(head,3,25);
	display(head);
	
}
