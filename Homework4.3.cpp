#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n;
    int* mas;

    cout << "Введите количество элементов в массиве: " << endl;
    cin >> n;
    if (n <= 100)
        mas = new int[n];
    else
    {
        cout << "Количество элементов в массиве больше 100, 100 - максимальное значение. Объявляю массив на 100 элементов." << endl;
        mas = new int[100];
    }


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
