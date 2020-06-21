#include<iostream>
using namespace std;

int search(int x)
{
    if(x==0||x==1)
    return x;
    int start=1,end=x;
    int result;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(mid*mid==x)
        {
            cout<<"perfect square of*";
        return mid;
        }
        if(x>mid*mid)
        {
            result=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        

    }
    cout<<"not perfect square & it is the nearest square of*"; 
    return result;
}

int main()
{
    int x;
    cin>>x;

    cout<<x<<" is :"<<search(x);
}