#include <stdio.h>

void foo()
{
    int a;
    ++a;
    printf("%d\n", a);
}

int main()
{
    foo();
    foo();
    foo();
}