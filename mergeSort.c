#include<stdio.h>
int mers(int a[],int s,int e)
{
    if(s==e)
    return 0;
    if(e==s+1)
    {
        if(a[s]>a[e])
        {
            int temp;
            temp=a[s];
            a[s]=a[e];
            a[e]=temp;
            return 0;
        }
        else
        return 0;            
    }        
    mers(a,s,(s+e)/2);
    mers(a,(s+e)/2+1,e);
    
            printf("A\n");    
    int i=s,j=(s+e)/2+1,b[1000];    
    for(i=s;i<=e;i++)
    {
        b[i]=a[i];
    }
    int p=s;
    i=s;
    while(i<(s+e)/2+1&&j<e+1)
    {
        if(b[i]>=b[j])
        {
            a[p]=b[j];
            p++;
            j++;
        }
        else
        {
            a[p]=b[i];
            p++;
            i++;
        }
    }
    if(j==e+1)
    {    
        while(i<(s+e)/2+1)
        {
            a[p]=b[i];
            i++;
            p++;
        }
    }        
    return 0;  
}
int main()
{
    int a[1000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        int x=1;
    mers(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}        


