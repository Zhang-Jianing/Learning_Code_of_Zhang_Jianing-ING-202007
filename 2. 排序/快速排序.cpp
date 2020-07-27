//快速排序
//张家宁 Zhang Jianing
//2020/7/27

#include <cstdio>
#include <cstdlib>

int t[100005];
int a[100005];
int n;

int getRand(int l, int r)   // 生成一个[l, r]以内的随机数
{
    return rand()%(r-l+1)+l;
}

void quickSort(int l, int r)        // 把[l,r]排序
{
    if(l >= r) return;      // 空区间或只有一个元素的区间
	  int flag = a[getRand(l, r)];
    int p=l, q=r;
	  for(int i=l; i<=r; i++)
    {
        if(a[i] < flag) t[p++] = a[i];
        if(a[i] > flag) t[q--] = a[i];
    }
	  // 现在，t[l, p-1]全是比flag小的，t[q+1, r]全是比flag大的
	  for(int i=l; i<p; i++)
        a[i] = t[i];
    for(int i=r; i>q; i--)
        a[i] = t[i];
    for(int i=p; i<=q; i++)
        a[i] = flag;
	  quickSort(l, p-1);
    quickSort(q+1, r);
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
	  quickSort(1, n);
	  for(int i=1; i<=n; i++)
        printf("%d ",a[i]);
    puts("");
    return 0;
}
