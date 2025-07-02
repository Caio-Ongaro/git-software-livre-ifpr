#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int vetor[1000];

    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int maior = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    cout << maior << endl;

    return 0;
}
