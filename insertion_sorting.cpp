#include<iostream>
using namespace std;
int main()
{
  int i,j,k,p=0,temp,n;
  cout<<"Enter size of array : ";
  cin>>n;
  cout<<"Enter array elements : ";
  int a[n];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Entered array elements : ";
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  for(i=0;i<n;i++)
  { cout<<endl;
  p++;
    for(j=0;j<i;j++)
    {
      if(a[i]<a[j])
      {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
    }
    cout<<endl<<"pass : "<<p<<"\t"<<"  ";
    for(k=0;k<n;k++)
    {
    	cout<<a[k]<< " ";
	}
  } cout<<endl;
  cout<<"Sorted array"<<endl;
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
