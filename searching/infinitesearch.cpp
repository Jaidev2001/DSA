//BINARY SEARCH FOR SORTED ARRAY*********
#include<iostream>
 using namespace std;
int search(int arr[],int l,int h,int x)
{
    int mid=l+(h-l)/2;
    if(l>h)
        return -1;
    if(arr[mid]==x)
        return mid;
    else if(x<arr[mid])
        return search(arr,l,mid-1,x);
    else
    {
        return search(arr,mid+1,h,x);
    }
    
    
}

int infarr(int arr[],int x)
{
    if(arr[0]==x)
    {
        return 0;
    }
    int i=1;
    while (arr[i]<x)
    {
        i=i*2;
    }

    if(arr[i]==x)
    return i;
    else
    {
        return search(arr,i/2,i,x);
    }
    
    
}

 int main()
 {
    int arr[]={1,8,20,40,60,80,90,100,120,180};
    int x;
    
    cin>>x;
    int a=infarr(arr,x);
    if(a!=-1)
    {
        cout<<"Found the element "<<x<<" at index ["<<a<<"]";
    }
    else
    {
        cout<<"NOt Found the element "<<x;

    }
    
    return 0;
 }