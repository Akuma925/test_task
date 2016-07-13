#include "iostream"
using namespace std;

int main ()
{
    for(int i=0; i<101; ++i)
    {
        if(i%3==0) cout<<"Fizz"<<endl;
        if(i%5==0) cout<<"Buzz"<<endl;
        if(i%3!=0 && i%5!=0)
            cout<<"\n";
        cout<<endl;

    }
}
