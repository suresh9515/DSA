#include<iostream>
using namespace std;
//creating linked list Node
struct Node{
	
	int data;
	Node* next;
	
	//constructor
	Node(int x){
		data = x;
		next = NULL;
		
	}
	
};
//printing the linked list by hesad pointer

Node *insertatbegining(Node* head,int n){
   
   
   Node* NewNode = new Node(n);
   
   NewNode->next = head;
   
   
   return NewNode;
    	
}

int searchlinkedlist(Node* head ,int x){
	int count =1;
	
    //traverse
    Node* curr = head;
    while(curr!=NULL){
    	if(x==curr->data){
    		return count;
		}
		curr = curr->next;
		count++;
	}
	
	return 0;
}


int Recursivesearchlinkedlist(Node* head ,int x){
	int count =1;
	
    if(head!=NULL){
    	
    	if(head->data == x){
    		return count;
		}else{
			count++;
			Recursivesearchlinkedlist(head->next,x);
		}
	}
	
	return -1;
}


void printlist(Node* head){
	//create a current pointer
//	Node* curr = head;
//	while(curr!=NULL){
//		cout<<curr->data<<" ";
//		curr = curr ->next;
//	}
//	
	//recursive approach
	if(head!=NULL){
		cout<<head->data<<" ";
		printlist(head->next);
	}
}

int main(){
	//creating nodes
	Node* head =  new Node(10);
	head->next =  new Node(20);
	head->next->next  =new Node(30);
	head->next->next->next=new Node(40);
	int size;
	cin>>size;
	for(int i=0; i<size; i++){
	int n;
	cin>>n;
	head = insertatbegining(head,n);
}
	

	
	printlist(head);
   
//	
//	printlist(head);
//	int res = Recursivesearchlinkedlist(head,30);
//	cout<<res;
	
	
//	N1->next = N2;
//	N2->next = N3;
//	
//	cout<<N1->data<<" ";
//		cout<<N2->data<<" ";
//			cout<<N3->data<<" ";
	
}
