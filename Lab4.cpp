#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int arr[12] = { 3, 5, 7, 2, 8, 10, 4, 6, 9, 1, 12, 15 };
    double sum = 0;

    for (int i = 0; i < 12; i++) {
        sum += arr[i];
    }

    double average = sum / 12;

    cout << "Середнє арифметичне елементів масиву: " << average << endl;

    return 0;
}
