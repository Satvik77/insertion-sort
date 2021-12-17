#include<iostream>
using namespace std;
int main()
{
	int i,j,n,key;
	int a[4] = {2,1,5,3};
	n=4;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
			
		}
		    a[j+1]=key;
		
	}
	for(i=0;i<n;i++)
	 cout<<a[i]<<" ";
	return 0;
}
