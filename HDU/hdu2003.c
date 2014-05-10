#include <stdio.h>

int main()
{
	double n;
	while(scanf("%lf",&n)==1)
		printf("%.2f\n",(n>=0.0)?n:-n);
	return 0;
}
