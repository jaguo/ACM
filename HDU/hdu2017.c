#include <stdio.h>
#include <ctype.h>

int main ()
{
	int n,i,d;
	char a[1000];
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		d=0;
		gets(a);
		for(i=0;a[i]!='\0';i++)
			if(isdigit(a[i]))
				d++;
		printf("%d\n",d);
	}
	return 0;
}
