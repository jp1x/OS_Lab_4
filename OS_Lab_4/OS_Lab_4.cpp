#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

int main()
{
    setlocale(LC_ALL, "Rus");
    auto start = system_clock::now();
    unsigned int a = 0;
    int b = 2, c = 3;

    for (int i = 0; i < 100000000; i++)
    {
        a += 2 * b + c - i;
    }

    auto end = system_clock::now();
    auto elapsed = duration_cast<milliseconds>(end - start);

    cout << a << "\n";
    cout << "Программа отработала за " << (float)elapsed.count() / 1000 << " секунд.\n";
}
