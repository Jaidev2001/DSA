#include<iostream>

using namespace std;

int water(int arr[],int n)
{
    int left=0;
    int right=n-1;
    int lmax=0,rmax=0,sum=0;

    while(left<=right)
    {
        if(arr[left]<arr[right])
        {
            if(arr[left]>lmax)
                lmax=arr[left];
            else 
                sum+=lmax-arr[left];
            left++;
        }
        else
        {
            if(arr[right]>rmax)
                rmax=arr[right];
            else
            {
                sum+=rmax-arr[right];
            }
            right--;
        }
    }
    
    

    return sum;
    
}

int main()
{

int arr[]={3,0,1,2,5};
int n=5;

cout<<"The blocks of water that can be filled: "<<water(arr,n);

}