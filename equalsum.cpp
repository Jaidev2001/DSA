#include<iostream>

using namespace std;

bool check(int arr[],int n)
{
   int sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
   }
    int nsum=0,j=0;
   for(int i=0;i<n;i++)
   {
       nsum+=arr[i];
       if(sum/3==nsum)
       {
           j++;
           nsum=0;
       }
   }
    if(j==3)
    return true;

    return false;
}

int main()
{

int arr[]={1, 3, 4, 0, 4};
int n=5;

cout<<"Array can be divided into three parts: "<<check(arr,n);

}