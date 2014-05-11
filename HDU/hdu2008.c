#include <stdio.h>

int main()
{
	int n,i,a,b,c;
	float m;
	while(1)
	{
		a=0;b=0;c=0;
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%f",&m);
				if(m<0.0)
					a++;
				else if(m==0.0)
					b++;
				else
					c++;
		}
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
