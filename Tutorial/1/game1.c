#include <stdio.h>
#include <time.h>

/*

rock paper & scissor game

*/
int random()
{
    int rand;
    rand = srand(time(NULL));
    return rand % 3;
}
int main()
{
    int n = 0, i = 0, k = 0, u = 0, c = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter the input you want\n");
        printf("1.Paper\n2.scissor\n3.Rock\n");
        scanf("%d", &n);
        k = random();
        if (n == 1 && k == 2)
        {
            c += 1;
        }
        if (n == 1 && k == 3)
        {
            u += 1;
        }
        if (n == 2 && k == 3)
        {
            c += 1;
        }
        if (n == 2 && k == 1)
        {
            u += 1;
        }
        if (n == 3 && k == 1)
        {
            u += 1;
        }
        if (n == 3 && k == 2)
        {
            c += 1;
        }
    }
    if (n > c)
    {
        printf("You are winner");
    }
    else if (n == c)
    {
        printf("The match get tie");
    }
    else
    {
        printf("You loss");
    }

    return 0;
}