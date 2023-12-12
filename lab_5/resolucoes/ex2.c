#include <stdio.h>

int main() {
    double L = 324;
    double alpha = 11.1*1e-6;
    double delta_T = 25 - 2.5;
    double delta_L = L * alpha * delta_T;
    double new_L = L + delta_L;
    printf("A altura da Torre Eiffel em agosto é de %.3f metros.", new_L);
    return 0;
}
