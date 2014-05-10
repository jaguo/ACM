#include <stdio.h>

int main()
{
	int a[2][12]={
		{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31}
	};
	int y,m,d,b,i,sum;
	while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
	{
		sum=0;
		b=((y%400==0)||((y%100!=0)&&(y%4==0)));
		for(i=0;i<m-1;i++)
			sum+=a[b][i];
		sum+=d;
		printf("%d\n",sum);
	}
	return 0;
}
