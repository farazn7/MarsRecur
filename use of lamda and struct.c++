#include <iostream>

using namespace std;

struct custom 
{
    string name;
    int age;
};

int main() 
{
    [data = custom{"Mars", 2024-1964}]
    {
        cout << "Name: " << data.name << endl;
        cout << "Age: " << data.age << endl;
    }();
    return 0;
}
