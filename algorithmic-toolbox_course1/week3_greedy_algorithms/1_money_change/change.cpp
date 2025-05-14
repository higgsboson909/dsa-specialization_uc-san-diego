#include <iostream>

int get_change(int amount) {

  int arr[3] = {10, 5, 1};
  int i = 0;
  while (amount >= 0 && amount >= arr[0]) { 
    i++;

    amount = amount - ( arr[0]);
  }

  while (amount >= 0 && amount >= arr[1]) { 
    i++;

  amount = amount - ( arr[1]);
  }

  while (amount >= 0 && amount >= arr[2]) { 
    i++;

  amount = amount - ( arr[2]);
  }


  //write your code here
  return i;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}


// 10, 5, 1
// pick the largest if it is less than 
