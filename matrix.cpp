#include <iostream>
using namespace std;

void matrix1 (int m, int n){
    int **a = new int* [m];
    for (int i = 0; i < m; i++){
        a[i] = new int [n];
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = i*10;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

void matrix2 (int m, int n){
    int **a = new int* [m];
    for (int i = 0; i < m; i++){
        a[i] = new int [n];
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = j*5;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

void matrix3 (int m, int n, int numbers[]){
    int **a = new int* [m];
    for (int i = 0; i < m; i++){
        a[i] = new int [n];
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = numbers[i];
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

void matrix4 (int m, int n, int numbers[]){
    int **a = new int* [m];
    for (int i = 0; i < m; i++){
        a[i] = new int [n];
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = numbers[j];
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

void matrix7 (int **a, int m, int n, int k){
    for (int j = 0; j < n; j++){
        cout << a[k][j] << ' ';
    }
    cout << endl;
}

int main (){
    matrix1(3, 5);
    matrix2(3, 5);
    int a[3] = {1, 2, 3};
    matrix3(3, 5, a);
    int b[5] = {1, 2, 3, 4, 5};
    matrix4(3, 5, b);
}