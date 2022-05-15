//Tail recursion is a recursion in which the last line in the function is the recursive function call.

#include <stdio.h>
int fun (int n)
{
    if (n>0)
    {
        printf("%d",n);
        fun(n-1);
    }
}
int main()
{
    int a=3;
    fun(a);
    return 0;
}
