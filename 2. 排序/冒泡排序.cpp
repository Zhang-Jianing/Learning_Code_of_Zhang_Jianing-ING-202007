//冒泡排序
//张家宁 Zhang Jianing
//2020/7/27

#include <cstdio>
#include <algorithm>

using namespace std; 

void bubbleSort(int *a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n-1; j++)
			if (a[j] > a[j+1])
				swap(a[j], a[j+1]);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}

int main()
{
  int a[105] = {5, 1, 3, 2, 4};
	bubbleSort(a, 5);
	return 0;
} 
