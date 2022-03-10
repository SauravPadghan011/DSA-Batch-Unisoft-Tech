#include<iostream>
using namespace std;

class node {
	public:
	int data;
	node *next , *prev;
	
	node(int val){
		data = val;
		next = NULL;
		prev = NULL;
	}
};

node *head = NULL;

void insert(int data){
	
	node * newnode = new node(data);
	if(head == NULL){
		head = newnode;
		return ;
	}
	
	newnode->next = head;
	head = newnode ;
	newnode->prev = newnode;
}

void display(){
	
	node *temp = head;
	
	while(temp->next != NULL){
		cout<<temp->data <<endl;
		temp = temp->next;
	}
}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	display();


	return 0;
}
