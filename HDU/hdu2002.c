/*
 * =====================================================================================
 *
 *       Filename:  hdu2002.c
 *

 根据输入的半径值，计算球的体积。


 Input
 输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。


 Output
 输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014/5/10 17:54:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Guo Jian jaguo2014@outlook.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define PI 3.1415927

int main()
{
	double r;
	while(scanf("%lf",&r)==1)
		printf("%.3f\n",(4*PI*r*r*r)/3);
	return 0;
}
