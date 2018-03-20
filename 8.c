#include <stdio.h> 

int main(void) 
{ 
int a1 = 365, b1 = 7, 
a2 = 12258, b2 = 23, 
a3 = 996, b3 = 4;

printf("Next multiple %i and %i is %i\n", a1, b1, a1 + b1 - a1 % b1);

printf("Next multiple %i and %i is %i\n", a2, b2, a2 + b2 - a2 % b2);

printf("Next multiple %i and %i is %i\n", a3, b3, a3 + b3 - a3 % b3); 

return 0; 
}