//归并排序
//张家宁 Zhang Jianing
//2020/7/27

#include <cstdio>

int t[100005];
int a[100005];
int n;

void mergeSort(int l, int r)        //* 把[l,r]排序
{
    //printf("Merge[%d , %d] %d\n", l, r, r-l+1);
    if(l == r) return;
	  int mid = (l+r)/2;
	  mergeSort(l, mid);              // 排序 a[l, mid]
    mergeSort(mid+1, r);            // 排序 a[mid+1, r]
	  int p=l, q=mid+1, i=l;          // 合并到 t[l,r]
	  while(p<=mid && q<=r)           // 两个队伍都可以取
    {
        if(a[p] < a[q])
            t[i++] = a[p++];
        else
            t[i++] = a[q++];
    }
	  while(p <= mid)                 // 左边队伍没有取完
        t[i++] = a[p++];
    while(q <= r)                   // 右边队伍没有取完
        t[i++] = a[q++];
	  for(int i=l; i<=r; i++)
        a[i] = t[i];
 }

void inp()
{
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        scanf("%d", &a[i]);   
}

int main()
{
    inp();
	  mergeSort(1, n);
	  for(int i=1; i<=n; i++)
        printf("%d ",a[i]);
    puts("");
    return 0;
}
