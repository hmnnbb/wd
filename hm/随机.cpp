#include <iostream>
#include <random>
using namespace std;
int main()
{
   random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10);
    int random_number = dis(gen);
    cout << random_number << endl;
    return 0;
}