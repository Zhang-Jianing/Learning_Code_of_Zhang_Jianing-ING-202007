#include <cstdio>

struct Stack {
    int a[100005];
    int tot;

    void push(int x) {      // 向栈顶压入一个数
        a[++tot] = x;
    }

    void pop() {            // 弹出栈顶
        tot--;
    }

    int top() {             // 返回栈顶的值
        return a[tot];
    }
};

Stack s;

int main() 
{
    s.push(1);
    s.push(2);

    printf("%d\n", s.top());

    s.pop();
    printf("%d\n", s.top());

    s.push(3);
    s.push(4);

    printf("%d\n", s.top());

    s.pop();

    printf("%d\n", s.top());


    s.pop();

    s.push(5);

    printf("%d\n", s.top());

    s.pop();

    printf("%d\n", s.top());


    s.pop();


    return 0;
}
