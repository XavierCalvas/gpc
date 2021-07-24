#include <iostream.h>
#include <stdlib.h>

class cuentabancaria{
public:
   cuentabancaria();
   void deposito( );
   void retiro ( );
   int operator+(cuentabancaria& b);
   void operator= (cuentabancaria& b);
   bool operator==(cuentabancaria& b);
private:
   int saldo;
};



int main(){

   // Declaraci�n de las variables objeto
   cuentabancaria cuenta1, cuenta2;

   int total=0;

   cuenta1.deposito();

   cuenta2.deposito();

   total = cuenta1 + cuenta2;

   cout << total<< endl;

   system("PAUSE");
   return 0;
}


// Implementaci�n del constructor
cuentabancaria::cuentabancaria(){
   saldo = 0;
}

// Implementaci�n de la funci�n operator=
void cuentabancaria::operator=(cuentabancaria& b){
   saldo = b.saldo;
}

// Implementaci�n de la funci�n operator+
int cuentabancaria::operator+(cuentabancaria& b){
   int sal_total;
   sal_total = saldo + b.saldo;
   return sal_total;
}

// Implementaci�n de la funci�n para comparar
bool cuentabancaria::operator==(cuentabancaria& b){
   return (saldo == b.saldo);
}

// Implementaci�n de la funci�n para depositos
void cuentabancaria::deposito (){
   int x;
   cout << "Ingrese el valor del deposito: ";
   cin >> x;
   saldo = saldo + x;
}


// Implementaci�n de la funci�n para retiros
void cuentabancaria::retiro (){
   int x;
   cout << "Ingrese el valor del retiro: ";
   cin >> x;
   saldo = saldo - x;
}

