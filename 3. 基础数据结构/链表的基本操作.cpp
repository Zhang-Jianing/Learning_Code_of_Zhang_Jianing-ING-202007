#include <cstdio>

struct node
{
    int key;
    node* rt;

    node(int _key, node* _rt)
    {
        key = _key;
        rt = _rt;
    }
};

node *root;

void init()
{
    root = new node(-1, NULL);
}

int ask(int key)
{
    for(node* p=root->rt; p; p=p->rt)
        if(p->key == key) return 1;
    return 0;
}

void ins(int key)
{
    node* p;
    for(p=root; p->rt; p=p->rt)
        if(p->rt->key >= key) break;    // 找到键比key小的最右边的结点
    // 现在p是键比key小的最右结点

    node* target = new node(key, p->rt);
    p->rt = target;
}

void del(int key)
{
    node* p;
    for(p=root; p->rt; p=p->rt)
        if(p->rt->key >= key) break;    // 找到键比key小的最右边的结点
    // 现在p是键比key小的最右结点

    node* target = p->rt;
    p->rt = target->rt;

    delete target;
}

void output()
{
    for(node* p=root->rt; p; p=p->rt)
        printf("%d ", p->key);
    puts("");
}

void debug()
{
    for(node* p=root->rt; p; p=p->rt)
        printf("Node[%p] key=%d rt=%p\n", p, p->key, p->rt);
    puts("");
}

int main(void)
{
    init();

    ins(1);
    ins(2);
    ins(4);
    ins(5);

    // output();
    debug();

    ins(3);

    // output();
    debug();

    del(2);

    // output();
    debug();



    return 0;
}
