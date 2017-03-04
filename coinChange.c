#include<stdio.h>
int main() {

        int total;
        int coinNum ;
        scanf("%d",&total);
        scanf("%d",&coinNum);
        long int a[coinNum][total+1] ; ; for(int i=0;i<coinNum;i++){ for(int j=0;j<total+1;j++){a[i][j]=0;}}
        int coinArray[coinNum+1]={0};
        for(int i=0;i<coinNum;i++)
        {
                scanf("%d",&coinArray[i]);
        }
        for(int i=0;i<coinNum;i++)
        {
                a[i][0] = 1 ;
        }
        for(int i=0;i<total+1;i+=coinArray[0])
        {
                a[0][i] = 1 ;
        }
        int i=1;
        int j=0;
        for(i=1;i<coinNum;i++)
        {
                for(j=0;j<total+1;j++)
                {
                        if(j<coinArray[i])
                        {
                                a[i][j] = a[i-1][j];
                        }
                        else
                        {
                                a[i][j] = a[i-1][j] + a[i][j-coinArray[i]];
                        }
                }
        }
        printf("%ld\n",a[i-1][j-1]);
        return 0;
}                
