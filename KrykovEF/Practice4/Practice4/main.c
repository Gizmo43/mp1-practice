#include <stdio.h>
#include<locale.h>
#define N 10 //кол-во товаров в базе




int sum = 0, disc_sum = 0;
int pr1 = 5000, pr2 = 8000, pr3 = 5000, pr4 = 7000, pr5 = 4000, pr6 = 20000, pr7 = 32000, pr8 = 35000, pr9 = 50000, pr10 = 40000; //цены
int scan_prod(int* x,int code) {
    int i = 0;
    for (; i < 4; i++) {
        x[i] = code % 10;
        code = code / 10;
    }
    return 0;
}

void print_check(int i,int * prod_list) {
    if (prod_list[i] != 0) {
        switch (i) {
        case 0:
            printf("Шатун 2JZ GE: Цена: %d Количество: %d Скидка: 10%%\n", pr1, prod_list[i]);
            sum = sum + (pr1 * prod_list[i]);
            disc_sum = disc_sum + ((pr1 * prod_list[i]) / 100) * 90;
            break;
        case 1:
            printf("Гбц 2JZ GE: Цена: %d Количество: %d Скидка: 5%%\n", pr2, prod_list[i]);
            sum = sum + (pr2 * prod_list[i]);
            disc_sum = disc_sum + ((pr2 * prod_list[i]) / 100) * 95;
            break;
        case 2:
            printf("Распредвалы 2jz GE: Цена: %d Количество: %d Скидка: 10%%\n", pr3, prod_list[i]);
            sum = sum + (pr3 * prod_list[i]);
            disc_sum = disc_sum + ((pr3 * prod_list[i]) / 100) * 90;
            break;
        case 3:
            printf("Гбц SR20DE: Цена: %d Количество: %d Скидка: 5%%\n", pr4, prod_list[i]);
            sum = sum + (pr4 * prod_list[i]);
            disc_sum = disc_sum + ((pr4 * prod_list[i]) / 100) * 95;
            break;
        case 4:
            printf("Распредвалы SR20DE: Цена: %d Количество: %d Скидка: 10%%\n", pr5, prod_list[i]);
            sum = sum + (pr5 * prod_list[i]);
            disc_sum = disc_sum + ((pr5 * prod_list[i]) / 100) * 90;
            break;
        case 5:
            printf("Турбокомпрессор Garret M24: Цена: %d Количество: %d Скидка: 15%%\n", pr6, prod_list[i]);
            sum = sum + (pr6 * prod_list[i]);
            disc_sum = disc_sum + ((pr6 * prod_list[i]) / 100) * 85;
            break;
        case 6:
            printf("Турбокомпрессор Borg Warner S200SX: Цена: %d Количество: %d Скидка: 15%%\n", pr7, prod_list[i]);
            sum = sum + (pr7 * prod_list[i]);
            disc_sum = disc_sum + ((pr7 * prod_list[i]) / 100) * 85;
            break;
        case 7:
            printf("Турбокомпрессор Holset HE221W: Цена: %d Количество: %d Скидка: 15%%\n", pr8, prod_list[i]);
            sum = sum + (pr8 * prod_list[i]);
            disc_sum = disc_sum + ((pr8 * prod_list[i]) / 100) * 85;
            break;
        case 8:
            printf("Буд MoTeC MX00 ECUs Цена: %d Количество: %d Скидка: 0%%\n", pr9, prod_list[i]);
            sum = sum + (pr9 * prod_list[i]);
            disc_sum = disc_sum + (pr9 * prod_list[i]);
            break;
        case 9:
            printf("Буд AEM FIC 6 Цена: %d Количество: %d Скидка: 0%%\n", pr10, prod_list[i]);
            sum = sum + (pr10 * prod_list[i]);
            disc_sum = disc_sum + (pr10 * prod_list[i]);
            break;
        default:
            printf("Error: Empty request\n");
        }
    }
}






void main() {
    
    int prod_list[N] = {0},pr_code[4],oper,code,n=0,i;
    setlocale(LC_ALL, "Rus");

    do{
        printf("Выберите операцию: 1 - отсканировать товар 2 - сформировать чек: \n");
        scanf("%d", &oper);
        if (oper == 1) {
            printf("Штрихкод(4 цифры): ");
            scanf("%d", &code);
            scan_prod(&(pr_code[0]), code);
            //коды
            switch (code) {
            case 1001:
                n = 1;
                break;
            case 1002:
                n = 2;
                break;
            case 1003:
                n = 3;
                break;
            case 1004:
                n = 4;
                break;
            case 1005:
                n = 5;
            case 1006:
                n = 6;
                break;
            case 1007:
                n = 7;
                break;
            case 1008:
                n = 8;
                break;
            case 1009:
                n = 9;
                break;
            case 1010:
                n = 10;
                break;
            default:
                printf("Error: no data in base\n");
            }
            //номера
            switch (n) {
            case 1:
                printf("Шатун 2JZ GE: Цена: %d Скидка: 10%%\n", pr1);
                prod_list[n - 1]++;
                break;
            case 2:
                printf("Гбц 2JZ GE: Цена: %d Скидка: 5%%\n", pr2);
                prod_list[n - 1]++;
                break;
            case 3:
                printf("Распредвалы 2jz GE: Цена: %d Скидка: 10%%\n", pr3);
                prod_list[n - 1]++;
                break;
            case 4:
                printf("Гбц SR20DE: Цена: %d Скидка: 5%%\n", pr4);
                prod_list[n - 1]++;
                break;
            case 5:
                printf("Распредвалы SR20DE: Цена: %d Скидка: 10%%\n", pr5);
                prod_list[n - 1]++;
                break;
            case 6:
                printf("Турбокомпрессор Garret M24: Цена: %d Скидка: 15%%\n", pr6);
                prod_list[n - 1]++;
                break;
            case 7:
                printf("Турбокомпрессор Borg Warner S200SX: Цена: %d Скидка: 15%%\n", pr7);
                prod_list[n - 1]++;
                break;
            case 8:
                printf("Турбокомпрессор Holset HE221W: Цена: %d Скидка: 15%%\n", pr8);
                prod_list[n - 1]++;
                break;
            case 9:
                printf("Буд MoTeC MX00 ECUs Цена: %d Скидка: 0%%\n", pr9);
                prod_list[n - 1]++;
                break;
            case 10:
                printf("Буд AEM FIC 6 Цена: %d Скидка: 0%%\n", pr10);
                prod_list[n - 1]++;
                break;
            default:
                printf("Error: Empty request\n");
            }
        }
    } while (oper != 2);

    printf("\n");

    printf("Чек: \n");
    for (i = 0; i < 10; i++)
        print_check(i, &(prod_list[0]));

    printf("Итого: %d\n", sum);
    printf("К оплате: %d\n", disc_sum);



    




    





}