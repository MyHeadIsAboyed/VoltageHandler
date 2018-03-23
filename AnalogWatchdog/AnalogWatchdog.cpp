#include "AnalogWatchdog.h"
#include <iostream>

using namespace std;


AnalogWatchdog::AnalogWatchdog() {
	cout << "new AnalogWatchdog constructed" << endl;
}

void AnalogWatchdog::OverVoltage_ISR() {

}


void AnalogWatchdog::UnderVoltage_ISR() {
	
}