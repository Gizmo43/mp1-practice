#include <stdio.h>
#include <locale.h>
#include <string.h>

#define N 10 //���-�� ������� � ����
#define N_SYMBOLS 5


char* code_base[N] = { "1001", "1002", "1003", "1004", "1005","1006",  "1007", "1008", "1009", "1010"};
char* names[N] = {"����� 2JZ GE","��� 2JZ GE", "����������� 2jz GE", "��� SR20DE", "����������� SR20DE",
                  "��������������� Garret M24", "��������������� Borg Warner S200SX",
                  "��������������� Holset HE221W", "��� MoTeC MX00 ECUs", "��� AEM FIC 6"};
float prices[N] = { 5000, 8000, 5000, 7000, 4000, 20000, 32000, 35000, 50000, 40000 };
float discounts[N] = {10, 5, 10, 5, 10, 15, 15, 15, 0, 0};
int prod_list[N] = { 0 };

float sum = 0, disc_sum = 0;

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
{
    for (int i = 0; i < N; i++) {
        if (prod_list[i] != 0) {
            printf("%s: ���� - %.2f ���������� - %d ������ - %.0f%%\n", names[i], prices[i], prod_list[i], discounts[i]);
            sum += prod_list[i] * prices[i];
            disc_sum += prod_list[i] * prices[i] * (1.f - discounts[i] / 100.f);
        }
    }
}
void print_total()
{
    printf("�����: %.2f � ������: %.2f\n", sum, disc_sum);
}

void main() {
    
    int oper, n, i;
    char code[N_SYMBOLS];

    setlocale(LC_ALL, "Rus");

    do{
        printf("�������� ��������: 1 - ������������� ����� 2 - ������������ ���: \n");
        scanf("%d", &oper);
        if (oper == 1) {
            printf("�������� (4 �����): ");
            scanf("%s", code);
            n = scan_prod(code);
            if (n < 0)
            {
                printf("������������ ���\n");
                continue;
            }
            prod_list[n]++;
            printf("%s: ���� - %.2f ������ - %.0f%%\n", names[n], prices[n], discounts[n]);
        }
    } while (oper != 2);

    printf("\n���: \n");
    print_check();
    print_total();
}    