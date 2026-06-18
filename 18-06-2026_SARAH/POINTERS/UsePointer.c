#include <stdio.h>
int main()
{
    int a=10;
    int *p;
    p = &a;
    *p=*p+1;
    printf("Updated value of a using \"a\" : %d",a);
    printf("\nUpdated value of a using pointer \"p\" %d",*p);
    printf("\nAddress of a using pointer \"p\" %p",(void *)p);
    printf("\nAddress of a using & operator with a %p",(void *)&a);
    printf("\nAddress of pointer p %p",(void*)&p);
}