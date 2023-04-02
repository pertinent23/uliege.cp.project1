#include <stdio.h>
#include "somme.h"

int main() 
{
    const int N = 10;
    int min_pos , max_pos;
    int T[] = {7, 4, 10, 2, 11, 3, -5, 8, 10, 11};
    int result = somme(T, N, &min_pos , &max_pos);

    printf (
        "\t Somme : %d -- (min_pos, min): (%d, %d) -- (max_pos, max): (%d, %d)\n", 
        result, min_pos, T[min_pos], max_pos , T[max_pos]
    );
}