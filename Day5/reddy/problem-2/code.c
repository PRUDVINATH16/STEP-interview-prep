#include <stdio.h>

int canAliceWin(int stones)
{
    int status = 0, removeStones = 10;

    while (1)
    {
        if (stones < removeStones)
            break;
        else
        {
            status = !status;
            stones -= removeStones;
            removeStones--;
        }
    }

    return status;
}

int main()
{
    if (canAliceWin(25))
        printf("alice will win");

    else
        printf("bob will win");
}
