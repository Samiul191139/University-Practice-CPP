#include <iostream>
using namespace std;
const int MAX_ROWS = 10;
const int MAX_COLS = 10;
class Matrix 
{
private:
    int rows;
    int cols;
    int elements[MAX_ROWS][MAX_COLS];

public:
    Matrix(int r, int c) 
    {
        rows = r;
        cols = c;
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                elements[i][j] = 0;
            }
        }
    }

    void inputMatrix() 
    {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> elements[i][j];
            }
        }
    }
    friend Matrix multiply(const Matrix& m1, const Matrix& m2);

    void displayMatrix() 
    {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                cout << elements[i][j] << " ";
            }
            cout << endl;
        }
    }
};
Matrix multiply(const Matrix& m1, const Matrix& m2) 
{
    if (m1.cols != m2.rows) 
    {
        cout << "Error: Matrix dimensions are incompatible for multiplication." << endl;
        return Matrix(0, 0);
    }
    Matrix result(m1.rows, m2.cols);
    for (int i = 0; i < m1.rows; i++) 
    {
        for (int j = 0; j < m2.cols; j++) 
        {
            int sum = 0;
            for (int k = 0; k < m1.cols; k++) 
            {
                sum += m1.elements[i][k] * m2.elements[k][j];
            }
            result.elements[i][j] = sum;
        }
    }
    return result;
}
int main() 
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter dimensions of the first matrix (row and col): ";
    cin >> rows1 >> cols1;
    Matrix m1(rows1, cols1);
    m1.inputMatrix();
    cout << "Enter dimensions of the second matrix (row and col): ";
    cin >> rows2 >> cols2;
    Matrix m2(rows2, cols2);
    m2.inputMatrix();
    Matrix result = multiply(m1, m2);
    cout << "Product of the two matrices:" << endl;
    result.displayMatrix();
    return 0;
}