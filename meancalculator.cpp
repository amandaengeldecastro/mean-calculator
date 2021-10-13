#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()
{
    float a, b, c, am, hm, gm; 

    cout << "Please, insert three positives values: " << endl;
    cin >> a >> b >> c;

    if (a<0 || b<0 || c<0)
    {
        cout << "A negative number won't be acept. Please, try again!" << endl;
        return 0; 
    }

    am = (a+b+c)/3; 
    gm = pow ((a+b+c), 1/3. );
    hm = (3/((1/a)+(1/b)+(1/c)));
    

    cout << "The results will be displayer with only two decimal places: " << endl; 
    cout << fixed << setprecision(2);
    cout << "1. Arithmetic mean: " << am << endl; 
    cout << "2. Geometric mean: " << gm  << endl;
    cout << "3. Harmonic mean: " << hm << endl;

}