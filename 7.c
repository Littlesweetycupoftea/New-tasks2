#include  <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    float x ;
    x = (3.31e-8*2.01e-7)/(7.16e-6 + 2.01e-8);
    printf ("Результатом будет %e\n", x);
    return 0;
}