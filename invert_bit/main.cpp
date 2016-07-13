#include "iostream"

using namespace std;
template < typename T >
 inline T highbit(T& t)
 {
    return t = (((T)(-1)) >> 1) + 1;
 }

 template < typename T >
 std::ostream& bin(T& value, std::ostream &o)
 {
    for ( T bit = highbit(bit); bit; bit >>= 1 )
    {
      o << ( ( value & bit ) ? '1' : '0' );
    }
    return o;
 }
unsigned long invertBit( unsigned long ulWhere, unsigned uWhichBit)
{
    return ulWhere ^( 1 << uWhichBit );
}
int main()
{
    unsigned long a =1234567;

    cout<<"bit ";

    cout<<endl;

        bin(a, std::cout);
        cout<<endl;
        unsigned long b = invertBit(a,7);
        bin(b, cout);

}
