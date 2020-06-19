//BINARY SEARCH FOR First left element SORTED ARRAY*********
#include<iostream>
 using namespace std;
int search(int arr[],int l,int h,int x)
{
    int mid=l+(h-l)/2;
    if(l>h)
        return -1;
    if(arr[mid]==x&&arr[mid-1]!=x)
    {
        cout<<"index ["<<mid<<"] :";
        return mid;
    }
    else if(x<=arr[mid])
        return search(arr,l,mid-1,x);
    else
    {
        return search(arr,mid+1,h,x);
    }
    
    
}

int searchr(int arr[],int l,int h,int x)
{
    int mid=l+(h-l)/2;
    if(l>h)
    return -1;
    if(arr[mid]==x&&arr[mid+1]!=x)
    {
        cout<<"index ["<<mid<<"] :";
        
        return mid;
    }
    else if(x>=arr[mid])
    return searchr(arr,mid+1,h,x);
    else
    {
        return searchr(arr,l,mid-1,x);
    }
    
}
 
 int main()
 {
    int arr[]={1, 3, 3, 3, 6};
    int x;
    
    cin>>x;
    int r=searchr(arr,0,4,x);
    int l=search(arr,0,4,x);
    if(r!=-1)
    {
        if(l==r)
        cout<<"one occurence at index ["<<l<<"]";
        else
        {
            cout<<r-l+1<<" occurences from index ["<<l<<"] to ["<<r<<"]";
        }
        

    }
    else
    {
        cout<<"NOt Found the element "<<x;

    }
    
    return 0;
 }