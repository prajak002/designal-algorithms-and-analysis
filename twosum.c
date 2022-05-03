#include <stdio.h>
int chkpair(int a[], int size, int x)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i] + a[j] == x)
            {
                printf("Pair with a given sum %d is (%d, %d)\n", x, a[i], a[j]);
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int a[n] int x;
    for ()
        if (chkpair(a, size, x) == 1)
        {
            printf("valid pair exists");
        }
        else
        {
            printf("not exist");
        }

    return 0;
}
