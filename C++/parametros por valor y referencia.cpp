#include <iostream.h>
#include <stdlib.h>

void pSuma(int x, int y, int* z); /*Prototipo de funci�n */

int main() 
{
   int a,b,c;
     cin >> a;
     cin >> b;
     pSuma(a,b,&c);  /* Llamada con par�metros por valor y por referencia */
     cout << c;
     system("PAUSE");
     return 0;
}
void pSuma (int x, int y, int* c)  /* recepci�n   en par�metros formales */
{
     *c = x + y;
}


