#include<iostream>

using namespace std;

string binarysearch(int arr[],int n, int key)
{
	int start = 0;
	int end = n;
	int count = 0;
	while(start<=end)
	{	count++;
		int mid = (start+end)/2;
		if(arr[mid] == key)
			return "PRSESENT" + to_string(count);

		else if (arr[mid] <key)
			start = mid+1;

		else
			end = mid-1;
	}
	return "NOT PRSESENT" + to_string(count);

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

		string str = binarysearch(arr,n-1,key);
		cout<<str<<endl;
	}

	return 0;
}