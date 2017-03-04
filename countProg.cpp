#include <iostream>
#include <stdio.h>
using namespace std ;
int main () {
	int n,a[1000000]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int count = n+1 + (n*(n-1))/2 ;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{	
			int d = a[j] - a[i] ;
			int temp = a[j];
			for(int k=j+1;k<n;k++)
			{				
				if( d+temp == a[k] )
				{
					count++ ;
					temp = a[k];
				}
			}
		}
	}
	printf("%d\n",count);
	return 0;
}
