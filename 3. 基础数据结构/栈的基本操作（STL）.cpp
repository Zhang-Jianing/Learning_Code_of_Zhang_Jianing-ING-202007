#include <cstdio>
#include <stack>
using namespace std;

stack <int> s;

int main(void) {

    // s.push(233);
    // s.pop();
    // s.top();

    // s.size();
    // s.empty(); // 空时返回 true

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
