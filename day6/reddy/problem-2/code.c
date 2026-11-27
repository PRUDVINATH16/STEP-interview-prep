
#include <stdio.h>

int main()
{
    int N = 5, K = 25;
    int i = 1, status = 1;

    for (int count = 1; count <= K; count++)
    {
        printf("%d ", i);

        if (i == N)
            status = -1;
        else if (i == 1)
            status = 1;

        i += status;
    }

    return 0;
}
