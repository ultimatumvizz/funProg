#include <stdio.h>
int gcd(int a,int b) {
	return b == 0 ? a : gcd(b,a%b);
}
int lcm(int a,int b) {
	return  (a*b)/ gcd(a,b)   ;
}
int main() {
	int test ;
	scanf("%d",&test);
	while(test--) {
		int n,k;
		scanf("%d%d",&n,&k);
		int LCM;
		scanf("%d",&LCM);
		int i = 1 ;
		while(i < n)
		{
			int temp ;
			scanf("%d",&temp);
			LCM = lcm(temp,LCM) ;
			LCM%=k ; 			
			i++;
		}
		if(LCM % k == 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}	
	}
	return 0;
}
