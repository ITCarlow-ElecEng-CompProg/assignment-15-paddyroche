/**<
Patrick Roche
Exercise 15
Sine Wave Calculations */

/**< Preprocessor Directives */
#include <iostream>
#include <tgmath.h>
#define PI 3.14159265

using namespace std;

class sinewave
{
    /**< Private means that these variables are only accesable by this class */
	private:

		double A;
		double f;
		double phi;
		double dcOff;
		double t;
		double Vinst;
		double T;
		double Vrms;

    /**< Public means that these functions can be called anywhere eg; inside the main function */
	public:

		/**< overloaded constructor to initialize variables */
		sinewave(void)
		{
			A = 1;
			f = 1000;
			phi = 0;
			dcOff = 0;
		}

		/**< Function which gets the user to input values for 5 variables */
		void initialize(void)
		{
			cout << "Enter value for Amplitude: " << endl;
			cin >> A;
			cout << "Enter value for Frequency: " << endl;
			cin >> f;
			cout << "Enter value for phi: " << endl;
			cin >> phi;
			cout << "Enter value for DCOffset: " << endl;
			cin >> dcOff;
			cout << "Enter value for Time: " << endl;
			cin >> t;

		}

		/**< Function which calculates Vinst using all user defined variables */
		 void instVoltage(void)
		 {
		     Vinst = A*sin(2*PI*f*t + phi) + dcOff;

             cout << "Vinst is: " << Vinst << "V" << endl;
		 }

         /**< Function which Vinst using constructed variables and user defind 'time' */
		 void instVoltage2(double time)
		 {
		     Vinst = A*sin(2*PI*f*time + phi) + dcOff;

             cout << "Vinst is: " << Vinst << "V" << endl;
		 }

		 void Period (void)
		 {
		     T = 1/f;

		     cout << "Period is: " << T << "s" << endl;
		 }

		 void rmsVoltage (void)
		 {
		     Vrms = A/sqrt(2);

		     cout << "Vrms: " << Vrms << "V" << endl;
		 }


};


/**< main() function */
int main(void)
{
    /**< Defines variables sw1, sw2 as type "sinewave" , which is a predefined class */
    sinewave sw1, sw2;

    double t;

    /**< No "initialize" function is called, so constructor values are used */
    cout << "Preset variables as per question: " << endl;
    cout << "Enter a value for t: " << endl;
    cin >> t;
    /**< Call functions inside the class for variable sw1 */
    sw1.instVoltage2(t);
    sw1.Period();
    sw1.rmsVoltage();

    /**< Initialise function is called, so all values are user defined (constructor values not used) for variable sw2 */
    cout << "Now, enter all variables required: " << endl;
    sw2.initialize();
    sw2.instVoltage();
    sw2.Period();
    sw2.rmsVoltage();


	return 0;
}
