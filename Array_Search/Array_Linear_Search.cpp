#include <iostream>

using namespace std;
int sentinelLinear(int arr[], int n, int key) {
    arr[n] = key;

    for (int i = 0; ; ++i) {
        if (arr[i] == key) {
            if (i < n) {
                return i;
            } else {
                return -1;
            }
        }
    }
}
int main() {
  int n;
  cout << "Enter the number of array elements: ";
  cin >> n;

  int arr[n+1];
  for (int i = 0; i < n; ++i) {
    cout << "Enter the array element for index-" << i << ":";
    cin >> arr[i];
  }

  int key;
  cout << "Enter the element to be searched: ";
  cin >> key;

  int result = -1;

  for (int i = 0; i < n; ++i) {
    if (arr[i] == key) {
      result = i;
      break;
    }
  }

  if (result != -1) {
    cout << "Element found at index: " << result << endl;
  } else {
    cout << "Element not found in the array." << endl;
  }

  return 0;
}
