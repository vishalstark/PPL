#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, d, realPart, imaginaryPart;
    cout << "Enter the input accordingly : ax^2 + bx + c = 0";
    cout<<"\nEnter a b and c";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;
    
    if (d == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(d)) / (2*a);
        cout << "Root 1 = Root 2 =" << x1 << endl;
    }
	else if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << x1 << endl;
        cout << "Root 2 = " << x2 << endl;
    }
    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "Root 1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}
