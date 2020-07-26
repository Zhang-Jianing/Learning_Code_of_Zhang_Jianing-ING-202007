//简易乘法竖式 - 三位数乘两位数 
//张家宁 Zhang Jianing
//2020/7/26

#include <cstdio>

int main()
{
	int a, b;
	printf("简易乘法竖式计算器\n三位数乘两位数\nVersion Z1.0\nCopyright 2020 RuiRui Conporition ALL RIGHTS RESERVED.\n\n");
	scanf("%d%d", &a, &b);
	if (a >= 1000 || a <= 10 || b >= 100 || b <= 10)
	{
		printf("Error!\n");
		return 0;
	}
	printf("\nResult:\n\n");
	printf("%5d\n", a);
	printf("X");
	printf("%4d\n", b);
	printf("-----\n");
	printf("%5d\n", a*(b%10));
	printf("%4d\n", a*(b/10));
	printf("-----\n");
	printf("%5d\n\n",a*b);
	printf("%d * %d = %d\n", a, b, a*b);
	return 0;
}
