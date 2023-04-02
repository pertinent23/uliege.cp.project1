#include <assert.h>
#include <stdio.h>
#include "somme.h"


int somme(int *T, int N,  int *min_pos, int *max_pos)
{
    assert(N>0 && T != NULL && min_pos != NULL && max_pos != NULL);

    int resultat, tmp1, tmp2, i;

    if (N==1) 
        return T[*min_pos = *max_pos = 0];

    if (T[0] > T[1])
        *min_pos = 1 + (*max_pos = 0);
    else
        *max_pos = 1 + (*min_pos = 0);

    resultat = T[0] + T[1];
    tmp1 = T[0];
    tmp2 = 0;
    i = 2;

    while(i<N) 
    {
        if(T[i]<T[*min_pos])
        {
            if (*min_pos<*max_pos) 
                resultat -= tmp1;
                
            *min_pos = i;
            tmp1 = resultat;
            tmp2 = 0;
        }
        else if(T[i]>T[*max_pos])
        {
            if (*max_pos<*min_pos) 
                resultat -= tmp1;
            
            *max_pos = i;
            tmp1 = resultat;
            tmp2 = 0;
        }
        else 
        {
            tmp2 += T[i];
        }
        
        resultat += T[i];
        i++;
    }

    return resultat - tmp2;
}