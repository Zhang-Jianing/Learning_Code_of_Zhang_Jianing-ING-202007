//选择排序
//张家宁 Zhang Jianing
//2020/7/27

#include <cstdio>
#include <algorithm>

using namespace std; 

void selectSort(int *a, int n)
{
	int c, x, i;
	for (c = 0; c < n; c++)
	{
		//选出[c,n]区间的最小值
		for (x = c, i = c; i < n; i ++)
			if (a[i] < a[x]) 
				x = i;
		swap(a[x], a[c]);
	}
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int main()
{
	int a[105] = {5, 1, 3, 2, 4};
	selectSort(a, 5);
	return 0;
} 
