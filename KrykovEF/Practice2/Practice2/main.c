#include<stdio.h>
#include<locale.h>
#include<time.h>
#define RAND_MAX



int main() {
    setlocale(LC_ALL, "Rus");
    int flag, n, count,ans,a,b,mid;
    char ret;
    printf("�������� ����� ����. 1 - ��������� ���������� ����� ���  2 - ��������� ��������� �����: ");
    scanf("%d",&flag);
    //printf("%d",flag);
    if (flag == 1) {
        srand((unsigned int)time(0));
        n = 1 + rand() % 1000;
        //printf("%d", n);
        ans = 0;
        count = 0;
        do{
            printf("������� �����:");
            scanf("%d", &ans);
            if (ans < n)
                printf("����� ������ \n");
            if (ans > n)
                printf("����� ������ \n");
            count++;
        }while (ans != n);
        printf("�� ��������! ���������� �����: %d. ���������� �������: %d",n,count);
    }
    if (flag == 2) {
        printf("��������� ����� � ��������� 1-1000: ");
        scanf("%d", &n);
        count = 0;
        a = 0;
        b = 1000;
        ans = (a + b) / 2;
        do{
            printf("���� ����� %d?", ans);
            scanf("%*c%c", &ret);
            if (ret == '>') {
                a = ans;
                ans = (a + b) / 2;
            }
            if (ret == '<') {
                b = ans;
                ans = (a + b) / 2; 
            }
            count++;
        } while (ret != '=');
        printf("���� �����: %d. ���������� �������: %d", ans, count);
    }
    return 0;
}