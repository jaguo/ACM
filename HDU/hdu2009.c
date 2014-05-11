#include <stdio.h>
#include <math.h>

int main()
{
	int m,i;
	double n,sum,x;
	while(scanf("%lf%d",&n,&m)!=EOF)
	{
		sum=0.0;x=n;
		for(i=0;i<m;i++)
		{
			sum+=x;
			x=sqrt(n);
			n=x;
		}
		printf("%.2lf\n",sum);
	}
	return 0;
}
