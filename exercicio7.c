#include <stdio.h>

int main()
{

    int num[10] = {1,2,3,4,5,6,7,8,9,10};

    int max, min;
    max = -2147483647;
    min = 2147483647;
    for (int i = 0; i <= 9; i++)
    {

        if (num[i]<min) {

            min = num[i];

        }
        else if (num [i]>max) {

            max = num[i];

        }

    }

    printf ("min %d, max %d", min, max);
}
