#include  <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int C ,F = 27 ;
    C = ( F - 32 ) / 1.8;
    printf ("Если переводить 27 градусов по Фарингейту в Цельсии, то выйдет %i градуса\n", C);
    return 0;
}