#include <iostream>

class Vector1 {
private:
    double *elem;
    int sz;
public:
    Vector1(int s) {
        elem = new double[s];
        sz = s;
    }
    
    double & operator[](int i) {
        return elem[i];
    }

    int size() const {
        return sz;
    }
};

class Container {
public:
    virtual ~Container() {}
    virtual double& operator[](int) = 0;    // Purely virtual, cannot call this
                                            // function from Container
    virtual int size() const = 0;
};

class Vector_container : public Container {
private:
    Vector1 v;
public:
    Vector_container(int size) : v(size) {}
    ~Vector_container() {}

    double& operator[](int i) {
        return v[i];
    }

    int size() const {
        return v.size();
    }
};

void use(Container& container) {
    const int size = container.size();

    for(int i = 0; i < size; ++i) {
        std::cout << container[i] << std::endl;
    }
}