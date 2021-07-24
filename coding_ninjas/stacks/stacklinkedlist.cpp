#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Stack {
	// Define the data members
    Node *head;
    int size;
   public:
    Stack() {
        // Implement the Constructor
        head=NULL;
        size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        
            
        return head==NULL;    
    }

    void push(int element) {
        // Implement the push() function
        if(head==NULL)
        {
            Node *newhead=new Node(element);
            head=newhead;
            size++;
        }
        else
        {
            
            Node *newhead=new Node(element);
            newhead->next=head;
            head=newhead;
            size++;
        }
    }

    int pop() {
        // Implement the pop() function
        if(head==NULL)
            return -1;
        Node *temp=head;
        int tdata=head->data;
        head=head->next;
        size--;
        delete temp;
        return tdata;
        
    }

    int top() {
        // Implement the top() function
        if(head==NULL)
            return -1;
        return head->data;
        
    }
};

int main() {
    Stack st;

    int q;
    cin >> q;

    while (q--) {
        int choice, input;
        cin >> choice;
        switch (choice) {
            case 1:
                cin >> input;
                st.push(input);
                break;
            case 2:
                cout << st.pop() << "\n";
                break;
            case 3:
                cout << st.top() << "\n";
                break;
            case 4:
                cout << st.getSize() << "\n";
                break;
            default:
                cout << ((st.isEmpty()) ? "true\n" : "false\n");
                break;
        }
    }
}