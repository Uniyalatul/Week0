#include<iostream>
#include<cmath>
using namespace std;

string jumpsearch(int arr[],int n, int key)
{
	int low = 0;
	int block = sqrt(n);
	int high = sqrt(n);
	int count = 0;
	while(high<n && arr[high]<key)
	{
		low += block;
		high += block;
		count++;
	}
	if(high>=n)
		high = n-1;

	for(int k = low; k<=high ; k++)
	{
		count++;

		if(arr[k] == key)
		{
			return "PRESENT " + to_string(count);
		}
	}
	return "NOT PRESENT " + to_string(count);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int arr[n];

		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int key;
		cin>>key;

		string str = jumpsearch(arr,n,key);
		cout<<str<<endl;
	}

	return 0;
}