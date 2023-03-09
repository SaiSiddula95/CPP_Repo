#include <iostream>

using namespace std;

int main()
{
    double high_temp {100.7};
    double low_temp {37.7};
    double *temp_ptr {&high_temp};

    cout << *temp_ptr <<endl;

    cout << *temp_ptr <<endl;
    temp_ptr = &low_temp;

    cout << *temp_ptr << endl;

    // delete temp_ptr;

    cout << *temp_ptr << endl;
    return 0;
}