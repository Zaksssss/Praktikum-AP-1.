#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
  int i, j, minIndex, temp;

  for (i = 0; i < n - 1; i++) {
    minIndex = i;

    for (j = i + 1; j < n; j++)
      if (arr[j] > arr[minIndex])
        minIndex = j;

    temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int data[13];
  int n = sizeof(data) / sizeof(data[0]);

  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++) {
    cin >> data[i];
  }

  selectionSort(data, n);
  cout << "Data descending after selection sort: \n";
  printArray(data, n);
  return 0;
}