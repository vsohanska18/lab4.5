#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    double x, y, R;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    srand((unsigned)time(NULL));

    cout << "\nПерший спосіб: введення координат\n";
    if ((y >= 0 && y <= R && x >= -R && x <= 0 && x * x + (y - R) * (y - R) <= R * R) || (x >= 0 && x <= R && y <= 0 && y >= -R && x * x + y * y <= R * R))
        cout << "Точка потрапляє в мішень" << endl;
    else
        cout << "Точка не потрапляє в мішень" << endl;

    cout << "\nДругий спосіб: випадкові координати\n";
    cout << setw(10) << "x" << setw(10) << "y" << setw(20) << "Результат" << endl;

    for (int i = 0; i < 10; i++)
    {
        x = 2.0 * R * rand() / RAND_MAX - R;
        y = 2.0 * R * rand() / RAND_MAX - R;

        cout << fixed << setprecision(2) << setw(10) << x << setw(10) << y;

        if ((y >= 0 && y <= R && x >= -R && x <= 0 && x * x + (y - R) * (y - R) <= R * R) || (x >= 0 && x <= R && y <= 0 && y >= -R && x * x + y * y <= R * R))
            cout << setw(15) << "Так" << endl;
        else
            cout << setw(15) << "Ні" << endl;
    }
    return 0;
}