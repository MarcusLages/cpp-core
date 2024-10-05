#include <iostream>
enum class Color { red, green, blue };
enum class Traffic_light { green, yellow, red };

std::ostream& operator<<(std::ostream& os, const Color& c) {
    switch(c) {
        case Color::red:
            os << "Red";
            return os; 
        case Color::green:
            os << "Green";
            return os; 
        case Color::blue:
            os << "Blue";
            return os;
        default:
            return os; 
    }
}

Color& operator++(Color& c) {
    switch(c) {
        case Color::red:
            c = Color::green;
            return c; 
        case Color::green:
            c = Color::blue;
            return c; 
        case Color::blue:
            c = Color::red;
            return c;
        default:
            return c;
    }
}

int main() {
    Color col = Color::red;
    Traffic_light trf = Traffic_light::red;

    ++++++++++col;

    std::cout << col;
}

// int i = Color::blue;
// Color c = 2;