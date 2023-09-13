#include<iostream>
using namespace std;

// deleteing the first node of linked list
//approach


struct Node{
	int data ;
	Node* next;
	Node(int x){
		data= x;
		next=NULL;		
	}
};

//delete first node of linked list
//by using extra pointer node

Node* deletefirstNode(Node* head){
	if(head == NULL){
		return NULL;
	}else{
	
	Node* temp = head->next;
	delete head;
	return temp;
}


	
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
    head =	deletefirstNode(head);
	display(head);
	
}
