

#include<stdio.h>
#include<stack>
#include<stdlib.h>
using namespace std;
stack<int> prime_factors(int n)
{
	stack<int> hop;
	int i=n;	
	int flag=0;
	hop.push(1);
	while(i!=1)	
	{
		if(i%2==0)
		{
			i/=2;
			if(hop.top()!=2)
			{
				hop.push(2);
			}
		}
		else
		{
			for(int j=3;j<=i;j+=2)
			{
				if(i%j==0 and ( hop.top()!=j or hop.empty()==true))
				{
					hop.push(j);
					i/=j;
					break;
				}
				else if(i%j==0)
				{
					i/=j;
					break;
				}
			}
		}	
	}
	return	hop;	
}
int main()
{
	int n;
	scanf("%d",&n);
	stack<int> quack;
	quack=prime_factors(n);
i/*	while(quack.empty()!=true)
	{
		if(quack.top()!=1)
		{
			printf("%d ",quack.top());
		}
		quack.pop();
	}
		printf("\n");*/
		
	return 0;	
}
