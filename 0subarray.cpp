#include<iostream>
#include<unordered_map>

using namespace std;

bool check(int arr[],int n)
{
   int sum=0;
   unordered_map<int,bool> nmap;
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
   
    
        if(sum==0||nmap[sum]==true)
        return true;
        nmap[sum]=true;
   }
    return false;
}

int main()
{

int arr[]={1, 3, 4, 0, 4};
int n=5;

if(check(arr,n))
{
    cout<<"This array has a zero sum subarray";
}
else
{
    cout<<"This array doesn't have a zero sum sub array";
}


}