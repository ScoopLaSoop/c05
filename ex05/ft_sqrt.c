int ft_sqrt(int nb)
{
    long a;

    long i;

    a = nb;
    i = 2;
    if (a <= 0)
        return (0);
    if (a == 1)
        return (1);
    if (a >= 2)
    {
        while (i * i != a)
            i++;
        return (i);
    }
    return (0);
}
/*
#include <stdio.h>

int main(void)
{
    printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
    printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
    printf("sqrt of %d is %d\n", -5, ft_sqrt(-5));
    printf("sqrt of %d is %d\n", 21921124, ft_sqrt(21921124));
    return (0);
}
*/