#include<iostream>

#include <climits>
using namespace std;
class stack
{
    int *data;     
    int nextIndex;
    int capacity;

    public:
    stack(int stacksize)   //initializes default values 
    {
        data=new int[stacksize];   //this represents the data that will be stored in the array
        nextIndex=0;          
        capacity=stacksize;    //the total size of the array
    }

    //this function returns the size of the stack
    int size()
    {
        return nextIndex;
    }

    
    bool isEmpty()
    {
        return nextIndex==0;
    }

    bool isFull()
    {
        return nextIndex==capacity;
    }

    void push(int d)
    {
        if(isFull()==0)
        {
        data[nextIndex]=d;
        

        nextIndex++;
        }
    }

    int pop()
    {
        if(isEmpty()==0)
        {
            int temp=data[nextIndex-1];
            
            nextIndex--;
            return temp;
        }
        return INT_MIN;
    }


};

int main()
{
    stack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.pop();
    cout<<s.size();

}
