#include <iostream>

int get_fibonacci_last_digit_fast(int n) {
    if (n <= 1) 
        return n;

    int previous = 0;
    int current = 1;

    for (int i = 0; i < n - 1 ; i++) {
        int tmp_previous = previous;
        previous = current;
        current = (current + tmp_previous) % 10;

    }

    return current;
}

int main() {
    int n;
    std::cin >> n;
    int c1 = get_fibonacci_last_digit_fast(n);
    std::cout << c1 << '\n';
}
