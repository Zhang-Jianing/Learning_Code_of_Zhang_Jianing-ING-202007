#include <cstdio>

struct Queue {
    int a[100005];
    int fnt = 1, end = 0;

    void push(int x) {      // 向队尾压入一个数
        a[++end] = x;
    }

    void pop() {            // 弹出队首
        fnt++;
    }

    int front() {             // 返回队首的值
        return a[fnt];
    }
};

Queue s;

int main(void) {
    s.push(1);
    printf("%d\n", s.front());  // 1

    s.push(2);
    printf("%d\n", s.front());  // 1
    
    s.pop();
    printf("%d\n", s.front());  // 2
    
    s.push(3);
    printf("%d\n", s.front());  // 2
        
    s.pop();
    printf("%d\n", s.front());  // 3

    s.pop();


    return 0;
}
