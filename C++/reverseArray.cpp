//Problem statement : Given an array of integers, for example [1,8,9,10,23,2,4,13,17], write a program to reverse the array i.e. o/p should be [17,13,4,2,23,10,9,8,1]
// Time Complexity : O(n) (Iterative method)
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end) //Function to reverse the array 
{
	while (start < end)
	{   int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
    }
}	

void printArray(int arr[], int size) //Function to print the array 
{
for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;
}

int main() //Driver code
{
	int n;
    int arr[n];
	
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	printArray(arr, n);
	reverseArray(arr, 0, n-1);
	cout << "Reversed array is" << endl;
	printArray(arr, n);
	
	return 0;
}
