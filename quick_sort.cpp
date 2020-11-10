#include<iostream>
using namespace std;
int swap(int *a,int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int quick_sort(int a[],int n) {
	int i,j;
	int pvt = a[0];
  for(i=1;i<n;i++) {
  	if(a[i]>pvt) {
  		for(j=n-1;j>i;j--) {
  			if(a[j]<a[i]) {
  				swap(&a[i],&a[j]);
			  }
		  }
	  }
  }
  int m = n-1;
for(j=m;j>0;j--) {
	if(a[0] > a[j]) {
		swap(&a[0],&a[j]);	
	}
}
}
int main()
{
  int i,j,temp,n;
  cout<<"Enter size of array : ";
  cin>>n;
  int a[n];
  cout<<endl<<"Enter elements in array : ";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  quick_sort(a,n);
  quick_sort(a,n);
  cout<<endl<<"Sorted array : ";
  for(i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
