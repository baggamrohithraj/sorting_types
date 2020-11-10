#include <iostream>
using namespace std;
int main()
{
   int i,j,p=0,k,n,x=0;
   cout<<"Enter size of array : ";
   cin>>n;
   int a[n];
   cout<<"Enter array elements : ";
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<endl;
   cout<<"Entered array elements : ";
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n-i-1;j++)
           {
           	   	p++;
           if(a[j]>a[j+1])
           {
               x = a[j];
               a[j] = a[j+1];
               a[j+1] = x;
           } 
               cout<<endl<<"pass : "<<p<<"\t"<<"  ";
           for(k=0;k<n;k++)
    {
    	cout<<a[k]<< " ";
	} 
           }         
       
   }
   
   cout<<endl;
   cout<<"Sorted array"<<endl;
   for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}
