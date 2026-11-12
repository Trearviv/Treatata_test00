#include <unistd.h>
void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
    write(1, "value pointed to by nbr: 42 \n", sizeof("value pointed to by nbr: 42 \n") - 1);
}
int main()
{
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    int ****e = &d;
    int *****f = &e;
    int ******g = &f;
    int *******h = &g;
    int ********i = &h;
    int *********j = &i;
    ft_ultimate_ft(j);
    return 0;
}