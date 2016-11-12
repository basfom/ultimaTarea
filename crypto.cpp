#include <iostream>
#include <string>

using namespace std;

void encrypt(string frase)
{
  int len;
  cout << "########## 3NCRYP73R/D3CRYP73R ##########" << endl;
  cout << "La frase escrita es: " << frase << endl;
  len = frase.length();
  cout << "El tamaño de la frase es: " << len << endl;
  cout << "#########################################" << endl;
  cout << "RESULTADO:" << endl;

  string encriptado;
  for(int i = 0; i < len; i++)
  {
    string letra = frase.substr(i, 1);

    if (letra == "c") letra = "p";
    else if (letra == "e") letra = "o";
    else if (letra == "n") letra = "l";
    else if (letra == "i") letra = "a";
    else if (letra == "t") letra = "r";
    else if (letra == "p") letra = "c";
    else if (letra == "o") letra = "e";
    else if (letra == "l") letra = "n";
    else if (letra == "a") letra = "i";
    else if (letra == "r") letra = "t";

    encriptado = encriptado + letra;
  }
  cout << encriptado << endl;
}


int main()
{
  string frase;
  cout << "Ingrese la frase a encriptar o desencriptar: ";
  getline(cin, frase);
  encrypt(frase);
  return 0;
}
