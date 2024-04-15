#include <iostream>
using namespace std;
void copyArrayReverse(int* source, int* destination, int size) {

    int* sourcePtr = source + size - 1;


    int* destPtr = destination;


    for (int i = 0; i < size; ++i) {
        *destPtr = *sourcePtr;
        sourcePtr--;
        destPtr++; 
    }
}

int main() {
    const int SIZE = 5;
    int sourceArray[SIZE] = { 1, 2, 3, 4, 5 };
    int destinationArray[SIZE];


    cout << "Initial array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << sourceArray[i] << " ";
    }
    cout << endl;


    copyArrayReverse(sourceArray, destinationArray, SIZE);
    cout << "The array after copying in reverse order: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << destinationArray[i] << " ";
    }
    cout << endl;

}

