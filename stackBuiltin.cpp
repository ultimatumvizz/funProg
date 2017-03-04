#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;
int main()
{    
    int t,k;
        scanf("%d",&t);
    for(k=0;k<t;k++)    
    {
        bool status=true;
        stack<char> s;
        int p,i;
        char d[100000];
        scanf("%s",d);    
        p=strlen(d);
        for(i=0;i<p;i++)
        {
            if(d[i]=='{'||d[i]=='('||d[i]=='[')
            {
                s.push(d[i]);
            }
            if(d[i]=='}' || d[i]==']' || d[i]==')')
            {
                if(s.empty()==true)
                {
                    status=false;
                    printf("NOT BALANCED\n");
                    break;
                }
                else
                    if(d[i]=='}'&&s.top()=='{')
                    {
                        s.pop();
                    }
                    else
                        if(d[i]==')'&&s.top()=='(')
                        {
                            s.pop();    
                        }                          else
                                                        if(d[i]==']'&&s.top()=='[')
                                                        {
                                                                s.pop();
                                                        }
                                                        else
                                                        {
                                                                status=false;
                                                                printf("NOT BALANCED\n");
                                                                break;
                                                        }

                        }
                }
                if(s.empty()==true && status==true)
                {
                        printf("BALANCED\n");
                }
                if(s.empty()==false && status==true)
                {
                        printf("NOT BALANCED\n");
                }
        }
        return 0;
}

                        else
                            if(d[i]==']'&&s.top()=='[')
                            {
                                s.pop();
                            }
                            else
                            {
                                status=false;
                                printf("NOT BALANCED\n");
                                break;
                            }
                                    
            }
        }
        if(s.empty()==true && status==true)    
        {
            printf("BALANCED\n");
        }
        if(s.empty()==false && status==true)
        {
            printf("NOT BALANCED\n");        
        }
    }
    return 0;
}    







