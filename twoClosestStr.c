#include <stdio.h>
#include <string.h>
int main() {

	int test;
	scanf("%d",&test);
	while(test--)
	{
		int Hdist,len;
		char string[100001];
		scanf("%s%d",string,&Hdist);
		len = strlen(string);
		int count = Hdist ;
		for(int i =0 ;string[i]!='\0';i++)
		{
			if(count == 0)
			{
				break;
			}
			if(string[i]==97 and len-Hdist == 0)
			{
				string[i] = 98 ;
				count--;
			}
			else if(string[i] != 97){
				string[i] = 97 ;
				count--;	
			}
			else {
				Hdist++ ;
			}
		}
		printf("%s\n",string);
	}
	return 0;
}
