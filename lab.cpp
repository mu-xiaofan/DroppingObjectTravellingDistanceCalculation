// cs102 lab 1
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	/*
	Create a constant for the gravitational acceleration.
	@\[9.8 m/s^{2} \]@
	*/

    const double g = 9.8;
    cout << "please enter the number of seconds the object traveled :";
    double seconds_it_takes;
    cin >> seconds_it_takes;
    cout << "The distance the object travelled in a given time is " << "d = gt^2/2 ,where d is distance, g is 9.8m/s^2 , t is time ,the distance the object travelled in "<< seconds_it_takes << " seconds is : " << "9.8*"<<seconds_it_takes<< "^2/2 = " << g*pow(seconds_it_takes,2)/2 << " meters" << endl;

	
	// @ \newpage @
	
	
	return 0;
}

