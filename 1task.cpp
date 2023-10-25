#include <iostream>
#include <cmath>

int main() {
    double x[5];
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter x" << i + 1 << ": ";
        std::cin >> x[i];
    }
    for (int i = 0; i < 5; i++) {
        double y = pow(sin(x[i]), 5) + abs(5 * x[i] - 1.5);
        std::cout << "Answer for " << x[i] << " is: " << y << "\n";
    }

    return 0;
}

