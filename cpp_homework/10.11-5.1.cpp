#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int*[rows];
        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    void setElement(int r, int c, int value) {
        data[r][c] = value;
    }

    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& other) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = this->data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
};

int main() {
    Matrix a(2, 3);
    Matrix b(2, 3);
    a.setElement(0, 0, 1);
    a.setElement(0, 1, 2);
    a.setElement(0, 2, 3);
    a.setElement(1, 0, 4);
    a.setElement(1, 1, 5);
    a.setElement(1, 2, 6);
    b.setElement(0, 0, 7);
    b.setElement(0, 1, 8);
    b.setElement(0, 2, 9);
    b.setElement(1, 0, 10);
    b.setElement(1, 1, 11);
    b.setElement(1, 2, 12);
    cout << "Matrix A:" << endl;
    a.print();
    cout << "Matrix B:" << endl;
    b.print();
    Matrix c = a + b;
    cout << "Matrix C (A + B):" << endl;
    c.print();
    return 0;
}
