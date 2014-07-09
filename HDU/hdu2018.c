#include <stdio.h>

int main()
{
	int n,i,a[55]={1,2,3,4};
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		if(n<5)
			printf("%d\n",a[n-1]);
		else
		{
			for(i=4;i<n;i++)
				a[i]=a[i-1]+a[i-3];
			printf("%d\n",a[n-1]);
		}
	}
	return 0;
}
