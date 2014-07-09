#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
	char name[10];
	int time;
	int num;
}node;

int cmp (const void *a, const void *b)
{
	struct node *c = (struct node *)a;
	struct node *d = (struct node *)b;
	if ( c->num != d->num )
		return d->num - c->num;
	if ( c->time != d->time )
		return c->time - d->time;
	return strcmp (c->name, d->name);
}

int main()
{
	struct node stu[10000];
	int n,m,sum;
	int a,num,i=0,j;
	char ch;
	scanf("%d%d",&n,&m);
	while(scanf("%s",stu[i].name)!=EOF)
	{
		sum=num=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&a);
			if(a>0)
			{
				sum+=a;
				num++;
				ch=getchar();
				if(ch=='(')
				{
					scanf("%d",&a);
					getchar();
					sum+=a*m;
				}
			}
		}
		stu[i].num=num;
		stu[i++].time=sum;
	}
	qsort(stu,i,sizeof(stu[0]),cmp);
	for(j=0;j<i;j++)
		printf("%-10s %2d %4d\n",stu[j].name,stu[j].num,stu[j].time);
	return 0;
}
