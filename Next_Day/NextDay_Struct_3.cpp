#include <iostream>
#include <vector>

using namespace std;

struct Item {
  string item_code;
  string item_name;
  int quantity;
  double unit_price;
};

Item inputItem() {
  Item item;
  cout << "Enter item code: ";
  cin >> item.item_code;
  cout << "Enter item name: ";
  cin >> item.item_name;
  cout << "Enter quantity: ";
  cin >> item.quantity;
  cout << "Enter unit price: ";
  cin >> item.unit_price;
  return item;
}

int main() {
  vector<Item> weeklyItems;
  for (int i = 0; i < 20; i++) {
    Item item = inputItem();
    weeklyItems.push_back(item);
  }

  double totalSalesPrice = 0;
  for (Item item : weeklyItems) {
    double totalPrice = item.quantity * item.unit_price;
    totalSalesPrice += totalPrice;
    cout << "Total price for " << item.item_name << " is: Rp. " << totalPrice
         << endl;
  }

  double profit = totalSalesPrice * 0.1;
  cout << "Total sales price is: Rp. " << totalSalesPrice << endl;
  cout << "The profit is: Rp. " << profit << endl;

  return 0;
}
