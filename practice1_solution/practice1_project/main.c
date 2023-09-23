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
            printf("окружности совпадают\n");
        }
    else if (r1 + r2 < sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)))
        {
            printf("окружности не пересекаются\n");
        }
    else if ((sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1))<r1-r2) || (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) < r2 - r1))
    {
        printf("окружности вложены\n");
    }
    else if (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) == r2 + r1)
    {
        printf("окружности касаются(внешним образом)\n");
    }
    else if ((sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) == r2 - r1) || (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) == r1 - r2))
    {
        printf("окружности касаются(внутренним образом)\n");
    }
    else
    {
        printf("окружности пересекаются\n");
    }

    
    

    return 0;
}

//Формула для расстояния между точками: sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))