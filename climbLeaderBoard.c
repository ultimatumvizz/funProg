
#include <stdio.h>
int binarySearch(int a[1000000],int start,int end,int value,int b[1000000],int lastIndex) {

		//printf("hello\n");
		if(value >=a[0])
		{
			return b[0] ;
		}
		if(value < a[lastIndex])
		{
			return b[lastIndex]+1;
		}
		if(value == a[lastIndex])
		{
			return b[lastIndex] ;
		}

		if(start == end -1) 
		{
			//printf("ass%d ",a[start]);
			return b[end] ;
		}

		int mid =  ( start + end )/ 2 ;	
		//printf("%d\n",mid);
		if(a[mid]== value) 	
		{
			return b[mid] ;
		}
		if (a[mid] > value)
		{	
			return binarySearch(a,mid,end,value,b,lastIndex);
		}
		if(a[mid] < value)
		{
			return binarySearch(a,start,mid,value,b,lastIndex) ;
		}
        return 0 ;
}
int main() {
	int a[1000000] = {0} ;
	int b[1000000] = {0} ;
	int n;
	scanf("%d",&n);
	int i;
	int count = 1 ;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		{
			b[i] = count;
		}
		else {
			if(a[i]==a[i-1])
			{
				b[i] = count;
			}
			else {
				count++ ;
				b[i] = count ;
			}
		}
	}
	int k ;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		int temp ;
		scanf("%d",&temp) ;
		temp = binarySearch(a,0,n,temp,b,n-1);
		printf("%d\n",temp) ;
	}

	return 0 ;
}
