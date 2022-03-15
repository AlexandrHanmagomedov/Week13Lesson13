//4. Дан массив : А[M](M вводится с клавиатуры).
//Необходимо удалить из массива четные или нечетные 
//значения.Пользователь вводит данные в массив, а также
//с помощью меню решает, что нужно удалить
#include <iostream>

using namespace std;

void vivod(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << *arr << "\t";
        arr++;
    }
}

int main()
{
    int size;
    cout << "enter size of an array  " << endl;
    cin >> size;
    int* darr = new int[size];

    cout << "enter values of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> darr[i];
    }
    vivod(darr, size);
    cout << endl;
    int n;
    cout << "1 - Del even values" << endl;
    cout << "2 - Del uneven values" << endl;
    cin >> n;
    cout << endl;
    if (n == 1) {
        for (int i = 0; i < size; i++)
        {
            if (darr[i] % 2 == 0)
            {
                for (int j = i; j < size - 1; j++)
                {
                    darr[j] = darr[j + 1];
                }
                size--;
                i--;
            }
        }
    }
    if (n == 2) {

        for (int i = 0; i < size; i++)
        {
            if (!(darr[i] % 2 == 0))
            {
                for (int j = i; j < size - 1; j++)
                {
                    darr[j] = darr[j + 1];
                }
                size--;
                i--;
            }
        }
    }


    vivod(darr, size);
    delete[] darr;
}