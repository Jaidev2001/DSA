#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    
   int arr[]={1,2,3,10,4};
   reverse(begin(arr),end(arr));
   for(int i=0;i<5;i++)
   cout<<arr[i]<<" ";

    return 0;
}