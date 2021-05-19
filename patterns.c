#include <stdio.h>
#include <cs50.h>

void drawline2(int nhash,int max)
    {
    int i;
    int nspace=max-nhash;
    for(i=0;i<nspace;i++)
        printf(" ");
    
    for(i=0;i<nhash;i++)
         printf("#");
    
    printf("\n");
    }

void drawline1(int m)
    {
    int i;
    for(i=0;i<m;i++)
    
        printf("#");
    
    printf("\n");
    }

int main(void)
{
    int v=get_int("Enter type of pattern(1 or 2) ");
    int n=get_int("Number of rows");
    printf("\n");
    int i;
    if(v==1)
    {
    for(i=n;i>0;i--)
        drawline1(i);
     }
    else if(v==2)
    {
        for(i=1;i<n+1;i++)
        {
            drawline2(i,n);
        }
    }
    
}
