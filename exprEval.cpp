

#include<stdio.h>
#include<iostream>
#include<stack>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	stack<char> stk;	
	char a[1000];
	scanf("%s",a);
	int p;
	p=strlen(a);	
	for(int i=0;i<p;i++)
	{
		if(a[i]>=48&&a[i]<=57)
		{
			stk.push(a[i]);
		}
		if(a[i]==42||a[i]==43||a[i]==45||a[i]==47)	
		{
			int opp1,opp2,rez;
			opp1=(int)stk.top()-48;
			stk.pop();
			opp2=(int)stk.top()-48;
			stk.pop();
			if(a[i]==42)
			{
				rez=opp1*opp2;	
				rez=(char)rez;
				stk.push(rez);	
			}
			if(a[i]==43)
			{
				rez=opp1+opp2;
				rez=(char)rez;
				stk.push(rez);
			}
			if(a[i]==45)
			{
				rez=opp2-opp1;
				rez=(char)rez;
				stk.push(rez);
			}
			if(a[i]==47)
			{
				rez=opp2/opp1;
				rez=(char)rez;
				stk.push(rez);
			}
		}

	
	}
				printf("%d",(int)stk.top());	
		return 0;
}		
		

