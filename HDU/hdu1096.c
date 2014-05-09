#include <stdio.h>

int main()
{
	int n1,n2,sum,num,i,j=0;
	scanf("%d",&n1);
	while(j<n1)
	{
		i=0;sum=0;
		scanf("%d",&n2);
		while(i<n2)
		{
			scanf("%d",&num);
			sum+=num;
			i++;
		}
		printf("%d\n",sum);
		if(j!=n1-1)
			putchar('\n');
		j++;
	}
	return 0;
}
