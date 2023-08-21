#include<bits/stdc++.h>
using namespace std;

struct Node{
	int val;
	Node* next;
};

class Stack{
	Node* head;
	int stSize;

	public:
		Stack(){
			head=nullptr;
			stSize=0;
		}

	void push(int d){

		Node* temp = new Node();
		temp->val=d;
		temp->next=head;
		head=temp;
		stSize++;
	}

	void pop(){
		if(head==nullptr){
			cout<<"Stack is empty!"<<endl;
			return;
		}
		Node* temp=head;
		head=temp->next;
		temp->next=nullptr;
		delete temp;
		stSize--;
	}

	int top(){
		if(head==nullptr){
			cout<<"Stack is empty!"<<endl;
			return -1;
		}
		cout<<"Top element is : "<<head->val<<endl;
		return head->val;
	}

	int size(){
		cout<<"Size : "<<stSize<<endl;
		return stSize;
	}	

	void empty(){
		if(head==nullptr){
			cout<<"Stack is empty!"<<endl;
		}
		else{
			cout<<"Stack is not empty!"<<endl;
		}
	}

	void print(){
		if(head==nullptr){
			cout<<"Stack is empty!"<<endl;
			return;
		}
		Node* temp=head;

		while(temp!=nullptr){
			cout<<temp->val<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

};

int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.print();
	s.empty();
}
