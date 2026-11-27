#include <stdio.h>

int main()
{
    int a, b, temp;
    int *p, *q;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swapping:\n");
    printf("First number = %d\n", a);
    printf("Second number = %d", b);

    return 0;
}
