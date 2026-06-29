#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    int (*fp[2])(int,int);
    fp[0] = add;
    fp[1] = sub;
    printf("%d\n", fp[0](20,30));
    printf("%d\n", fp[1](70,10));
    return 0;
}