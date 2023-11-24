#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 10 //кол-во товаров в базе
#define N_SYMBOLS 5


char* code_base[N] = { "1001", "1002", "1003", "1004", "1005","1006",  "1007", "1008", "1009", "1010"};
//int code_base[N][4] = { {1,0,0,1},{1,0,0,2},{1,0,0,3},{1,0,0,4},{1,0,0,5},
//    {1,0,0,6},{1,0,0,7},{1,0,0,8},{1,0,0,9},{1,0,1,0}, };
char* names[N] = {"1","2", "3", "4", "5", "6", "7","8","9","10"};
float* prices[N] = { 5000,8000,5000,7000,4000,20000,32000,35000,50000,40000 };
float* discounts[N] = {10,5,10,5,10,15,15,15,0,0};
int prod_list[N] = { 0 };

int sum = 0, disc_sum = 0;
//int pr1 = 5000, pr2 = 8000, pr3 = 5000, pr4 = 7000, pr5 = 4000,
//pr6 = 20000, pr7 = 32000, pr8 = 35000, pr9 = 50000, pr10 = 40000; //цены

int scan_prod(char* code) {
    int i = 0;
    for (; i < N; i++)
    {
        if (strcmp(code, code_base[i]) == 0)
        {

            return i;
        }
    }
    return -1;
}

void print_check()
{}

void print_total()
{}

void main() {
    
    int oper, n, i;
    char code[N_SYMBOLS];

    setlocale(LC_ALL, "Rus");

    do{
        printf("Выберите операцию: 1 - отсканировать товар 2 - сформировать чек: \n");
        scanf("%d", &oper);
        if (oper == 1) {
            printf("Штрихкод (4 цифры): ");
            scanf("%s", code);
            n = scan_prod(code);
            if (n < 0)
            {
                printf("Некорректный код\n");
                continue;
            }
            prod_list[n]++;
            printf("%s: цена - %f, скидка - %f\n", names[n], prices[n], discounts[n]);
        }
    } while (oper != 2);

    printf("\nЧек: \n");
    print_check();
    print_total();

    //printf("Итого: %d\n", sum);
    //printf("К оплате: %d\n", disc_sum);
}


    