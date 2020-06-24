//pair sum of unsorted array****
#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

int pairsum(int arr[],int n,int x)
{   
    unordered_map<int,int> nmap;
    unordered_map<int,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        nmap[pow(arr[i],2)]=i;
    
    }
    for(int i=0;i<n;i++)
    {
        it=nmap.find(x-pow(arr[i],2));
        
        if(it!=nmap.end())
        {   
        
            cout<<"triplet is "<<arr[i]<<", "<<arr[it->second];
            return 1;
        }
        
    }
    return 0;
}

int search(int arr[],int n)
{
    int k=0;
    
    for(int i=0;i<n;i++)
    {
        int a=pairsum(arr,n,pow(arr[i],2));
        if(a!=0)
        {
            cout<<" and "<<arr[i];
            return 1;

        }
    }
    return 0;
}

int main()
{
    int arr[]={3,2,4,6,5};
    int n=5;
   
    int a=search(arr,n);
    if(a)
    {
        cout<<"\nIt has a pythogorean triplet";
    }
    else
    {
        cout<<"\nIt doesn't have a pythogorean triplet";
    }
    
}