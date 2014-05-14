#include <stdio.h>

int main()
{
	int n,m,i,j,sum,a;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		a=0;
		for(i=0;i<n;i+=m)
		{
			sum=0;
			for(j=0;j<m&&i+j<n;j++)
			{
				a+=2;
				sum+=a;
			}
			if(i!=0)
				putchar(' ');
			printf("%d",sum/j);
		}
		putchar('\n');
	}
	return 0;
}
