#include <stdio.h>
#include<locale.h>
#define N 10 //кол-во товаров в базе




int scan_prod(int* x,int code) {
    int i = 0;
    for (; i < 4; i++) {
        x[i] = code % 10;
        code = code / 10;
    }
    return 0;
}





void main() {
    int prod_list[N] = {0},pr_code[4],oper,code;
    setlocale(LC_ALL, "Rus");

    do{
        printf("Выберите операцию: 1 - отсканировать товар 2 - описание отсканированного товара 3 - добавить данные о товаре 4 - сформировать чек 5 - рассчитать сумму");
        scanf("%d", &oper);
        if (oper == 1) {
            scanf("Штрихкод(4 цифры): %d", &code);
            scan_prod(&(pr_code[0]), code);       
        }  




                                    
    

    } while (oper != 5);





}