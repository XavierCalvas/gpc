#include <iostream.h>
#include <stdlib.h>

int main()
{
     int n;
     cin >> n;
     switch (n) 
     {
          case 1: cout << "lunes\n";
                       break;
          case 2: cout << "martes\n";
                       break;
          case 3: cout << "mi�rcoles\n";
                       break;
          case 4: cout << "jueves\n";
                       break;
          case 5: cout << "viernes\n";
                       break;
          case 6: cout << "s�bado\n";
                       break;
          case 7: cout << "domingo\n";
                       break;
          default: cout << "error ese d�a no existe\n";
      }
      system("PAUSE");
      return 0;
}
