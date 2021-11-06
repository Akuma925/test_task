#include "iostream"
using namespace std;

int main ()
{
    for(int i = 0; i < 101; ++i)
    {      
        string n = to_string(i), f = "Fizz", b="Buzz"; 
        if(i % 3 != 0)
            f = ""; 
        else 
            n = ""; 
        if(i % 5 != 0)
            b = "";
        else 
            n=""; 
        cout<<n + f + b + "\n"; 
    }
}
