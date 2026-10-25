#include <iostream>
using namespace std;
int main()
{
    string major = "Computer Science";
    string minor = "Mathematics";
    int year = 2024;
    string msg = "I am a " + major + " major with a " + minor + " minor, graduating in " + to_string(year) + ".";
    cout << msg << endl;
    return 0;
}