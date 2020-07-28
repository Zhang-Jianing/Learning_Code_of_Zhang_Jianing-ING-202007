//阶乘（递归）
//张家宁 Zhang Jianing
//2020/7/28

#include<cstdio>

int f(int x)
{
	if (x==1)
		return 1;
	return x*f(x-1);
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}
