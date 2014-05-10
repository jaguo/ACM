/*
 * =====================================================================================
 *
 *       Filename:  hdu2001.c
 *
 *    Description:
 输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。


 Input
 输入数据有多组，每组占一行，由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。


 Output
 对于每组输入数据，输出一行，结果保留两位小数。
 *
 *        Version:  1.0
 *        Created:  2014/5/10 17:43:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guo Jian jaguo2014@outlook.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

int main ()
{
	float x1,x2,y1,y2;
	while(scanf("%f%f%f%f",&x1,&y1,&x2,&y2)!=EOF)
		printf("%.2f\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
	return 0;
}
