#include <iostream>
using namespace std;

//Elabora un promedio de 4 calificaciones
void programa_1() {
  int a = 95, b = 68, c = 92, d = 88;
  int Total = 0;
  Total = (a + b + c + d) / 4;
  cout << "La calificación promedio de Nancy es de : " << Total << "\n";
}

//Elabora un promedio de 10 califcaciones definidas
void programa_2() {
  int a[10] = {
    75,
    88,
    84,
    70,
    65,
    99,
    91,
    76,
    43,
    69
  };
  int Total = 0;
  for (int x = 0; x <= 9; x++) {
    Total = Total + a[x];
  }
  Total = Total / 10;
  cout << "El promedio de 10 numeros dados son: "<< Total << "\n";
}

//Elabora un arreglo de 10 elementos y los intercammbia los primeros 10 de adelante hacia atras
void programa_3() {
  int a[20] = {};
  int Total = 0;

  for (int x = 0; x <= 19; x++) {
    a[x] = rand() % 50;
  }
  for (int x = 0; x <= 19; x++) {
    cout << "La lista antes del intercambio: " << a[x] << ",";
  }
  cout << "\n";
  for (int x = 0; x <= 9; x++) {
    int temp = a[x];
    x = x + 10;
    int temp2 = a[x];
    a[x] = temp;
    x = x - 10;
    a[x] = temp2;
  }
  for (int x = 0; x <= 19; x++) {
    cout << a[x] << ",";
  }
  cout << "La lista con el intercambio hecho: " << "\n";
}

//Calcula n factorial
void programa_4() {
  int n = 0;
  int total = 1;
  cout << "Ingrese numero 1 a 7: ";
  cin >> n;
  total = n;
  for (int x = n - 1; x >= 1; --x) {

    total = total * (x);
  }
  cout << "El factorial del numero " << n << " es " <<total << "\n";
}

//Calcula 3 factoriales y los suma
void programa_5() {
  int X = 0, Y = 0, Z = 0;
  int totalX = 1, totalY = 1, totalZ = 1;
  cout << "Ingrese numero para X: ";
  cin >> X;
  cout << "Ingrese numero para Y: ";
  cin >> Y;
  cout << "Ingrese numero para Z: ";
  cin >> Z;
  totalX = X;
  totalY = Y;
  totalZ = Z;
  int resultado;
  for (int A = X - 1; A >= 1; --A) {

    totalX = totalX * (A);
  }
  for (int B = Y - 1; B >= 1; --B) {

    totalY = totalY * (B);
  }
  for (int C = Z - 1; C >= 1; --C) {

    totalZ = totalZ * (C);
  }
  resultado = totalX + totalY + totalZ;

  cout << "La suma de los factoriales X,Y,Z es " <<resultado << "\n";
}

//Donde se corren las funciones
int main() {
  programa_1();
  programa_2();
  programa_3();
  programa_4();
  programa_5();
  return 0;
}
//Realizado por Christian Javier
