#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node*next;
};
void push(Node**head_ref,int new_data)
{
	Node*x=new Node();
	x->data=new_data;
	x->next=*head_ref;
	*head_ref=x;
}
void reverse(Node*head)
{   
	Node*pre=NULL;
	Node*nex=NULL;
	Node*cur=head;
	  while(head!=NULL)
	  {
	  	nex=cur->next;
	  	cur->next=pre;
	  	pre=cur;
	  	cur=nex;
	  }
	  head=pre;
	
}
void print(Node*n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int  main()
{
	Node*head=NULL;
	push(&head,10);
	push(&head,20);
	push(&head,30);
	print(head);
	reverse(head);
	print(head);
	return 0;
}
