#include <iostream>
#include <climits>
//VARIANT 3 
int main() {
    using namespace std;
    setlocale(LC_ALL, "Russian");
    int m, n, k1, k2;
    cout << "Введите количество рядков (m): ";
    cin >> m;
    cout << "Введите количество столбцов (n): ";
    cin >> n;
    cout << "Ввелите номсер первого рядка (k1): ";
    cin >> k1;
    cout << "Введите номер воторого рядка (k2): ";
    cin >> k2;

    int** matri = new int* [m];
    for (int i = 0; i < m; ++i) {
        matri[i] = new int[n];
    }
    cout << "Введите елементы матрицы:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matri[i][j];
        }
    }
    int minElement = INT_MAX;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matri[i][j] < minElement) {
                minElement = matri[i][j];
            }
        }
    }

    cout << "Минимальный елемент: " << minElement << endl;
    if (k1 >= 0 && k1 < m && k2 >= 0 && k2 < m) {
        int* temp = matri[k1];
        matri[k1] = matri[k2];
        matri[k2] = temp;
    }
    else {
        cout << "БРА, ПОСМОТРИ В НУМЕРАЦИЮ ГРЯДОК" << endl;
    }

    cout << "Изменёная матрица:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matri[i][j] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < m; ++i) {
        delete[] matri[i];
    }
    delete[] matri;

    return 0;
}
