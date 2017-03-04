#include<iostream>
#include<stdio.h>
int main() {
    int n,a[100]={0},count=0,b[101]={0};
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
               scanf("%d",&a[i]);
               b[a[i]]++;
        }
        for(int i=0;i<101;i++)
        {
            count+=b[i]/2;
        }
        printf("%d\n",count);

}
