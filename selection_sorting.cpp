#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m,p=0,temp=0;
	cout<<"Enter size of array : ";
	cin>>n;
	int a[n];
	cout<<"Entered array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//sorted logic
	for(i=0;i<n;i++)
	{
			p++;
		for(j=n-1;j>=i;j--)
		{
			if(a[i]>a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}				
		}
		    cout<<endl<<"pass : "<<p<<"\t"<<"  ";
			for(m=0;m<n;m++)
			{
				cout<<a[m]<<" ";
			}
	}
	cout<<endl<<"Sortrd array : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
