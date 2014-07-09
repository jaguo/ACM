#include <stdio.h>

int main()
{
	int n,i,j,temp;
	int a[100],b[100];
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<0)
				b[i]=-a[i];
			else
				b[i]=a[i];
		}
		for(i=0;i<n;i++)
			for(j=0;j<n-i-1;j++)
			{
				if(b[j]<b[j+1])
				{
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
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
