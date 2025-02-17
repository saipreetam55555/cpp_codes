#include <iostream>
using namespace std;

int main() {

    // dynamically allocate memory
    int* point_int = new int{45};
    float* point_float = new float{45.45f};

    cout << *point_int << endl;
    cout << *point_float << endl;

    // deallocate the memory
    // set pointers to nullptr
    delete point_int;

    delete point_float;
    
    return 0;
}
