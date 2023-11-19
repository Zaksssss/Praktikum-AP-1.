#include <iostream>

using namespace std;

int binary(int arr[], int low, int high, int key) {
  if (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      return binary(arr, mid + 1, high, key);
    } else {
      return binary(arr, low, mid - 1, key);
    }
  }

  return -1;
}

int main() {
  int n;
  cout << "Enter the number of array elements : ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; ++i) {
    cout << "Enter the array element for index-" << i << " : ";
    cin >> arr[i];
  }

  int key;
  cout << "Enter the element to be searched: ";
  cin >> key;

  int result = binary(arr, 0, n - 1, key);

  if (result != -1) {
    cout << "Element found at index: " << result << endl;
  } else {
    cout << "Elemen not found." << endl;
  }

  return 0;
}
