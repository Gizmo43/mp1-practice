#include <stdio.h>
#include <locale.h>

int main() {
    int n;
    double h, w, d, v_dvp, v_dsp, v_wood,hc;
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
        printf("������� ������ �����(�� 50 �� 90 ��):");
        scanf("%lf", &d);
    } 
    n = 0;
    hc = h-3;

    while (hc > (40+1.5)) {
        hc = hc - 40 -1.5;
        n++;

    }
    printf("%d",n);
    
    
    h = h / 100;
    w = w / 100;
    d = d / 100;
    //printf("%lf %lf %lf %d", h, w, d, n);
 





    return 0;
}
//���������: 
// ���-1000��/�3
// ���-600��/�3
// ������-850��/�3
//������:
// ���-1000��/�3
// ���-600��/�3
// ������-850��/�3
// //
