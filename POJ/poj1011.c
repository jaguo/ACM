/*
 * =====================================================================================
 *
 *       Filename:  poj1011.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/4/22 22:10:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guo Jian jaguo2014@outlook.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void sort(int a[],int n);

int main ()
{
	int n,i,r,j,k;
	int sum=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,n);
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		sum+=a[i];
	}
	for(i=a[0];i<=sum;i++)
	{
		if(sum%i==0)
		{
			r=sum/i;
			int zu=r;
			for(j=0;j<r;j++)
			{
				if(a[j]+a[zu]==i)
				{
					a[j]+=a[zu];
					continue;
				}
				else if(a[j]+a[zu]<i)
			}
		}
	}
	return 0;
}

void sort(int a[],int n)
{
	int temp,i,j;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
