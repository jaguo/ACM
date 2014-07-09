#include <stdio.h>

int main()
{
	float num,sum=0.00;
	int n;
	scanf("%f",&num);
	while(num!=0.00)
	{
		for(n=2;sum<num;n++)
			sum+=1.0/n;
		printf("%d card(s)\n",n-2);
		sum=0.00;
		scanf("%f",&num);
	}
	return 0;
}
