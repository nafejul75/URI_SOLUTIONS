#include <stdio.h>
int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 >= n2)
    {
        if (n1 >= n3)
            printf("%d eh o maior\n", n1);
        else
            printf("%d eh o maior\n", n3);
    }
    else
    {
        if (n2 >= n3)
            printf("%d eh o maior\n", n2);
        else
            printf("%d eh o maior\n", n3);
    }
    return 0;
}
