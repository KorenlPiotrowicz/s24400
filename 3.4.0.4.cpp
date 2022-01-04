// 3.4.0.4
#include <iostream>
#include <cmath>

void cone(double w, double p, double *o, double *pp) {
    *pp = M_PI * p * p;
    *o = ((*pp) * w)/3;
}

int main() {
    double w = 10;
    double p = 3.5;
    double o, pp;
    cone(w, p, &o, &pp);

    std::cout << "Objętość: " << o << "\nPole Podstawy: " << pp << "\n";

    return 0;
}
