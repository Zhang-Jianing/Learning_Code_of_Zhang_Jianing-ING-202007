#include <cstdio>

struct Stack {

    struct node {
        node* below;        // 这个元素的下面那个元素
        int key;            // 这个元素的值
    } *nowTop;

    void push(int x) {      // 向栈顶压入一个数
        node* todo = new node();
        todo->below = nowTop;
        todo->key = x;

        nowTop = todo;
    }

    void pop() {            // 弹出栈顶
        node *old = nowTop;
        nowTop = old->below;
        delete old;
    }

    int top() {             // 返回栈顶的值
        return nowTop->key;
    }
};

Stack s;

int main() {
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
