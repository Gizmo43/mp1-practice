#include <stdio.h>
#include<locale.h>
#define N 10 //���-�� ������� � ����




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
        printf("�������� ��������: 1 - ������������� ����� 2 - �������� ���������������� ������ 3 - �������� ������ � ������ 4 - ������������ ��� 5 - ���������� �����");
        scanf("%d", &oper);
        if (oper == 1) {
            scanf("��������(4 �����): %d", &code);
            scan_prod(&(pr_code[0]), code);       
        }  




                                    
    

    } while (oper != 5);





}