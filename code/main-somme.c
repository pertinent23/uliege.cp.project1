#include <stdio.h>
#include "somme.h"

int main() 
{
    int min_pos , max_pos;
    //int T[] = {7, 4, 10, 2, 11, 3, -5, 8, 10, 11}, N = 10;
    //int T[] = {0, 5, 6, -2}, N = 4;
    //int T[] = {0, -10, 36, 25, 6, 5, 6, 56, -2}, N = 9;
    //int T[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, N = 10;
    int T[] = {11, 2, 3, 1, 5, 6, 1, 8, 9, 10}, N = 10;
    int result = somme(T, N, &min_pos , &max_pos);

    printf (
        "\t Somme : %d -- (min_pos, min): (%d, %d) -- (max_pos, max): (%d, %d)\n", 
        result, min_pos, T[min_pos], max_pos , T[max_pos]
    );
}