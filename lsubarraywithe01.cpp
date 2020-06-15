#include<iostream>
#include<unordered_map>

using namespace std;

void check(int arr[],int n)
{
   int sum=0,highindex,lowindex;
   unordered_map<int,int> nmap;
   for(int i=0;i<n;i++)
   {
       arr[i]=(arr[i]==0)?-1:1;
   
   }

   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
        if(sum==0||nmap.find(sum)!=nmap.end())
        {
            
            highindex=i;
            if(nmap.find(sum)!=nmap.end())
            lowindex=nmap[sum]+1;
            

        }
        nmap[sum]=i;
   }

cout<<"The longest subarray with equal 0s and 1s is: "<<lowindex <<" to "<<highindex;
    
}

int main()
{

int arr[]={1,0,1,1,1,0,0};
int n=7;
check(arr,n);

}