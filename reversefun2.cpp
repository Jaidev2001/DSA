#include<iostream>
#include<algorithm>

using namespace std;
void reversearray(int a[],int front,int back)
{
    while(front<back)
    {
        int temp=a[front];
        a[front]=a[back];
        a[back]=temp;
        front++;
        back--;
        
    }
}

int main()
{
    int arr[]={8,5,11,3,6,7};
    int n=6;
    int d=2;
     reversearray(arr,0,d-1);
     reversearray(arr,d,n-1);
     reversearray(arr,0,n-1);
    for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";

    return 0;
}