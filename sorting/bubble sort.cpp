
// C++ program for implementation of Bubble sort  
#include <bits/stdc++.h> 
using namespace std; 
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place, that's why n-i-1
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(arr[j], arr[j+1]);  
             int temp = arr[j];  
              arr[j] = arr[j+1];  
              arr[j+1]= temp;  
}  
  
/* Function to print an array */
void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++) 
	 {
	    cout << arr[i] << " ";  
	 }
    cout << endl;  
}  
  
int main()  
{  
    int arr[] = {64, 34, 25, 12, 22, 11, 90};  
    int n = sizeof(arr)/sizeof(arr[0]);  
    bubbleSort(arr, n);  
    cout<<"Sorted array is=";  
    printArray(arr, n);  
    return 0;  
} 
