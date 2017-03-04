#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int min(string cat,int i)
{
	int max=i;
	int temp=i-1;		
	for(int j=i;j<cat.length();j++)
	{
		if(cat[j] < cat[max] and cat[j]>cat[temp])
		{
			max=j;
		}	
	}	
	return max;		
}
string swap(string cat,int x,int y)
{
	char a;
	a=cat[x];
	cat[x]=cat[y];	
	cat[y]=a;
	return cat;		
}				
int main()
{
	string cat;	
	cin>>cat;
	sort(cat.begin(),cat.end());
	cout<<cat<<"\n";
	int i=cat.length()-1;		
	int x;
	while(i>0)
	{
		if(cat[i] > cat[i-1])
		{
			x=min(cat,i);
			cat=swap(cat,x,i-1);
			sort(cat.begin()+i,cat.end());	
			cout<<cat<<"\n";				
			i=cat.length()-1;
		}
		else
		{
			i--;
		}
	}		
	return 0;
}	
