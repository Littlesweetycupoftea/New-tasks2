#include  <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int C ,F = 27 ;
    C = ( F - 32 ) / 1.8;
    printf ("���� ���������� 27 �������� �� ���������� � �������, �� ������ %i �������\n", C);
    return 0;
}