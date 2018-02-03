/*
 * George Strauch
 * unit conversion between Celsius and Fahrenheit
 *
 * feburay 3 2018
 */

#include <iostream>
using namespace std;

int main() {
    char unit;
    double temp;
    cout << "in what unit is the temperature already in? [C or F]" << endl;
    cin >> unit;

    // if the user enters an unknown unit other than mile of km, program quits
    if((unit != 'c')&&(unit != 'f')){
        cout << "error, wrong unit";
        return 0;
    }

    cout << "what it the temperature?" << endl;
    cin >> temp;


    if(unit == 'f'){
        cout << (temp -32)/1.8 << " C";
    }
    else{   //unit can only be 'c' at this point
        cout <<temp*1.8 + 32 << " F";
    }

    return 0;
}