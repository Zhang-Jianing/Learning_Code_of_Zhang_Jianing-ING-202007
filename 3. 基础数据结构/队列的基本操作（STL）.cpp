#include <cstdio>
#include <queue>
using namespace std;

queue <int> s;

int main() {
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
