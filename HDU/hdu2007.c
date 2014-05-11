#include <stdio.h>

int main()
{
	int oddsum,evensum;
	int m,n,i;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		oddsum=0;
		evensum=0;
		if(m>n)
		{
			int t;
			t=m;
			m=n;
			n=t;
		}
		for(i=m;i<=n;i++)
			if(i%2==0)
				evensum+=i*i;
			else
				oddsum+=i*i*i;
		printf("%d %d\n",evensum,oddsum);
	}
	return 0;
}
