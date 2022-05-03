#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, x;
    scanf("%d%d%d %d%d%d %d", &a, &b, &c, &d,&e,&f,&x);
    int takahashi = 0, aoki = 0;
    for (int k = 0; k < x; ++k)
    {
        if (k % (a + c) < a)
        {
            takahashi += b;
        }
        if (k % (d + f) < d)
        {
            aoki += e;
        }
    }
    if (takahashi > aoki)
    {
        printf("Takahashi\n");
    }
    else if (takahashi < aoki)
    {
        printf("Aoki\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}
