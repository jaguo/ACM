#include <stdio.h>

int main()
{
	int num,n,i,sum;
	while(1)
	{
		i=0;sum=0;
		scanf("%d",&n);
		if(n==0)
			break;
		while(i<n)
		{
			scanf("%d",&num);
			sum+=num;
			i++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
