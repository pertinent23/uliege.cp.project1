/**
 * \file somme.h
 * \brief Header pour la somme min-max d'un tableau
 * \author HEUBA BATOMEN Franck Duval, Bilali Assalni
 * \version 0.1
 * \date 03/12/2022
 *
 * ImplÃŠmente la somme min-max d'un tableau T.
*/

#ifndef __SOMME__
#define __SOMME__

/*
 * @pre: N=N0>0 && T = T0
 * @post: T=T0 && N = N0 && T[min_pos]=min(T) && T[max_pos]=max(T) && somme = min(min_pos, max_pos) + T[min(min_pos, max_pos) + 1] + ... + max(min_pos, max_pos)  
*/
int somme(int *T, int N,  int *min_pos, int *max_pos);

#endif