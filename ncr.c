#include <stdio.h>

int fact(int);

void main()
{
	int n,r,ncr;
 
  	printf("Enter a number: ");
  	scanf("%d",&n);
 	printf("Enter a number: ");
  	scanf("%d",&r);
  	ncr=fact(n)/(fact(r)*fact(n-r));
    printf("Value of %d",ncr);
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}