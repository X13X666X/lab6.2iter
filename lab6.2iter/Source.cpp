#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

void GenerateArray(int* arr, int size, int start, int end) {
    for (int i = 0; i < size; i++) {
        arr[i] = start + rand() % (end - start + 1);
    }
}

void PrintArray(const int* arr, int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << " ]" << endl;
}

int SumOddIndices(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    srand((unsigned)time(0));
    const int size = 10; 
    const int rangeStart = -20, rangeEnd = 20; 
    int arr[size];

    GenerateArray(arr, size, rangeStart, rangeEnd);

    cout << "Original array:" << endl;
    PrintArray(arr, size);

    int sum = SumOddIndices(arr, size);

    cout << "Sum of indices of odd elements: " << sum << endl;

    return 0;
}