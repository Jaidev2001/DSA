//pair sum of unsorted array****
#include<iostream>
#include<unordered_map>

using namespace std;

int search(int arr[],int n,int x)
{   
    unordered_map<int,int> nmap;
    unordered_map<int,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        nmap[arr[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
        it=nmap.find(x-arr[i]);
        if(it==nmap.end())
            return 0;
        else
        {
            cout<<"pair is "<<arr[i]<<" and "<<arr[it->second];
            return 1;
        }
        
    }
    return 0;
}

int main()
{
    int arr[]={3,5,9,2,8,10,11};
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