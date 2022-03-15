//Zadanie 1
//Imiê: Filip
//Nazwisko: Mateńko
//Nr indeksu: 439733

//2∗f(n−1)−3∗f(n−2)+4∗f(n−3)−f(n−4)

#include<stdio.h>
#include<stdlib.h>

int funkcja1(int n){
    if (n<4){
        return n;
    }
    else{
        return 2*funkcja1(n-1)-3*funkcja1(n-2)+4*funkcja1(n-3)-funkcja1(n-4);
    }
}
int main(){
    int n=5;
    printf("Wartosc funkcji wynosi %d\n", funkcja1(n));
    return 0;
}

