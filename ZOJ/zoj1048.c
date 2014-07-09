#include <stdio.h>

int main()
{
	int i;
	float sum=0.0,m;
	for(i=0;i<12;i++)
	{
		scanf("%f",&m);
		sum+=m;
	}
	printf("$%.2f\n",sum/12);
	return 0;
}
