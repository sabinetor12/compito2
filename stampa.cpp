/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

NOME COGNOME DATA
*/flavio ndoja

# include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (n >0)
  {
   cout<<"Bada come la fuma"<<endl; 
   n--;
  }
  system("pause");
}
