#include <stdio.h>

int main()
{
	int n,i,min,m;
	int temp;
	int a[100];
	while(1)
	{
		min=32768;
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(min>a[i])
			{	
				min=a[i];
				m=i;
			}
		}
		temp=a[0];
		a[0]=a[m];
		a[m]=temp;
		for(i=0;i<n;i++)
		{
			if(i!=0)
				putchar(' ');
			printf("%d",a[i]);
		}
		putchar('\n');
	}
	return 0;
}
