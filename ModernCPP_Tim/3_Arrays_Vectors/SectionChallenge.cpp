#include <iostream>
#include <vector>

using namespace std;

void say_hello()
{
    cout << "Hello World" << endl;
}

int main()
{
    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector 2 has the following elements: " << vector2.at(0) << " and " << vector2.at(1) << endl;
    cout << "Vector 2 has the size: " << vector2.size() <<endl;

    vector <vector <int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << "Vector 2d has the folloing elements: " << vector2d.at(0).at(0) << vector2d.at(0).at(1) << " and " << vector2d.at(1).at(0) << vector2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    cout << "Vector 2d has the folloing elements: " << vector2d.at(0).at(0) << vector2d.at(0).at(1) << " and " << vector2d.at(1).at(0) << vector2d.at(1).at(1) << endl;

    say_hello();
    
    return 0;
}
