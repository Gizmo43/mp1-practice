#include <stdio.h>
#include <locale.h>
#include <math.h>
#define DVP 950
#define DSP 650
#define WOOD 660

int main() {
    int n;
    double h, w, d, v_dvp, v_dsp, v_wood, hp, wp, m;
    v_dvp = 0.005;
    v_dsp = 0.015;
    v_wood = 0.01;
    setlocale(LC_ALL, "Rus");
    h = w = d = 0;
    while ((h < 180) || (h > 220)) {
        printf("������� ������ �����(�� 180 �� 220 ��):");
        scanf("%lf", &h);        
    }
    while ((w < 80) || (w > 120)) {
        printf("������� ������ �����(�� 80 �� 120 ��):");
        scanf("%lf", &w);
    }
    while ((d < 50) || (d > 90)) {
        printf("������� ������� �����(�� 50 �� 90 ��):");
        scanf("%lf", &d);
    }
    printf("\n");
    n = 0;
    hp = h - 3;

    while (hp > 40) {
        hp = hp - 40 - 1.5;
        n++;
    }
    //printf("%d",n);
    
    wp = (w - 3) / 100;
    hp = (h - 3) / 100;
    h = h / 100;
    w = w / 100;
    d = d / 100;
    //printf("%lf %lf %lf %d", h, w, d);
    m = h * w * v_dvp * DVP + h * w * v_wood * WOOD + v_dsp * DSP * (n * wp * d + 2 * hp * d + 2 * w * d);
    printf("����� �����: %lf ��\n", m);

    return 0;
}
//���������: 
// ���-850��/�3
// ���-750��/�3
// ������-520��/�3
//������:
// ���-5mm
// ���-15mm
// ������-1cm=10mm
// //
