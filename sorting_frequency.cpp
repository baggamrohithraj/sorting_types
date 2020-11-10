#include<iostream>
using namespace std;
void show(int array[],int n) {
	cout<<endl;
	for(int i=0;i<n;i++) {
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
int main() {
	int n,i,j,k,l,temp;
	cout<<endl<<"Enter array size : ";
	cin>>n;
	int array[n];
	cout<<endl<<"Enter array elements : ";
	for(i=0;i<n;i++) {
		cin>>array[i];
	}
	show(array,n); //  sorting
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	show(array,n);
	int d_a[n]; //	copy array
	for(i=0;i<n;i++) {
		d_a[i] = array[i];
	} cout<<endl<<"Copy array : "<<endl;
	show(d_a,n); int m=n;
	for(i=0;i<m;i++) {
		for(j=0;j<m;j++) {
			if(i==j) {
				continue;
			} else {
				if(d_a[i]==d_a[j]) {
				for(k=j;k<m;k++) {
					d_a[k]=d_a[k+1];
				}
				m--;
			}
			}
		}		
	} cout<<endl<<"Deleting Duplicate Elements : ";
	show(d_a,m);
	int fre[n],q=0; //Finding frequency
	for(i=0;i<m;i++) {
		int passes=0;
		for(j=0;j<n;j++) {
			if(d_a[i]==array[j]) {
				passes++;
			}
		}
		fre[q] = passes;
			q++;
	}
	cout<<endl<<"Passes frequecy array : ";
	cout<<endl;
	for(i=0;i<q;i++) {
		cout<<fre[i]<<" ";
	}
	//input for 2d array[] fre[]
	int a[m][2],i2;
	for( i=0;i<m;i++) {
		i2=0;
		a[i][i2] = d_a[i];
		i2++;
		a[i][i2] = fre[i];
	}
	cout<<endl;
	cout<<"2D array before sorting : "<<endl;
	for(int i=0;i<m;i++) {
		cout<<endl;
		for(int j=0;j<2;j++) {
			cout<<"\ta["<<i<<"]["<<j<<"]: ";
			cout<<a[i][j];	
		}
	}
	//2d array sorting
	int tmp;
	for(int i=0;i<m;i++) {
		for(int j=i+1;j<m;j++) {
			if(a[i][1] <  a[j][1]) {
				temp = a[i][1];
				a[i][1] = a[j][1];
				a[j][1] = temp;
				tmp = a[i][0];
				a[i][0] = a[j][0];
				a[j][0] = tmp;	
			}
		}
	}
	cout<<endl<<endl;
	for(int i=0;i<m;i++) {
		cout<<endl;
		for(int j=0;j<2;j++) {
			cout<<"\ta["<<i<<"]["<<j<<"]: ";
			cout<<a[i][j];	
		}
	}
	// print frequency
	cout<<endl;
	for(i=0;i<m;i++) {
		for(j=0;j<a[i][1];j++) {
			cout<<a[i][0]<<" ";
		}
	}
	return 0;
}
