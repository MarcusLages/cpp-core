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

    int size() {
        return sz;
    }
};

int main() {
    Vector1 v(6);
}