#include <stdio.h> 
#include <limits.h> //эта директива позволяет запускать штуки с max и min  
#include <locale.h>
 

int main() 
{ 
    setlocale(LC_ALL, "Rus");
 
    printf("Диапазон значений разных типов:\n"); 
    printf("Со знаком char от %d до %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Без знака char от 0 до %d\n", UCHAR_MAX);
    printf("Со знаком shrt от %d до %d\n", SHRT_MIN, SHRT_MAX); 
    printf("Без знака shrt от 0 до %d\n", USHRT_MAX); 
    printf("Со знаком int от %d до %d\n", INT_MIN, INT_MAX );
    printf("Без знака int от 0 до %u\n", UINT_MAX);  
    printf("Со знаком long от %ld до %ld\n", LONG_MIN , LONG_MAX);  
    printf("Без знака long от 0 до %lu\n", ULONG_MAX);
    
return 0; 
}
