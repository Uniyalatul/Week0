#include<iostream>

using namespace std;

string linearsearch(int arr[],int n, int key)
{

	for(int i=0;i<n;i++)
	{
		if(arr[i] == key)
		{
			// cout<<"PRESENT"<<" "<<i+1;
			return "PRESENT" + to_string(i+1);
		}
	}
	return "NOT PRESENT" + to_string(n);


}
int main()
{	int t;
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

	string s = linearsearch(arr,n,key);
	cout<<s<<endl;

}

	return 0;
}