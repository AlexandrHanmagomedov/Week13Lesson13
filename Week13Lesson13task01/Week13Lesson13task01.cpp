//1. Даны два массива : А[M] и B[N](M и N вводятся
//	с клавиатуры).Необходимо создать третий массив
//	минимально возможного размера, в котором нужно
//	собрать элементы массива A, которые не включаются
//	в массив B, без повторений.

#include <iostream>
using namespace std;
void vivod(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << *arr << "\t";
        arr++;
    }
}
int main() {
    srand(time(0));

    int size1;
    int size2;

    cout << "enter size of an first array  " << endl;
    cin >> size1;

    cout << "enter size of an second array  " << endl;
    cin >> size2;
    cout << endl;

    int* dar1 = new int[size1];
    int* pdar1 = &dar1[0];
    //////////////////////////////////
    for (int i = 0; i < size1; i++)
    {
        dar1[i] = rand() % 10 + 1;
    }
    vivod(dar1, size1);

    int* dar2 = new int[size2];
    int* pdar2 = &dar2[0];
    cout << "Massiv 1\n\n\n";
    //////////////////////////////////

    for (int i = 0; i < size2; i++)
    {
        dar2[i] = rand() % 10 + 1;
    }
    vivod(dar2, size2);
    cout << "Massiv 2\n\n\n";
    //////////////////////////////////
    int size3 = size1 + size2;
    int* dar3;
    dar3 = new int[size3];
    int* pdar3;
    pdar3 = &dar3[0];
    pdar3 = dar3;
    int tmp = 0;

    for (pdar1 = dar1; pdar1 < dar1 + size1; pdar1++) {
        for (pdar2 = dar2; pdar2 < dar2 + size2; pdar2++) {
            if (*pdar1 == *pdar2)
                tmp++;

        }
        if (tmp == 0) {

            *pdar3 = *pdar1;
            pdar3++;

        }
        size3 = size3 - tmp - 1;
        tmp = 0;

    }
    vivod(dar3, size3);
    cout << "\n do udaleniya  \n\n";

    for (int i = 0; i < size3 - 1; i++) {
        for (int j = i + 1; j < size3; j++) {
            if (dar3[i] == dar3[j])
            {
                for (int k = j; k < size3; k++)
                    pdar3[k] = pdar3[k + 1];
                size3--;
                j--;
                //size3--;
            }
        }
    }
    /////////////////////////////////////////////
    cout << endl;
    vivod(dar3, size3);
    cout << "\nMassiv 3 posle udaleniya povtoreniy\n\n\n";
    /////////////////////////////////////////////
    delete[] dar1;
    delete[] dar2;
    delete[] dar3;
}