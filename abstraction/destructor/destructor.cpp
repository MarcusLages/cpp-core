#include <initializer_list>
#include <algorithm>    // For std::copy

class Vector1 {
private:
    double *elem;
    int sz;
public:
    // C++-like constructor
    Vector1(int s) :
        elem {new double[s]},
        sz {s}
    {}

    Vector1(std::initializer_list<double> init_list) :
        elem {new double[init_list.size()]},
        sz {init_list.size()}
    {
        std::copy(init_list.begin(),init_list.end(), elem);
    }
    
    double & operator[](int i) {
        return elem[i];
    }

    int size() {
        return sz;
    }

    ~Vector1() {
        delete[] elem;
    }
};