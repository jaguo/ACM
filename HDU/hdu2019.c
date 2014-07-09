#include <stdio.h>

int main()
{
	int n,m,i,temp;
	int a[100];
	while(1)
	{
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		a[i]=m;
		for(;i>0;i--)
			if(a[i]<a[i-1])
			{
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
			}
		for(i=0;i<=n;i++)
			if(i==0)
				printf("%d",a[i]);
			else
				printf(" %d",a[i]);
		putchar('\n');
	}
	return 0;
}
