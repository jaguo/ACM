#include <stdio.h>

int isPrime(int n);
int main ()
{
	int x,y,i,result=1;
	while(1)
	{
		result=1;
		scanf("%d%d",&x,&y);
		if(x==0&&y==0)
			break;
		for(i=x;i<=y;i++)
		{
			if(!isPrime(i*i+i+41))
				result=0;
		}
		if(result)
			printf("OK\n");
		else
			printf("Sorry\n");
	}
	return 0;
}

int isPrime(int n)
{
	int i,result=1;
	if(n>1)
	{
		for(i=2;i<=n/2;i++)
			if(n%i==0)
			{
				result=0;
				break;
			}
	}
	else
		result=0;
	return result;
}
