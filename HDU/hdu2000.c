/*
 * =====================================================================================
 *
 *       Filename:  hdu2000.c
 *
 *    Description:  
 *    输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。


 Input
	 输入数据有多组，每组占一行，有三个字符组成，之间无空格。


 Output
	对于每组输入数据，输出一行，字符中间用一个空格分开。
 *
 *        Version:  1.0
 *        Created:  2014/5/10 17:02:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guo Jian jaguo2014@outlook.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main ()
{
	int i,j;
	char a[3],temp;
	while(scanf("%c%c%c",&a[0],&a[1],&a[2])!=EOF)
	{
		getchar();
		for(i=0;i<3;i++)
			for(j=i+1;j<3;j++)
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		printf("%c %c %c\n",a[0],a[1],a[2]);
	}
	return 0;
}
