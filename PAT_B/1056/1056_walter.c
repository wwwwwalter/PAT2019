#include <stdio.h>
#include <stdlib.h>
void sum(int *p, int N)
{
    int sum = 0;
    int i = 0, j = 0;
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            if (i != j)
            {
                sum = sum + p[i] * 10 + p[j];
            }
        }
    }
    printf("%d\n", sum);
}

int main(void)
{
    int N = 0;
    int *p = (int *)calloc(N, sizeof(int));
    scanf("%d", &N);
    int i = 0;
    for (i = 0; i < N; ++i)
    {
        scanf("%d", &p[i]);
    }
    sum(p, N);
    free(p);
    return 0;
}