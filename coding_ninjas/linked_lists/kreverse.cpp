#include <iostream>

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
Node *reverse(Node *head,int k)
{
    if(k==1||head->next==NULL)
        return head;
    
    Node *temp=reverse(head->next,k-1);
    
    temp->next=head;
    
    return temp->next;
    
    
}


Node *kReverse(Node *head, int k)
{
	//Write your code here
    if(k==0)
        return head;
    Node *temp=head;
    int count=0;
    Node *fh=NULL;
    Node *mh=NULL;
    Node *ft=NULL;
    while(temp!=NULL)
    {
        if(count==k-1)
        {
            fh=temp;
            mh=temp->next;
            temp=temp->next;
           	ft=reverse(head,k); 
            ft->next=mh;
        }
        
        else if((count+1)%k==0||temp->next==NULL)
        {
           // cout<<mh->data;
            //cout<<" *"<<mh->next->data<<" ";
            	ft->next=temp;
                temp=temp->next;
            	
               ft=reverse(mh,k);
            //cout<<ft->data;
           
            mh=temp;
                
            ft->next=mh;
            //if(mh!=NULL)
              //  cout<<mh->data;
            
        }
        else 
            temp=temp->next;
        count++;
        
            
    }
    
    
        
        return fh;
        
        
        
        
    
}


using namespace std;
//#include "solution.h"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int k;
		cin >> k;
		head = kReverse(head, k);
		print(head);
	}
	
	return 0;
}

