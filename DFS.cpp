#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
class graph{
    public:
        void assigner(int n);
        bool isVisited(int n);
        void visited(int n);
        void init();
        void graphImp();
        void DFS();
        void print();
    private:
        int a[1000][1000];
        int flag[1000];
        int num_nodes;    
};
void graph::print()
{
    int k=0;
    for(int i=1;i<=num_nodes;i++)
    {
        if(isVisited(i)==false)
        {
            k=1;
            break;
        }
    }    
    if(k==1)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }            
}
bool graph::isVisited(int n)
{
    if(flag[n]==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void graph::visited(int n)
{
    flag[n]=1;
}    
void graph::assigner(int n)
{
    num_nodes=n;
}
void graph::init()
{
    num_nodes=0;    
    for(int i=0;i<1000;i++)
    {    
        flag[i]=0;
        for(int j=0;j<1000;j++)
        {
            a[i][j]=0;
        }    
    }
}
void graph::DFS()
{
    stack<int> cat;
    cat.push(1);
    while(cat.empty()!=true)
    {    
        int top;
        top=cat.top();
        cat.pop();
        visited(top);
        for(int i=num_nodes;i>0;i--)
        {
            if(a[top][i]==1 and isVisited(i)!=true)
            {
                cat.push(i);    
            }
        }
    }    
}    
void graph::graphImp()
{
    for(int i=1;i<=num_nodes;i++)
    {    
        for(int j=1;j<=num_nodes;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
int main()
{
    int t;    
    scanf("%d",&t);
    while(t--)
    {    
        class graph g;
        int nodes;
        scanf("%d",&nodes);    
        g.assigner(nodes);
        g.graphImp();
        g.DFS();
        g.print();
        g.init();    
    }
    return 0;
}

