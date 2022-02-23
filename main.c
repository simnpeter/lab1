#include <stdio.h>
#include "Sumfunctions.h"
#include <stdlib.h>
#include <time.h>

#define hiba(L, name) {if(!L){printf("hiba %s", name); exit(-1);}}

int main() {
    int a=5, b=7;
    int eredmeny = osszead(a, b);
    printf("%i", eredmeny);
    int max = comparemax(a, b, eredmeny);
    int min = comparemin(a, b, eredmeny);
    printf(" %i %i", min, max);
    int *tomb, n=6, osszeg, avrg, szorz;
    printf("\n");
    tomb=(int*)calloc(n, sizeof(int)); hiba(tomb, "tomb")
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        tomb[i]=-20+rand()%(20-(-20));
        printf("%i ", tomb[i]);
    }
    osszeg= sum(tomb, n);
    avrg= atlag(osszeg, n);
    szorz= szorzat(tomb, n);
    printf("\n%i %i %i", osszeg, avrg, szorz);
    int poz, neg, even, odd;
    poz = pozitiv(tomb, n);
    neg = negativ(tomb, n);
    even = paros(tomb, n);
    odd = paratlan(tomb, n);
    printf("\n%i %i %i %i", poz, neg, even, odd);
    printf("\n");
    inverz(tomb, n);
    free(tomb);
    return 0;
}