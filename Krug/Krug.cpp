#include <iostream>
#include <cmath>

using namespace std;

double calculateRingArea(double innerRadius, double outerRadius) {
    const double PI = std::acos(-1.0);
    double innerArea = PI * innerRadius * innerRadius;
    double outerArea = PI * outerRadius * outerRadius;
    double ringArea = outerArea - innerArea;
    return ringArea;
}

int main() {
    setlocale(LC_ALL, "Rus");
    double innerRadius, outerRadius;
    cout << "Введите внутренний радиус кольца: ";
    cin >> innerRadius;
    cout << "Введите внешний радиус кольца: ";
    cin >> outerRadius;

    double ringArea = calculateRingArea(innerRadius, outerRadius);
    cout << "Площадь кольца: " << ringArea << endl;

    return 0;
}
