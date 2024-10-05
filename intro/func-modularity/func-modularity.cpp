class Vector1 {
private:
    double *elem;
    int sz;
public:
    Vector1(int s) {
        elem = new double[s];
        sz = s;
    }
    
    double& operator[](int i);

    int size() {
        return sz;
    }
};

double& Vector1::operator[](int i) {
    return elem[i];
}