#include <stdio.h>

int main(void) {
// your code goes here
char a[20];int i;float b,c,d,e,n=100;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='O')
{
  n=n-1;    
}
else if(a[i]=='B')
{
b=100-n;
c=(1*b)/5;
if(c>4.0)
n=n-c;
else
n=n-4;
}
else 
{
d=100-n;
e=(1*d)/10;
if(e<2)
n=n-2;
else
n=n-e;
}
}
printf("%.1f\n",n);
return 0;
}

