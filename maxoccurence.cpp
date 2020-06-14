#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int maxo(int l[],int r[],int n)
{
    int arr[1000];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++)
    {
        arr[l[i]]+=1;
        arr[r[i]+1]-=1;

    }   

      

    int max=0,a;
    for(int i=1;i<1000;i++)
    {
        arr[i]+=arr[i-1];
        if(arr[i]>=max)
        {
            max=arr[i];
           
            a=i;
            cout<<i<<" occurs "<<arr[i]<<endl;
        }
    }
    return a;
}

int main()
{

int L[]={1,2,5,5};
int R[]={6,8,7,18};
int n=4;

cout<<"Maximum occuring element is: "<<maxo(L,R,n);

}