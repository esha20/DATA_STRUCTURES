//tree recursion is a recursion in which the function calls itself more than 1 time.

#include<stdio.h>
int fun (int n)
{
    if(n>0)
    {
        printf("%d",n);
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    int a=3;
    fun(a);
    return 0;
}

