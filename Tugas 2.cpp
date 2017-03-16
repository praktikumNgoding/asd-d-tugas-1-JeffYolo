#include <iostream>
#include <math.h>

using namespace std;

typedef struct comp{
int numbr;
char var;
};
comp a, b, c, d;
int num, den, o, p, q, r;
int main(){
 a.numbr = 4;
 b.numbr = 5;
 b.var = 'i';
 c.numbr = 7;
 d.numbr = 2;
 d.var = 'i';
 cout << "a = " << a.numbr << endl;
 cout << "b = " << b.numbr << b.var << endl;
 cout << "c = " << c.numbr << endl;
 cout << "d = " << d.numbr << d.var << endl;


    cout <<"\n\n=======================Penjumlahan=======================\n";
    cout << a.numbr + c.numbr << " + " << b.numbr + d.numbr << d.var << endl;


    cout <<"\n\n=======================Pengurangan=======================\n";
    cout << a.numbr - c.numbr << " + " << b.numbr - d.numbr << d.var << endl;

    cout <<"\n\n=======================Perkalian=======================\n";
    num = (a.numbr * c.numbr) - (b.numbr * d.numbr);
    den = (a.numbr * d.numbr) - (b.numbr * c.numbr);
    cout << num + den << d.var << endl;

    cout <<"\n\n=======================Pembagian=======================\n";
    o = ((a.numbr * c.numbr) + (b.numbr * d.numbr));
    p = (pow(a.numbr, 2) + pow(b.numbr, 2));
    q = ((b.numbr * c.numbr) - (a.numbr * d.numbr));
    r = (pow(c.numbr, 2) + pow(d.numbr, 2));
    cout << ((o / p) + (q / r)) << d.var << endl;
}
