#include <stdio.h>

int main()
{
	int n,i,sum=1;
	while(scanf("%d",&n)!=EOF)
	{
		sum=1;
		for(i=1;i<n;i++)
			sum=2*(sum+1);
		printf("%d\n",sum);
	}
	return 0;
}
