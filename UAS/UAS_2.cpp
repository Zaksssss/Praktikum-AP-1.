#include <iostream>

using namespace std;
struct child {
  string name[12];
  int date[12];
  int month[12];
  int year[12];
};

int main() {
  child children;
  int count;
  cout << "Enter the number of children: ";
  cin >> count;
  for (int i = 0; i < count; i++) {
    cout << "\tEnter the name of child " << i + 1 << " : ";
    cin >> children.name[i];

    cout << "\tEnter the birth date of child " << i + 1 << " : ";
    cin >> children.date[i];

    cout << "\tEnter the birth month of child " << i + 1 << " : ";
    cin >> children.month[i];

    cout << "\tEnter the birth year of child " << i + 1 << " : ";
    cin >> children.year[i];
  }
  cout << "\n\n\n";
  cout << "Child data that has been entered: \n";
  int oldestIndex = 0;
  for (int i = 1; i < count; i++) {
    if (children.year[i] < children.year[oldestIndex]) {
      oldestIndex = i;
    } else if (children.year[i] == children.year[oldestIndex]) {
      if (children.month[i] < children.month[oldestIndex]) {
        oldestIndex = i;
      } else if (children.month[i] == children.month[oldestIndex]) {
        if (children.date[i] < children.date[oldestIndex]) {
          oldestIndex = i;
        }
      }
    }
  }
  cout << "The oldest child is: " << children.name[oldestIndex] << endl;
  cout << "Birth date: " << children.date[oldestIndex] << "/"
       << children.month[oldestIndex] << "/" << children.year[oldestIndex]
       << endl;
}