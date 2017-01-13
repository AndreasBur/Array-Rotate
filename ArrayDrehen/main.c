#include <stdio.h>
#include <stdlib.h>

char array[8][8] = {{11,12,13,14,15,16,17,18},
                    {21,22,23,24,25,26,27,28},
                    {31,32,33,34,35,36,37,38},
                    {41,42,43,44,45,46,47,48},
                    {51,52,53,54,55,56,57,58},
                    {61,62,63,64,65,66,67,68},
                    {71,72,73,74,75,76,77,78},
                    {81,82,83,84,85,86,87,88}};

char array_trans[8][8];

int main()
{
    int i,a;
    printf("\n origin\n");
    for(i = 0; i <= 7; i++)
    {
        for(a = 0; a <= 7; a++)
        {
            printf("%i,",array[i][a]);
            array_trans[i][a] = array[i][a];
        }
        printf("\n");
    }

    printf("\n test\n");
    for(a = 0; a <= 6; a++)
    {
        array_trans[0][a] = array[0][a+1];
        array_trans[a][7] = array[a+1][7];
    }

    for(a = 7; a > 0; a--)
    {
        array_trans[7][a] = array[7][a-1];
        array_trans[a][0] = array[a-1][0];
    }

    //array_trans[0][7] = array[1][7];
    //array_trans[7][7] = array[7][6];

    for(a = 0; a <= 6; a++)
    {
        array_trans[0][a] = array[0][a+1];
        array_trans[a][7] = array[a+1][7];
    }


    printf("\n mirrored\n");
    for(i = 0; i <= 7; i++)
    {
        for(a = 0; a <= 7; a++)
        {
            printf("%i,",array[a][i]);
        }
        printf("\n");
    }

    printf("\n rotation 90\n");
    for(i = 0; i < 8; i++)
    {
        for(a = 7; a >= 0; a--)
            printf("%d,", array[a][i]);
        printf("\n");
    }

    printf("\n rotation 180\n");
    for(i = 7; i >= 0; i--)
    {
        for(a = 7; a >= 0; a--)
            printf("%d,", array[a][i]);
        printf("\n");
    }

    printf("\n rotation 270\n");
    for(i = 7; i >= 0; i--)
    {
        for(a = 0; a <= 7; a++)
            printf("%d,", array[a][i]);
        printf("\n");
    }

    printf("\n Array Trans\n");
    for(i = 0; i <= 7; i++)
    {
        for(a = 0; a <= 7; a++)
        {
            printf("%i,",array_trans[i][a]);
        }
        printf("\n");
    }

    return 0;
}
