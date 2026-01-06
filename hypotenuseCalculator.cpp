#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double a;
    double b;

    cout << "Enter side A" << endl;
    cin >> a;

    cout <<"Enter side B" << endl;
    cin >> b;

    double z = (a * a) + (b * b);
    double c = sqrt(z);

    double x = round(c);
    cout << "Hypotenuse = " << c << endl;
    cout << "Rounded = " << x;

    return 0;
}