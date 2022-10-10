#include<iostream>
using namespace std;

int binary_search(int *arr , int n , int se)
{
	int start=0;
	int end=n-1;
	
	int mid;
	mid=start +(end-start)/2;
	while(start<=end)
	{
		
		if(arr[mid]==se)
		{
			return mid;
		}
		else if(mid>se)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		
		mid=start +(end-start)/2;
	}
	
	return -1;
}

int main() {
	
	int se;
	int n;

    cout<<"Size of array"<<endl;
	
	cin>>n;
	int arr[n];

    cout<<"Enter the elements of array"<<endl;
	
	for(int i=0 ; i<n ;i++)
	{
		cin>>arr[i];
	}
    cout<<"Element to search"<<endl;
    cin>>se;
	
	cout<<binary_search(arr,n,se)<<endl;
	
	return 0;
}
