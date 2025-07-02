#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[100][100], B[100][100], C[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    char op;
    cin >> op;

    if (op == 'a') {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                C[i][j] = A[i][j] + B[i][j];
    } else if (op == 's') {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                C[i][j] = A[i][j] - B[i][j];
    } else if (op == 'm') {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                C[i][j] = 0;
                for (int k = 0; k < n; k++)
                    C[i][j] += A[i][k] * B[k][j];
            }
        }
    } else {
        cout << "Operação inválida para esta versão" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
