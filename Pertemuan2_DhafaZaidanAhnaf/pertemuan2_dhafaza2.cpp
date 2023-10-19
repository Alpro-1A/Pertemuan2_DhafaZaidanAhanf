#include <iostream>
using namespace std;

int main() {
    int first_value = 10;
    int second_value = 8;

  // Tukar Value Kedua Variabel tanpa Temp (variable tambahan)
    first_value = first_value + second_value;
    second_value = first_value - second_value;
    first_value = first_value - second_value;

  // Output Penukaran kedua variabel tanpa temp
    cout << "first_value: " << first_value << endl;
    cout << "second_value: " << second_value << endl;

  return 0;
}