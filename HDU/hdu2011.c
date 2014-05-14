#include <stdio.h>

int main ()
{
	int n,m=0,a,i;
	float s=0.0;
	scanf("%d",&n);
	while(m<n)
	{
		s=0.0;
		scanf("%d",&a);
		for(i=1;i<=a;i++)
		{
			s+=(1.0/i)*((i%2==0)?-1:1);
		}
		printf("%.2f\n",s);
		m++;
	}
	return 0;
}
