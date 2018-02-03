/*
 * George Strauch
 * unit conversion between miles and km
 * feburay 3 2018
 */




#include <iostream>
using namespace std;

//conversion factor from mile to km
const double factor = .62;

int main() {
    char unit;
    double length;
    cout << "what is your given distance? [k of m]" << endl;
    cin >> unit;

    // if the user enters an unknown unit other than mile of km, program quits
    if((unit != 'm')&&(unit != 'k')){
        cout << "error, wrong unit";
        return 0;
    }

    cout << "what it the distance? [int]" << endl;
    cin >> length;


    if(unit == 'k'){
        cout << length*factor << " miles";
    }
    else{   //unit can only be 'm' at this point
        cout << length/factor << " km";
    }

    return 0;
}