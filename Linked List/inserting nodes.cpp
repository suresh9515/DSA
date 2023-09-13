#include<iostream>
using namespace std;

// insert at begining and displaying traversing searching over

struct Node{
	int data ;
	Node* next;
	Node(int x){
		data= x;
		next=NULL;		
	}
};
//insert function
Node* insert(Node* head,int n){
	//create a temp node
	Node* temp = new Node(n);
	temp->next = head;
	return temp;
}
Node* insertAtend(Node *head , int n){
	Node* temp = new Node(n);//allocating memeory
	if(head==NULL){
		return temp;
	}
	Node* curr = head;
	while(curr->next!= NULL){
		curr= curr->next;
	}
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
 	Node* head = NULL;
 	int size;
 	cin>>size;
 	for(int i=0; i<size; i++){
 		int n; cin>>n;
 		 head = insertAtend(head,n);
	 }
	 
	 //display nodes
	 
	 display(head);
 }
