//pair sum for sorted array

#include<iostream>

using namespace std;

int pairsum(int arr[],int left,int right,int x)
{
    
    
    while(left!=right)
    {
        
        if(arr[left]+arr[right]==x)
        {
            cout<<"pair is "<<arr[left]<<" , "<<arr[right];
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

int search(int arr[],int n,int x)
{
    
    for(int i=0;i<n;i++)
    {
        if(pairsum(arr,i+1,n,x-arr[i]))
        {
            cout<<" and "<<arr[i];
            return 1;
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