#include<stdio.h>
int main()
{
		int fact;
		int a[160]={0},b[160]={0},c[160]={0};
		scanf("%d",&fact);
		if(fact==0||fact==1)
		{
			printf("1\n");
		}
		else
		{
			a[0]=1;
			int end_d=1;
			for(int i=2;i<=fact;i++)
			{
				int j;
				int dig_1=i%10;
				int dig_2=i/10;
				c[0]=0;	
				int carry=0;
				for( j=0;j<end_d;j++)
				{
					b[j]=dig_1*a[j];
					c[j+1]=dig_2*a[j];				
				       	a[j]=(c[j]+b[j]+carry)%10;
					carry=(c[j]+b[j]+carry)/10;
				}
				if(carry!=0||c[j]!=0)
				{
					a[j]=(carry+c[j])%10;
					end_d++;
					if((carry+c[j])/10!=0)
					{
						a[j+1]=(carry+c[j])/10;
						end_d++;
					}	
				}
			}
			while(end_d--)
			{
				printf("%d",a[end_d]);
			}
			printf("\n");
		}
	
	return 0;	
}			
 
