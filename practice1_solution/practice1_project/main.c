#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Rus");
    int x1, x2, y1, y2, r1, r2;

    printf("Input x1,y1,r1: ");
    scanf("%d %d %d",&x1,&y1,&r1);

    printf("Input x2,y2,r2: ");
    scanf("%d %d %d",&x2,&y2,&r2);
    
    printf(" \n");
    if ((x1 == x2) && (y1 == y2) && (r1 == r2))
        {
            printf("���������� ���������\n");
        }
    else if (r1 + r2 < sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)))
        {
            printf("���������� �� ������������\n");
        }
    else if ((sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))<r1-r2) || (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) < r2 - r1))
    {
        printf("���������� �������\n");
    }
    else if (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) == r2 + r1)
    {
        printf("���������� ��������(������� �������)\n");
    }
    else if ((sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) == r2 - r1) || (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) == r1 - r2))
    {
        printf("���������� ��������(���������� �������)\n");
    }
    else
    {
        printf("���������� ������������\n");
    }

    
    

    return 0;
}

//������� ��� ���������� ����� �������: sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))