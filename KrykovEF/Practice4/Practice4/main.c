#include <stdio.h>
#include<locale.h>
#define N 10 //кол-во товаров в базе



int pr1 = 5000, pr2 = 8000, pr3 = 5000, pr4 = 7000, pr5 = 4000, pr6 = 20000, pr7 = 32000, pr8 = 35000, pr9 = 50000, pr10 = 40000;

int scan_prod(int* x,int code) {
    int i = 0;
    for (; i < 4; i++) {
        x[i] = code % 10;
        code = code / 10;
    }
    return 0;
}






void main() {
    int prod_list[N] = {0},pr_code[4],oper,code,n=0;
    setlocale(LC_ALL, "Rus");

    do{
        printf("Выберите операцию: 1 - отсканировать товар 2 - описание отсканированного товара 3 - добавить данные о товаре 4 - сформировать чек 5 - рассчитать сумму: \n");
        scanf("%d", &oper);
        if (oper == 1) {
            printf("Штрихкод(4 цифры): ");
            scanf("%d", &code);
            scan_prod(&(pr_code[0]), code);            
            switch (code){
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
        }  
        if (oper == 2) {
            switch (n) {
            case 1:
                printf("Шатун 2JZ GE: Цена: %d Скидка: 10%%\n",pr1);
                break;
            case 2:
                printf("Гбц 2JZ GE: Цена: %d Скидка: 5%%\n", pr2);
                break;
            case 3:
                printf("Распредвалы 2jz GE: Цена: %d Скидка: 10%%\n", pr3);
                break;
            case 4:
                printf("Гбц SR20DE: Цена: %d Скидка: 5%%\n", pr4);
                break;
            case 5:
                printf("Распредвалы SR20DE: Цена: %d Скидка: 10%%\n", pr5);
                break;
            case 6:
                printf("Турбокомпрессор Garret M24: Цена: %d Скидка: 15%%\n", pr6);
                break;
            case 7:
                printf("Турбокомпрессор Borg Warner S200SX: Цена: %d Скидка: 15%%\n", pr7);
                break;
            case 8:
                printf("Турбокомпрессор Holset HE221W: Цена: %d Скидка: 15%%\n", pr8);
                break;
            case 9:
                printf("Буд MoTeC MX00 ECUs Цена: %d Скидка: 0%%\n", pr9);
                break;
            case 10:
                printf("Буд AEM FIC 6 Цена: %d Скидка: 0%%\n", pr10);
                break;
            default:
                printf("Error: Empty request\n");
            }
        }
        if (oper == 3)
            prod_list[n - 1]++;


        





                                    
    

    } while (oper != 5);





}