//BINARY SEARCH FOR SORTED ARRAY AND ROTATED ARRAY*********
#include<iostream>
 using namespace std;
int search(int arr[],int l,int h,int x)
{
    int mid=l+(h-l)/2;
    if(l>h)
        return -1;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>arr[mid+1])
    {
        if(arr[l]>x)
        return search(arr,mid+1,h,x);
        else
        {
            return search(arr,l,mid-1,x);
        }
        
    }
    else if(arr[mid]>x)
    {
        return search(arr,l,mid-1,x);
    }
    else
    {
        return search(arr,mid+1,h,x);
    }
    
    
    
}
 int main()
 {
    int arr[]={10,20,1,2,3,4,5};
    int x;
    
    cin>>x;
    int a=search(arr,0,6,x);
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