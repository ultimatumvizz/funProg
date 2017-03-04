// heap_sort.cpp
#include<stdio.h>
int swap(int &a,int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	return 0;		
}
int heapify(int a[1000],int n);
int build_heap(int a[1000],int element,int slno)
{	
	a[slno]=element;
	heapify(a,slno);
	return 0;	
}
int heapify(int a[1000],int n)
{
		int i=0;
		int min;
		while( 2*i+1 < n)
		{
			if(a[2*i+1] > a[2*i+2])
			{
				min = 2*i+2;
			}
			else
			{
				min = 2*i+1;
			}
		
			if(a[i] > a[min])
			{
				swap(a[min],a[i]);
				i=min;
			}
			else
			{
				break;
			}
			
		}
		return 0;		
}
int main()
{
	int n;
	int a[1000]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int p;
		scanf("%d",&p);
		build_heap(a,p,i);
	}

	for(int i=n-1;i>0;i--)
	{
		swap(a[0],a[i]);	
		heapify(a,i-1);			
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
		printf("\n");		
	return 0;
}
