#include <iostream>
#include <cmath>

void print_square(const double x) {
    const auto y = x;
    // const auto y;
    // const auto y {x};
    std::cout << "Value of x is " << y << std::endl;
}

int count_arr(char* ptr_arr) {
    if(ptr_arr == nullptr) return 0;

    int count = 0;
    
    for(char* ptr_curr_char = ptr_arr; *ptr_curr_char != '\0'; ptr_curr_char++) {
        count++;
    }

    return count;
}

struct Vector1{
    int size;
    double *elem;
};

void fun1(Vector1 v1, Vector1 &v2, Vector1 *v3) {
    int i1 = v1.size;
    int i2 = v2.size;
    int i3 = v3->size;
}

int main() {
    const double a = 3;
    const double b = 4;
    constexpr auto w = std::max(5, 6);

    // Reference vs pointer
    const int i = 3;
    const int* ptr_i = &i;
    const int& ref_i = i;
    ptr_i = nullptr;

    std::cout<<"Hello world" << std::endl;
    print_square(50.0f);

    char char_arr[] = {'c','u','z','a','o','\0'};

    std::cout<<"The array has "<<count_arr(char_arr)<<" chars";
}