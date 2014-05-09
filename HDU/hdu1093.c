/*
 * =====================================================================================
 *
 *       Filename:  hdu1093.c
 *
 *    Description:  
 *    Input
 Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line.
 Output
 For each group of input integers you should output their sum in one line, and with one line of output for each line in input. 
 *
 *        Version:  1.0
 *        Created:  2014/5/9 12:45:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guo Jian jaguo2014@outlook.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main()
{
	int n1,n2,sum,num,i,j=0;
	scanf("%d",&n1);
	while(j<n1)
	{
		i=0;sum=0;
		scanf("%d",&n2);
		while(i<n2)
		{
			scanf("%d",&num);
			sum+=num;
			i++;
		}
		printf("%d\n",sum);
		j++;
	}
	return 0;
}
