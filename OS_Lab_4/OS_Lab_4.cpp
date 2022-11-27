#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int main()
{
    auto start = system_clock::now();
    int a = 0, b = 3, c = 3;

    for (int i = 0; i < 100000000; i++)
    {
        a += 2 * b + c - i;
    }

    auto end = system_clock::now();
    auto elapsed = duration_cast<milliseconds>(end - start);

    cout << "Program finished execution within " << (float)elapsed.count() / 1000 << " seconds.\n";
}
