#include<stdio.h>

void main()
{
	int x1, x2, y1, y2, r1, r2;
	printf("������� ���������� � ������ ������ ����������");
	scanf("%d%d%d", &x1, &y1, &r1);
	printf("������� ���������� � ������ ������ ����������");
	scanf("%d%d%d", &x2, &y2, r2);
	if (x1 == x2 && y1 == y2 && r1 > r2)
	{
		printf("������ ���������� ��������� � ������");
	}
	if (x1 == x2 && y1 == y2 && r1 == r2)
	{
		printf("���������� �����");
	}


}