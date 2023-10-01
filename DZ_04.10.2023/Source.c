#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int dz3() {
    double summa, stavka;
    int years;

    printf("������� ����� ������: ");
    scanf("%lf", &summa);

    printf("������� ���������� ������: ");
    scanf("%lf", &stavka);

    printf("������� ���� ������ � �����: ");
    scanf("%d", &years);

    double rezult = summa * stavka / 100 * years;

    printf("����� �� ������ ��������: %.2lf\n", rezult);

}

int dz4() {
    int X, Y;
    float avg, res1, res2;

    printf("\n������� ������� ����: ");
    scanf("%d", &X);
    printf("������� ������� ����: ");
    scanf("%d", &Y);

    avg = (X + Y) / 2.;
    res1 = X - avg;
    res2 = Y - avg;

    printf("\n������� ���� ���������� �� �������� �������� ��������� ��: %f", fabs(res1));
    printf("\n������� ���� ���������� �� �������� �������� ��������� ��: %f\n", fabs(res2));

}

int dz5() {
    double x, y, z, res1, res2, res3, res4, res5, res6;
    x = -2.235 * pow(10, -2);
    y = 2.23;
    z = 15.221;

    res1 = pow(x, 6) + pow(log(y), 2);
    res2 = pow(res1, 1 / 3.);
    res3 = exp(fabs(x - y)) * pow(fabs(x - y), x + y);
    res4 = atan(x) + atan(z);
    res5 = res3 / res4;
    res6 = res2 + res5;

    printf("\nw = %lf", res6);

}


int main() {
    setlocale(LC_ALL, "RUS");

    dz3();
    dz4();
    dz5();

    return 0;
}