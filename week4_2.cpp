#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << endl << "Enter elements of matrix 1:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cin >> a[i][j];
        }
        
    cout << endl << "Enter elements of matrix 2:" << endl;
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cin >> b[i][j];
        }

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

	cout << endl << "Addition Matrix: " << endl;
    for(i = 0; i < r1; ++i){
    for(j = 0; j < c2; ++j)
    {
        cout << " " << a[i][j]+b[i][j];
	}
            cout << endl;}
            
    cout << endl << "Multiplication Matrix: " << endl;
    for(i = 0; i < r1; ++i){
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
	}
            cout << endl;
    }
    
    return 0;
}
