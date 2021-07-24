#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>

int main() {

      int a, s=0;

      /*Declaraci�n del flujo*/
      ifstream archivo;

      /*Conexi�n del flujo al archivo numeros.txt*/
      archivo.open("num.txt");

      /*Verifica si se abri� el archivo*/
      if (archivo.fail()) {
           cout <<  "no se pudo abrir el archivo";
           exit(1);
      }


      /*Recorre el archivo hasta que
        no haya mas numeros para leer*/
      while (archivo >> a){
          s = s + a;
      }

      /*Escribir el resultado en pantalla */
      cout << s ;

      /*Cerrar el archivo */
      archivo.close();

      system("PAUSE");
      return 0;
}

