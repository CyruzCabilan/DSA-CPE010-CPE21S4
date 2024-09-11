#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
    
    int temp = a;
    a = b;
    b = temp;
    
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
    
    return 0;
}

#include <iostream>

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

int main() {
    double kelvin;
    
    std::cout << "Enter temperature in Kelvin: ";
    std::cin >> kelvin;
    
    double fahrenheit = kelvinToFahrenheit(kelvin);
    
    std::cout << kelvin << " K is equal to " << fahrenheit << " F" << std::endl;
    
    return 0;
}

#include <iostream>
#include <cmath> // For sqrt() and pow()

double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    
    std::cout << "Enter coordinates of first point (x1 y1): ";
    std::cin >> x1 >> y1;
    
    std::cout << "Enter coordinates of second point (x2 y2): ";
    std::cin >> x2 >> y2;
    
    double distance = calculateDistance(x1, y1, x2, y2);
    
    std::cout << "The distance between the points is: " << distance << std::endl;
    
    return 0;
}

#include <iostream>
#include <cmath>

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateTrianglePerimeter(double a, double b, double c) {
    return a + b + c;
}

std::string determineTriangleType(double a, double b, double c) {
    double angles[3];
    
    angles[0] = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)) * 180 / M_PI;
    angles[1] = acos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a * c)) * 180 / M_PI;
    angles[2] = 180 - angles[0] - angles[1];
    
    bool acute = angles[0] < 90 && angles[1] < 90 && angles[2] < 90;
    bool obtuse = angles[0] > 90 || angles[1] > 90 || angles[2] > 90;
    
    if (acute) return "Acute-angled";
    if (obtuse) return "Obtuse-angled";
    return "Right-angled or Other";
}

int main() {
    int choice;
    double temperature, result;
    
    std::cout << "Choose conversion:" << std::endl;
    std::cout << "1. Kelvin to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Kelvin" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;
    
    if(std::cin.fail() || (choice != 1 && choice != 2)) {
        std::cerr << "Invalid choice!" << std::endl;
        return 1;
    }
    
    std::cout << "Enter the temperature: ";
    std::cin >> temperature;
    
    if(choice == 1) {
        result = kelvinToFahrenheit(temperature);
        std::cout << temperature << " K is equal to " << result << " F" << std::endl;
    } else if(choice == 2) {
        result = fahrenheitToKelvin(temperature);
        std::cout << temperature << " F is equal to " << result << " K" << std::endl;
    }
    
    double a, b, c, base, height;
    
    std::cout << "Enter the lengths of the three sides of a triangle (a b c): ";
    std::cin >> a >> b >> c;
    
    std::cout << "Enter the base and height of the triangle (base height): ";
    std::cin >> base >> height;
    
    double area = calculateTriangleArea(base, height);
    double perimeter = calculateTrianglePerimeter(a, b, c);
    std::string type = determineTriangleType(a, b, c);
    
    std::cout << "The area of the triangle is: " << area << std::endl;
    std::cout << "The perimeter of the triangle is: " << perimeter << std::endl;
    std::cout << "The triangle is: " << type << std::endl;
    
    return 0;
}
