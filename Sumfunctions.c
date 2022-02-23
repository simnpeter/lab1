//
// Created by SP on 2022. 02. 16..
//
#include <stdio.h>
#include "Sumfunctions.h"
int osszead(int a, int b){
    return a+b;
}
int comparemin(int a, int b, int c){
    int min=a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }
    return min;
}
int comparemax(int a, int b, int c){
    int max=a;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    return max;
}
int sum(int*tomb, int n){
    int osszeg=0;
    for (int i = 0; i < n; ++i) {
        osszeg+=tomb[i];
    }
    return osszeg;
}
int szorzat(int*tomb, int n){
    int szorz=1;
    for (int i = 0; i < n; ++i) {
        szorz*=tomb[i];
    }
    return szorz;
}
int atlag(int sum, int n){
    return (sum/=n);
}
int paros(int*tomb, int n){
    int db=0, hasonlit;
    for (int i = 0; i < n; ++i) {
        hasonlit=tomb[i];
        if(hasonlit<0){
            hasonlit*=(-1);
        }
        if(hasonlit%2==0){
            ++db;
        }
    }
    return db;
}
int paratlan(int* tomb, int n){
    int db=0, hasonlit;
    for (int i = 0; i <  n ; ++i) {
        hasonlit=tomb[i];
        if(hasonlit<0){
            hasonlit*=(-1);
        }
        if(tomb[i]%2==1){
            ++db;
        }
    }
    return db;
}
int pozitiv(int*tomb, int n){
    int db=0;
    for (int i = 0; i < n; ++i) {
        if(tomb[i]>=0){
            ++db;
        }
    }
    return db;
}
int negativ(int*tomb, int n){
    int db=0;
    for (int i = 0; i < n; ++i) {
        if(tomb[i]<0){
            ++db;
        }
    }
    return db;
}
void inverz(int* tomb, int n){
    for (int i = n-1; i >= 0; --i) {
        printf("%i ", tomb[i]);
    }
}




