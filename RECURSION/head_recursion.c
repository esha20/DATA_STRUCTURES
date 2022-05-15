//Recursion in which the function calls itself first and then prints the result.


#include <stdio.h>
int fun (int n)
{
    if (n>0)
    {
        fun (n-1);
        printf("%d",n);
    }
}
int main ()
{
    int a=3;
    fun(a);
    return 0;
}
