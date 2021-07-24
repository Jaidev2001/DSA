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

int countNode(Node *head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    
    return count;
}


Node *bubbleSort(Node *head)
{
	// Write your code here
    int count=countNode(head);
    bool swapped=false;
    for(int i=0;i<count-1;i++)
    {
        Node *temp=head;
        swapped=false;
        for(int j=0;j<count-i-1;j++)
        {
            if(temp->data>temp->next->data)
            {
                int d=temp->data;
                temp->data=temp->next->data;
                temp->next->data=d;
                swapped=true;
            }
           temp=temp->next;
        }
        if(swapped==false)
            break;
        
    }
    return head;
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
	Node *head = takeinput();
	head = bubbleSort(head);
	print(head);
}