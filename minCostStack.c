#include<stdio.h>
#include<stack>
using namespace std;
int main()
{
    int n,a[100][100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {    
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);        
        }
    }
    stack<int> cat;
//    cat.push(a[0][0]);
    int i=0,j=0;    
    while(1)
    {
            if(i==n-1 and j==n-1)
            {
                cat.push(a[i][j]);
                break;    
            }
            if(i==n-1 and j<n-1)
            {    
                cat.push(a[i][j+1]);
                j++;    
            }
            else if(i<n-1 and j==n-1)
            {
                cat.push(a[i+1][j]);
                i++;
            }
            else        
            if(a[i][j+1]>=a[i+1][j])
            {
                cat.push(a[i+1][j]);
                i++;
            }
            else
            if(a[i][j+1]<a[i+1][j])
            {
                cat.push(a[i][j+1]);
                j++;    
            }
    }
    int sum;
    while(cat.empty()!=true)
    {
        printf("%d\n",cat.top());
        sum+=cat.top();
        cat.pop();
    }
        printf("%d\n",sum);
    return 0;
}                            

