#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n = 100;

    int* mas = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введите mas[" << i + 1 << "]: " << endl;
        cin >> mas[i];
    }

    bool fl = true;
    while (fl)
    {
        fl = false;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (mas[i] > mas[i + 1])
                {
                    int z = mas[i];
                    mas[i] = mas[i + 1];
                    mas[i + 1] = z;
                    fl = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
}
