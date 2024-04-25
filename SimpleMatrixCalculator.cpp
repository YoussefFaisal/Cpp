#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
typedef long long ll;
typedef unsigned long long int ull;
typedef vector<int> vc;
typedef string str;
#define r0 return 0;
#define endl cout << "\n"
#define out cout <<
#define in cin >>
#define yes cout << "YES\n"
#define yesend     \
  cout << "YES\n"; \
  r0
#define noend     \
  cout << "NO\n"; \
  r0
#define no cout << "NO\n"
#define tc      \
  ll wloop;     \
  cin >> wloop; \
  while (wloop--)
#define sor(s) sort(s.begin(), s.end());
#define why_are_we_still_here() (ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL));

int main()
{
program:
  out "\n\nWellcome to matrix calculator\n";
  out "Please enter\n";
  out "[ 1 ] to add two matrcies\n";
  out "[ 2 ] to subtract two matrcies\n";
  out "[ 3 ] to multiply two matrcies\n";
  out "[ 4 ] to find the transpose of a matrix\n";
  out "[ 5 ] to find the inverse of a 2 x 2 matrix\n";
  out "[ 6 ] to find the inverse of a 3 x 3 matrix\n";
  out "[ 0 ] to exit\n";
  out " >>>   ";
  ll choice;
  in choice;
  ll row, col;
  ll row1, col1, row2, col2;
  if (choice == 1)
  {
    out "Matrix Addition\n";
    out " =================\n";
    out "Enter the number of rows : ";
    in row;
    out "Enter the number of columns : ";
    in col;
    double matrix1[row][col], matrix2[row][col];
    out "Enter the elements of the first matrix\n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out "Enter the element of the first matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix1[i][j];
      }
    }
    out "Enter the elements of the second matrix\n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out "Enter the element of the second matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix2[i][j];
      }
    }
    double sum[row][col];
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        sum[i][j] = matrix1[i][j] + matrix2[i][j];
      }
    }
    out "The sum of the two matrices is: \n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out sum[i][j] << " ";
      }
      endl;
    }
    sleep(5);
    goto program;
  }
  else if (choice == 2)
  {
    out "Matrix Subtraction\n";
    out " =================\n";
    out "Enter the number of rows : ";
    in row;
    out "Enter the number of columns : ";
    in col;
    double matrix1[row][col], matrix2[row][col];
    out "Enter the elements of the first matrix\n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out "Enter the element of the first matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix1[i][j];
      }
    }
    out "Enter the elements of the second matrix\n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out "Enter the element of the second matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix2[i][j];
      }
    }
    double sub[row][col];
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        sub[i][j] = matrix1[i][j] - matrix2[i][j];
      }
    }
    out "The difference of the two matrices is: \n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out sub[i][j] << " ";
      }
      endl;
    }
    sleep(5);
    goto program;
  }
  else if (choice == 3)
  {
    out "Matrix Multiplication\n";
    out " =================\n";
    out "Enter the number of rows of the first matrix : ";
    in row1;
    out "Enter the number of columns of the first matrix : ";
    in col1;
    out "Enter the number of rows of the second matrix : ";
    in row2;
    out "Enter the number of columns of the second matrix : ";
    in col2;
    if (col1 != row2)
    {
      out "The number of columns of the first matrix must be equal to the number of rows of the second matrix\n";
      sleep(3);
      goto program;
        }
    double matrix1[row1][col1], matrix2[row2][col2];
    out "Enter the elements of the first matrix\n";
    for (ll i = 0; i < row1; i++)
    {
      for (ll j = 0; j < col1; j++)
      {
        out "Enter the element of the first matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix1[i][j];
      }
    }
    out "Enter the elements of the second matrix\n";
    for (ll i = 0; i < row2; i++)
    {
      for (ll j = 0; j < col2; j++)
      {
        out "Enter the element of the second matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix2[i][j];
      }
    }
    double mul[row1][col2];
    for (ll i = 0; i < row1; i++)
    {
      for (ll j = 0; j < col2; j++)
      {
        mul[i][j] = 0;
        for (ll k = 0; k < col1; k++)
        {
          mul[i][j] += matrix1[i][k] * matrix2[k][j];
        }
      }
    }
    out "The product of the two matrices is: \n";
    for (ll i = 0; i < row1; i++)
    {
      for (ll j = 0; j < col2; j++)
      {
        out mul[i][j] << " ";
      }
      endl;
    }
    sleep(5);
    goto program;
  }
  else if (choice == 4)
  {
    out "Matrix Transpose\n";
    out " =================\n";
    out "Enter the number of rows : ";
    in row;
    out "Enter the number of columns : ";
    in col;
    double matrix[row][col];
    out "Enter the elements of the matrix\n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out "Enter the element of the matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix[i][j];
      }
    }
    double transpose[col][row];
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        transpose[j][i] = matrix[i][j];
      }
    }
    out "The transpose of the matrix is: \n";
    for (ll i = 0; i < col; i++)
    {
      for (ll j = 0; j < row; j++)
      {
        out transpose[i][j] << " ";
      }
      endl;
    }
    sleep(5);
    goto program;
  }
  else if (choice == 5)
  {
    out "Matrix Inverse for 2 x 2 matrix\n";
    out " ==============================\n";
    row = 2, col = 2;
    double matrix[row][col];
    out "Enter the elements of the matrix\n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out "Enter the element of the matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix[i][j];
      }
    }
    double det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    if (det == 0)
    {
      out "Sorry The matrix is singular\n";
      sleep(5);
      goto program;
    }
    double inverse[row][col];
    inverse[0][0] = matrix[1][1] / det;
    inverse[0][1] = -matrix[0][1] / det;
    inverse[1][0] = -matrix[1][0] / det;
    inverse[1][1] = matrix[0][0] / det;
    out "The inverse of the matrix is: \n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out inverse[i][j] << " ";
      }
      endl;
    }
    sleep(5);
    goto program;
  }
  else if (choice == 6)
  {
    out "Matrix Inverse for 3 x 3 matrix\n";
    out " ==============================\n";
    row = 3, col = 3;
    double matrix[row][col];
    out "Enter the elements of the matrix\n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out "Enter the element of the matrix at position [" << i + 1 << "][" << j + 1 << "] : ";
        in matrix[i][j];
      }
    }
    double det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    if (det == 0)
    {
      out "Sorry The matrix is singular\n";
      sleep(3);
      goto program;
    }
    double inverse[row][col];
    inverse[0][0] = (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) / det;
    inverse[0][1] = (matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]) / det;
    inverse[0][2] = (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) / det;
    inverse[1][0] = (matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]) / det;
    inverse[1][1] = (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) / det;
    inverse[1][2] = (matrix[1][0] * matrix[0][2] - matrix[0][0] * matrix[1][2]) / det;
    inverse[2][0] = (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) / det;
    inverse[2][1] = (matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]) / det;
    inverse[2][2] = (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) / det;
    out "The inverse of the matrix is: \n";
    for (ll i = 0; i < row; i++)
    {
      for (ll j = 0; j < col; j++)
      {
        out inverse[i][j] << " ";
      }
      endl;
    }
    sleep(3);
    goto program;
  }
  else if (choice == 0)
  {
    out "Goodbye\n";
    sleep(2);
    r0
  }
  else
  {
    out "Invalid choice\n";
    goto program;
  }
}