#include <stdio.h> 
#include <limits.h> //��� ��������� ��������� ��������� ����� � max � min 
#include <locale.h>
 

int main() 
{ 
    setlocale(LC_ALL, "Rus");
 
    printf("�������� �������� ������ �����:\n"); 
    printf("�� ������ char �� %d �� %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("��� ����� char �� 0 �� %d\n", UCHAR_MAX);
    printf("�� ������ shrt �� %d �� %d\n", SHRT_MIN, SHRT_MAX); 
    printf("��� ����� shrt �� 0 �� %d\n", USHRT_MAX); 
    printf("�� ������ int �� %d �� %d\n", INT_MIN, INT_MAX );
    printf("��� ����� int �� 0 �� %u\n", UINT_MAX);  
    printf("�� ������ long �� %ld �� %ld\n", LONG_MIN , LONG_MAX);  
    printf("��� ����� long �� 0 �� %lu\n", ULONG_MAX);
    
return 0; 
}