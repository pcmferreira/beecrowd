#include <iostream>

int main() {
    int a[] = {100, 50, 20, 10, 5, 2, 1};
    int n; std::cin >> n;
    std::cout << n << '\n';
    for (int i = 0; i < 7; ++i) {
        std::cout << n / a[i] << " nota(s) de R$ " << a[i] << ",00\n";
        n %= a[i];
    }
    return 0;
}
