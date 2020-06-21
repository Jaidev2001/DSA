//BINARY SEARCH FOR SORTED ARRAY*********
#include<iostream>
 using namespace std;
int search(int arr[],int l,int h,int x)
{
    int mid=l+(h-l)/2;
    if(l>h)
        return 0;
    if(arr[mid]==x)
        return 1;
    else if(x<arr[mid])
        return search(arr,l,mid-1,x);
    else
    {
        return search(arr,mid+1,h,x);
    }
    
    
}
 int main()
 {
    int arr[]={1, 3, 4, 5, 6};
    int x;
    
    cin>>x;
    if(search(arr,0,4,x))
    {
        cout<<"Found the element "<<x;
    }
    else
    {
        cout<<"NOt Found the element "<<x;

    }
    
    return 0;
 }