#include <iostream>
using namespace std;

int main() {
    
    int n, i, contador = 0;
    
    cin >> n;

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            contador++;
    }
    
    if (contador == 2)
        cout << "Primo" << endl;
    else
        cout << "Não é primo" << endl;

    return 0;

}
