#include <stdio.h>
#include<locale.h>
#define N 10 //���-�� ������� � ����



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
        printf("�������� ��������: 1 - ������������� ����� 2 - �������� ���������������� ������ 3 - �������� ������ � ������ 4 - ������������ ��� 5 - ���������� �����: \n");
        scanf("%d", &oper);
        if (oper == 1) {
            printf("��������(4 �����): ");
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
                printf("����� 2JZ GE: ����: %d ������: 10%%\n",pr1);
                break;
            case 2:
                printf("��� 2JZ GE: ����: %d ������: 5%%\n", pr2);
                break;
            case 3:
                printf("����������� 2jz GE: ����: %d ������: 10%%\n", pr3);
                break;
            case 4:
                printf("��� SR20DE: ����: %d ������: 5%%\n", pr4);
                break;
            case 5:
                printf("����������� SR20DE: ����: %d ������: 10%%\n", pr5);
                break;
            case 6:
                printf("��������������� Garret M24: ����: %d ������: 15%%\n", pr6);
                break;
            case 7:
                printf("��������������� Borg Warner S200SX: ����: %d ������: 15%%\n", pr7);
                break;
            case 8:
                printf("��������������� Holset HE221W: ����: %d ������: 15%%\n", pr8);
                break;
            case 9:
                printf("��� MoTeC MX00 ECUs ����: %d ������: 0%%\n", pr9);
                break;
            case 10:
                printf("��� AEM FIC 6 ����: %d ������: 0%%\n", pr10);
                break;
            default:
                printf("Error: Empty request\n");
            }
        }
        if (oper == 3)
            prod_list[n - 1]++;


        





                                    
    

    } while (oper != 5);





}