#include <stdexcept>
class Vector1 {
private:
    double *elem;
    int sz;
public:
    Vector1(int s) {
        elem = new double[s];
        sz = s;
    }
    
    double& operator[](int i) {
        if(i < 0 || i > sz) {
            throw std::out_of_range("Vector::operator[]");
        }
        return elem[i];
    }

    int size() {
        return sz;
    }
};

void f(Vector1& v) {
    try {
        v[v.size()] = 7;
    } catch(std::out_of_range) {
        
    } catch(std::bad_alloc) {
        
    }
}

void fun() {
    const int i = 4;
    static_assert(i > 0, "Negative i's are not accepted");
}