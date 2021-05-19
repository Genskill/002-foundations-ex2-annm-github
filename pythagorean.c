#include <stdio.h>
#include <cs50.h>
int main()
{   int flag;
    int a=get_int("side 1 ");
    int b=get_int("side 2 ");
    int c=get_int("side 3 ");
    int s1=a*a;
    int s2=b*b;
    int s3=c*c;
    if(a>b && a>c)
    {
     if(s2 + s3==s1)
         flag=1;
     else
         flag=0;
    }
    else if(b>a && b>c)
    {
     if(s1 + s3==s2)
         flag=1;
     else
         flag=0;
    }
    else if(c>a && c>b)
    {
     if(s2 + s1==s3)
         flag=1;
     else
         flag=0;
    }
    if(flag==1)
    {
        printf("Yes\n");
    }
    else if(flag==0)
      { printf("No\n");
      }
}
