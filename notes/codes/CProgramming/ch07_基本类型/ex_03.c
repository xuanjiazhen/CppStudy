/*
 * 下列哪些在C语言中不是合法的数？区分每一个合法的数是整数还是浮点数。
 *
 * (a) 010E2
 * (b) 32.1E+5
 * (c) 0790
 * (d) 100_000
 * (e) 3.978e-2
 */

#include <stdio.h>

int main()
{
	int i;
	double d;

	d = 010E2; /* 浮点数 */

	d = 32.1E+5; /* 浮点数 */

	/* i = 0790;  错误的八进制数，因9不存在于八进制中 */

	/* i = 100_000; 错误的书写方式 */

	d = 3.978e-2; /* 浮点数 */

	/* ignore no-use warning */
	(void)i;
	(void)d;

	return 0;
}
