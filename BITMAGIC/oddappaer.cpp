//program to find the two odd ocuuring element
#include<iostream>

using namespace std;
int find(int arr[],int n)
{
    int sn=0,res1=0,res2=0;
    for(int i=0;i<n;i++)
    {
        sn=sn^arr[i];
    }
    int xo=sn^(sn-1);
    for(int i=0;i<n;i++)
    {
        if((xo&arr[i])!=0)
            res1=res1^arr[i];
        else
        {
            res2=res2^arr[i];
        }
        
    }
    cout<<"two odd occuring numbers are:"<<res1<<",";
    return res2;
}
int main()
{
    int arr[]={2,2,3,4,3,4,5,8,9,9};
    int n=10;
    cout<<find(arr,n);
}