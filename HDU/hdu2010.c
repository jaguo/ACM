#include <stdio.h>

int main()
{
	int m,n,r,i,sum=0,s,result=0;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		result=0;
		for(i=m;i<=n;i++)
		{
			s=i;sum=0;
			while(s>0)
			{
				r=s%10;
				sum+=r*r*r;
				s/=10;
			}
			if(i==sum)
			{
				if(result)
					putchar(' ');
				printf("%d",i);
				result=1;
			}
		}
		if(result==0)
			printf("no\n");
		else
			putchar('\n');
	}
	return 0;
}
