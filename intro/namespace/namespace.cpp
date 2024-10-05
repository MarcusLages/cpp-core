#include <iostream>

namespace My_code {
    class Complex {};
    Complex sqrt(Complex);
    int main();
} // namespace My_code


int My_code::main() {
    using namespace std;
    // Accessing cout and endl from std::
    cout << "Whooooops" << endl;
}

int main() {
    My_code::main();
}