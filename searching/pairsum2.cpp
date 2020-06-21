#include<iostream>

using namespace std;

int search(int arr[],int n,int x)
{
    int left=0,right=n;
    
    while(left!=right)
    {
        
        if(arr[left]+arr[right]==x)
        {
            cout<<"pair is "<<arr[left]<<" and "<<arr[right];
            return 1;
        }
        else if(x<arr[left]+arr[right])
        {
            right--;

        }
        else
        {
            left++;
        }
        
        
    }
    return 0;
}

int main()
{
    int arr[]={2,4,8,9,11,12,20};
    int n=6;
    int x;
    cin>>x;
    int a=search(arr,n,x);
    if(a)
    {
        cout<<" found the pair sum";
    }
    else
    {
        cout<<"Not found the pair sum";
    }
    
}