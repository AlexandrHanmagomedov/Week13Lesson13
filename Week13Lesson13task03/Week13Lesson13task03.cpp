/*
3. Даны два массива: А[M] и B[N] (M и N вводятся
с  клавиатуры). Необходимо создать третий массив
минимально возможного размера, в котором нужно
собрать элементы обоих массивов.
*/
#include <iostream>
using namespace std;
void vivod(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main() {
    srand(time(0));
    int size1, size2, size3;;
    int* dar1, * dar2, * dar3;//dinamic array
    cout << "enter size of an first array  " << endl;
    cin >> size1;
    cout << "enter size of an second array  " << endl;
    cin >> size2;
    //////////////////////////////////
    dar1 = new int[size1];
    for (int i = 0; i < size1; i++)
    {
        dar1[i] = rand() % 10;
    }
    vivod(dar1, size1);
    cout << "Massiv 1\n\n\n";
    //////////////////////////////////
    dar2 = new int[size2];
    for (int i = 0; i < size2; i++)
    {
        dar2[i] = rand() % 10;
    }
    vivod(dar2, size2);
    cout << "Massiv 2\n\n\n";
    //////////////////////////////////
    size3 = size1 + size2;
    dar3 = new int[size3];

    for (int i = 0; i < size3; i++)
    {
        if (i < size1) {
            *(dar3 + i) = *(dar1 + i);
        }
        else {
            *(dar3 + i) = *(dar2 - size1 + i);
        }
    }
    cout << endl;
    vivod(dar3, size3);
    cout << "Massiv 3\n\n\n";
    /////////////////////////////////////////////

    delete[] dar1;
    delete[] dar2;
    delete[] dar3;

}