#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int num1;
    int num2;
    cout << "Digite ds enteros y le dire\n"
         << "las relaciones que satisface: ";
    cin >> num1 >>num2;

    if (num1 == num2){
        cout << num1 << " es igual a " << num2 << endl;
    }
    if (num1 != num2){
        cout << num1 << " no es igual a " << num2 << endl;
    }
    if (num1 > num2){
        cout << num1 << " es mayor que " << num2 << endl;
    }
    if (num1 < num2){
        cout << num1 << " es menor que " << num2 << endl;
    }
    if (num1 >= num2){
        cout << num1 << " es igual o mayor que " << num2 << endl;
    }
    if (num1 <= num2){ 
        cout << num1 << "es igual o menor que " << num2 << endl;
    }
    return 0;
}