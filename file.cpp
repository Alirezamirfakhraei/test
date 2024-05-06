#include <iostream>
using namespace std;

int main() {
    int i, x[5], y[5] , z[5];

    for (i = 0; i < 5; i++) {
        cout <<"enter x"<<"["<<i<<"]:";
        cin >> x[i];
    }

    for (i = 0; i < 5; i++) {
        cout <<"enter y"<<"["<<i<<"]:";
        cin >> y[i];
    }

    for (i = 0; i <= 5; i++) {
        z[i] = x[i] * y[i];
    }

       // Print out the odd numbers
    cout << "array: ";
    for (i = 0; i < 5; i++) {
        cout << z[i] << "";
    }
    cout << endl;


}