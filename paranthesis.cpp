#include<stdio.h>
#include<string.h>
bool backsearch(char *s,int i)
{        
    char q=s[i];
    int j=i-1;
    while(j>-1)
    {
        if(s[j]==49)
        {
            j--;
        }
        else    if((q=='{'&&s[j]=='}')||(q=='('&&s[j]==')')||(q=='['&&s[j]==']'))
        {
            s[i]=49;
            s[j]=49;
            return false;
        }
        else
        {
            return true;
        }
    }
            return true;                    
}        
int main()
{
    bool fish=true;
    int i;    
    char s[100000];
    scanf("%s",s);
    int p=strlen(s);
    for(i=0;i<p;i++)
    {    
        if(s[i]=='}'||s[i]==']'||s[i]==')')
        {    
            fish=backsearch(s,i);
            if(fish==true)
            {
                break;
            }
        }
    }
    if(fish==true)
    {
        printf("NOT BALANCED\n");
    }
    else
    {    
        printf("BALANCED\n");
    }
    return 0;
}                
