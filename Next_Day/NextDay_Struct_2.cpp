#include <cmath>
#include <iostream>

using namespace std;
struct Point {
  double x;
  double y;
};

double calculateDistance(const Point &point1, const Point &point2) {
  double distance =
      sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
  return distance;
}

int main() {
  Point point1, point2;

  cout << "Enter the coordinates of the first point (x y): ";
  cin >> point1.x >> point1.y;

  cout << "Enter the coordinates of the second point (x y): ";
  cin >> point2.x >> point2.y;

  double distance = calculateDistance(point1, point2);

  cout << "Distance between the two points: " << distance << endl;

  return 0;
}
