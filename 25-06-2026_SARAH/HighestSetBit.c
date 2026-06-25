#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int highest=-1;
    for(int i=0; i<32; i++)
    {
        if ((n>>i)&1 == 1)
        {
            highest=i;
        }
    }
    if(highest==-1)
    printf("No set bit");
    else
    printf("Highest set bit is at %d", highest);
}