#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
	return (*(long long int*)b - *(long long int*)a);
}
long long int pwr_2(int n)
{
	int val=1;
	while(n>0)
	{
		val*=2;
		n--;
	}
	return val;			
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		long long int a[1000000]={0};
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		qsort(a,n,sizeof(long long int),cmpfunc);
		long long int sum;
		long long int val;
		val=pwr_2(n-1)-1;
		sum=(a[0]-a[n-1])*val;
		long long int c=pwr_2(n-2);
		long long int b=1;
		for(int i=1,j=n-2;i<j;i++,j--)
		{
			val-=c+b;	
			sum+=val*(a[i]-a[j]);
			c/=2;
			b*=2;
		}
		printf("%lld\n",sum%(1000000000+7));			
	}
	return 0;					
}
