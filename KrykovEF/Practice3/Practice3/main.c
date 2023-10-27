#include <stdio.h>
#include<locale.h>
#include<time.h>
#define N 5

void main() {
    int a[N] = { 0,0,0,0,0 }, b[N] = { 0, 0, 0, 0, 0 }, n, i, ans,c,bl,d;
    setlocale(LC_ALL, "Rus");
    do {
        printf("¬ведите длинну загадываемого числа(1-5): ");
        scanf("%d", &n);
    } while ((n > 5) || (n < 1));

    if (n > 0) {
        srand((unsigned int)time(0));
        a[0]=1 + rand() % 9;
        //printf("%d", a[0]);
    }
    if(n > 1) {
        srand((unsigned int)time(0));
        do {
            a[1] = rand() % 10;
        } while (a[1]==a[0]);     
    }
    if (n > 2) {
        srand((unsigned int)time(0));
        do {
            a[2] = rand() % 10;
        } while ((a[2] == a[0]) || (a[2] == a[1]));
    }
    if (n > 3) {
        srand((unsigned int)time(0));
        do {
            a[3] = rand() % 10;
        } while ((a[3] == a[0]) || (a[3] == a[1]) || (a[3] == a[2]));
    }
    if (n > 4) {
        srand((unsigned int)time(0));
        do {
            a[4] = rand() % 10;
        } while ((a[4] == a[0]) || (a[4] == a[1]) || (a[4] == a[2]) || (a[4] == a[3]));
    }
    //for (i = 0; i < N; i++) {
        //printf("%d ", a[i]);        
    //}
    do {
        printf("¬ведите число указанной длинны: ");
        scanf("%d", &ans);
        d = 1000;
        for (i = 0; i < N; i++) {
            b[i] = ans / d;
            ans = ans % d;
            d = d / 10;                    
        }
        for (i = 0; i < N; i++) {
            printf("%d ", b[i]);        
        }

    } while ((a[0]!=b[0]) && (a[1] != b[1]) && (a[2] != b[2]) && (a[3] != b[3]) && (a[4] != b[4]));











    
}