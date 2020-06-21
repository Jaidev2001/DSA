//BINARY SEARCH FOR First left element SORTED ARRAY*********
#include<iostream>
 using namespace std;

int search(int arr[],int l,int h)
{
    int mid=l+(h-l)/2;
    if(l>h)
        return -1;
    if(arr[mid]==l||arr[mid]==h)
        return arr[mid];
    if(arr[mid]>=arr[mid+1]&&arr[mid]>=arr[mid-1])
    {
        return arr[mid];
        
    }
     if(arr[mid+1]>arr[mid-1])
        return search(arr,mid+1,h);
    else
    {
        return search(arr,l,mid-1);
    }
    
    
}


 
 int main()
 {
    int arr[]={1,3,3,3,6};
    
    
    int l=search(arr,0,4);
    if(l!=-1)
    {
        cout<<"Peak element is: "<<l;
        

    }
    else
    {
        cout<<"NOt Found the peak element "<<l;

    }
    
    return 0;
 }