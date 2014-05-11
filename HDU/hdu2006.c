#include <stdio.h>

int main()
{
	int n,i,m,s=1;
	while(scanf("%d",&n)!=EOF)
	{
		i=0;
		s=1;
		while(i<n)
		{
			scanf("%d",&m);
			if(m%2!=0)
				s*=m;
			i++;
		}
		printf("%d\n",s);
	}
	return 0;
}
