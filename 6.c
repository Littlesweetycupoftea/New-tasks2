#include  <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Rus");
    float x=2.55 ;
    printf ("Результатом будет %f\n", 3*x*x*x - 5*x*x + 6);
    return 0;
}
