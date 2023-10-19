#include <iostream>
using namespace std;

//Mendeklarasikan Variabel
int main () {
  int first_value = 10;
  int second_value = 8; 

  //Algoritma Menukar Variabel dengan Variabel Bantu/Sementara (temp)
  int temp = first_value;
  first_value = second_value;
  second_value = temp;

  cout << "First value: " << first_value << endl;
  cout << "Second_value: " << second_value << endl;

  return 0;
}
