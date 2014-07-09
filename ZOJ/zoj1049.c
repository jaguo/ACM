#include <stdio.h>

#define PI 3.14159
int main()
{
	int i,n,m=0;
	float x,y;
	scanf("%d",&n);
	while(n--)
	{
		m++;
		scanf("%f%f",&x,&y);
		i=1;
		while(100.0*i/PI<(x*x+y*y))
			i++;
		printf("Property %d: This property will begin eroding in year %d.\n",m,i);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}
