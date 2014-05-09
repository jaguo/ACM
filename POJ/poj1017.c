/*
 * =====================================================================================
 *
Filename:  poj1017.c

Description:
A factory produces products packed in square packets of the same height h and of the sizes 1*1, 2*2, 3*3, 4*4, 5*5, 6*6. These products are always delivered to customers in the square parcels of the same height h as the products have and of the size 6*6. Because of the expenses it is the interest of the factory as well as of the customer to minimize the number of parcels necessary to deliver the ordered products from the factory to the customer. A good program solving the problem of finding the minimal number of parcels necessary to deliver the given products according to an order would save a lot of money. You are asked to make such a program.
Input

The input file consists of several lines specifying orders. Each line specifies one order. Orders are described by six integers separated by one space representing successively the number of packets of individual size from the smallest size 1*1 to the biggest size 6*6. The end of the input file is indicated by the line containing six zeros.
Output

The output file contains one line for each line in the input file. This line contains the minimal number of parcels into which the order from the corresponding line of the input file can be packed. There is no line in the output file corresponding to the last ``null'' line of the input file.
Sample Input

0 0 4 0 0 1 
7 5 1 0 0 0 
0 0 0 0 0 0 
Sample Output

2 
1  
 *
 *        Version:  1.0
 *        Created:  2014/4/19 23:11:13
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
	int i, sum, a[6] = { 0 };
	int r, sign;
	while (1)
	{
		for (i = 0; i<6; i++)
			scanf("%d", &a[i]);
		if (a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0)
			break;
		sum = 0;
		sum += a[5];

		sum += a[4];
		a[0] -= a[4] * 11;

		sum += a[3];
		a[1] -= a[3] * 5;
		if (a[1]<0 && a[0]>0)
		{
			a[0] += 4 * a[1];
			a[1] = 0;
		}

		sign = (a[2] % 4 == 0) ? 0 : 1;
		sum += a[2] / 4 + sign;
		if (a[2] % 4 != 0)
		{
			int m, n;
			r = 4 - a[2] % 4;
			if (a[1]>0)
			{
				m = a[1];
				a[1] -= 2 * r - 1;
				if (a[1]<0)
					a[1] = 0;
				n = m - a[1];
			}
			if (a[0]>0)
				a[0] -= 36 - (9 * (4 - r) + 4 * n);
		}

		if (a[1]>0)
		{
			sign=(a[1] % 9 == 0) ? 0 : 1;
			sum += a[1] / 9 + sign;
			r = a[1] % 9;
			if (r != 0)
				a[0] -= 36 - 4 * r;
		}

		if (a[0]>0)
		{
			sign = (a[0] % 36 == 0) ? 0 : 1;
			sum += a[0] / 36 + sign;
		}
		printf("%d\n", sum);
	}
	return 0;
}
