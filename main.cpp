
#include "VoltageHandler/VoltageHandler.h"
#include "AnalogWatchdog/AnalogWatchdog.h"
#include "Singleton/Singleton.h"
#include <conio.h>
#include <iostream>

using namespace std;

int main() {
	int counter = 0;

	cout << "type an interrupt in any time" << endl;

	while (1) {

        if (kbhit())
        {
            char c = getch();
            if (c == 'o') {
           		Singleton<AnalogWatchdog>::instance()->OverVoltage_ISR();
            } 
            else if ( c == 'u') {
				Singleton<AnalogWatchdog>::instance()->OverVoltage_ISR();
        	}
        }
		if ((counter++)%10000 == 0) {
			Singleton<VoltageHandler>::instance()->MainFunction();
		}
		
	}

	return 0;
}