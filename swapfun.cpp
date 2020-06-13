#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    
   int arr[]={1,2,3,10,4};
   int n=5,low=0,high=n-1;
   while(low<high)
   {
       swap(arr[low],arr[high]);
       low++;
       high--;
   }
   for(int i=0;i<5;i++)
   cout<<arr[i]<<" ";

    return 0;
}