#include <stdio.h>
#include<locale.h>
#include<time.h>
#define N 5

void dec(int* x, int n,int ans) {
    int i;
    for (i = N; i > -1; i--) {
        if (i > (n - 1))
            x[i] = 0;
        else {
            x[i] = ans % 10;
            ans = ans / 10;
        }
    }


}

int main() {
    int a[N] = { 0,0,0,0,0 }, b[N+1] = { 0, 0, 0, 0, 0, 0 }, n, i,j, ans, cow, bull, d, cnt[10];
    setlocale(LC_ALL, "Rus");
    do {
        printf("Введите длинну загадываемого числа(1-5): ");
        scanf("%d", &n);
    } while ((n > 5) || (n < 1));

    for (i = 0; i < 10; i++)
        cnt[i] = 0;
    srand((unsigned int)time(0));
    a[0] = 1 + rand() % 9;
    cnt[a[0]]++;
    for (i = 1; i < n; i++) {
        srand((unsigned int)time(0));
        d = rand() % 10;
        while(cnt[d]!=0)
            d = rand() % 10;
        a[i] = d;
        cnt[d]++;
    }
    /*for (i = 0; i < n; i++)
        printf("%d ", a[i]);*/

    do {
        cow = bull = 0;
        printf("Введите число длинны %d: ",n);
        scanf("%d", &ans);
        dec(&(b[0]), n, ans);
        /*for (i = 0; i < n; i++)
            printf("%d ", b[i]);*/
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (a[i] == b[j])
                    cow++;
        }
        for (i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                bull++;
                cow--;
            }

            
        }
        


        if ((a[0] == b[0]) && (a[1] == b[1]) && (a[2] == b[2]) && (a[3] == b[3]) && (a[4] == b[4]))
            break;
        else
            printf("Коров: %d Быков: %d\n", cow, bull);



        

        

    } while ((a[0] != b[0]) || (a[1] != b[1]) || (a[2] != b[2]) || (a[3] != b[3]) || (a[4] != b[4]));





    printf("Вы выиграли! Загаданное число: %d", ans);  
    return 0;
}