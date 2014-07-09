/*
 * =====================================================================================
 *
 *       Filename:  zoj1016.c
 *
 *
 Let S = s1 s2 ... s2n be a well-formed string of parentheses. S can be encoded in two different ways:
By an integer sequence P = p1 p2 ... pn where pi is the number of left parentheses before the ith right parenthesis in S (P-sequence).
By an integer sequence W = w1 w2 ... wn where for each right parenthesis, say a in S, we associate an integer which is the number of right parentheses counting from the matched left parenthesis of a up to a. (W-sequence).
Following is an example of the above encodings:

S (((()()())))
P-sequence 4 5 6666
W-sequence 1 1 1456

Write a program to convert P-sequence of a well-formed string to the W-sequence of the same string.


Input

The first line of the input contains a single integer t (1 <= t <= 10), the number of test cases, followed by the input data for each test case. The first line of each test case is an integer n (1 <= n <= 20), and the second line is the P-sequence of a well-formed string. It contains n positive integers, separated with blanks, representing the P-sequence.


Output

The output consists of exactly t lines corresponding to test cases. For each test case, the output line should contain n integers describing the W-sequence of the string corresponding to its given P-sequence.


Sample Input

2
6
4 5 6 6 6 6
9
4 6 6 6 6 8 9 9 9


Sample Output

1 1 1 4 5 6
1 1 2 4 5 1 1 3 9
 *        Version:  1.0
 *        Created:  2014/7/7 11:25:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guo Jian jaguo2014@outlook.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

void p(int a[],int n);
int main()
{
	int n,m,num,t,c;
	int i;
	int a[500];
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<500;i++)
			a[i]=0;
		num=0;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&t);
			a[t+num]=1;
			num++;
		}
		c=t+m;
		p(a,c);
	}
	return 0;
}

void p(int a[],int n)
{
	int i,j,num1,num2,yes;
	int r=0;
	for(i=0;i<n;i++)
	{
		num1=num2=yes=0;
		if(a[i]==1)
			for(j=i;j>=0;j--)
			{
				if(a[j]==1)
					num1++;
				if(a[j]==0)
					num2++;
				if(a[j]==0&&num1==num2)
				{
					yes=1;
					break;
				}
			}
		if(yes)
		{
			if(r)
				putchar(' ');
			r=1;
			printf("%d",num1);
		}
	}
	putchar('\n');
}
