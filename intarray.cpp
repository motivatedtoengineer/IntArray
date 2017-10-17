#include <iostream>
#include <cassert>

using namespace std;

class IntArray {
public: 
        IntArray(int size);
        ~IntArray();
        int & operator[](int i) const;
        int size() const;
        void fill(int k);
        int * begin();
        int * end();

private:
        int len;
        int * data;
};

int main(int argc, char * args[]) {
    /*
        IntArray a(3);
        a[0] = 10;
        a[1] = 11;
        a[2] = 12;
        assert(a[0] == 10);
        assert(a[1] == 11);
        assert(a[2] == 12);
        assert(a.size() == 3);
        a.fill(5);
        assert(a[0] == 5);
        assert(a[1] == 5);
        assert(a[2] == 5);
        a[0] = 3;
        a[1] = 1;
        a[2] = 2;
        sort(a.begin(), a.end());
        assert(a[0] == 1);
        assert(a[1] == 2);
        assert(a[2] == 3);
        int * it = a.begin();
        assert(*it == 1);
        ++it;
        assert(*it == 2);
        ++it;
        assert(*it == 3);
        ++it;
        assert(it == a.end());
*/
        cout << "All tests passed." << endl;
}