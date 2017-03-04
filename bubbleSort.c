#include<stdio.h>
int main()
{
        int t,k;
        scanf("%d",&t);
        for(k=0;k<t;k++)
        {
                int a[100000],n,i,l,j;
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                        scanf("%d",&a[i]);
                }
                for(i=0;i<n;i++)
                {
                        for(j=n-1;j>i;j--)
                        {
                                if(a[j]<a[j-1])
                                {
                                        int temp;
                                        temp=a[j];
                                        a[j]=a[j-1];
                                        a[j-1]=temp;
                                }

                        }
                        for(l=0;l<n;l++)
                        {
                                printf("%d ",a[l]);
                        }
                                printf("\n");
                }
        }
        return 0;
}


