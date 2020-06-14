#include<iostream>

using namespace std;

int water(int arr[],int n)
{
    int min=arr[0],max=arr[0],profit=0,i=0;

    while(i<=n-1)
    {
        if(arr[i]>max&&arr[i]>min)
        {
            max=arr[i];

        }
       else
       {

            profit+=max-min;
          
            min=arr[i];
            max=arr[i];
       } 
       if(i==n-1)
       profit+=max-min;
       
       
        i++;
    }
    
    

    return profit;
    
}

int main()
{

int arr[]={1,5,3,8,12};
int n=6;

cout<<"maximum profit: "<<water(arr,n);

}