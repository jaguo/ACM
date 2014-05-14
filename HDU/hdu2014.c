#include <stdio.h>

int main()
{
	int n,a,sum,i;
	int min,max;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;min=100;max=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if(max<a) max=a;
			if(min>a) min=a;
			sum+=a;
		}
		printf("%.2f\n",(float)(sum-min-max)/(n-2));
	}
	return 0;
}
