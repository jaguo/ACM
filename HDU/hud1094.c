/*
 * =====================================================================================
 *
 *       Filename:  hud1094.c
 *
 *    Description:  
 *    Input
 Input contains multiple test cases, and one case one line. Each case starts with an integer N, and then N integers follow in the same line. 


	Output
 For each test case you should output the sum of N integers in one line, and with one line of output for each line in input. 
 *
 *        Version:  1.0
 *        Created:  2014/5/9 13:00:40
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
	int n,i,sum,num;
	while(scanf("%d",&n)!=EOF)
	{
		i=0;sum=0;
		while(i<n)
		{
			scanf("%d",&num);
			sum+=num;
			i++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
