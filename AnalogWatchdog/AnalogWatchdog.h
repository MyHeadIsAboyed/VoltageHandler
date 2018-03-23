
class AnalogWatchdog {
public:
	AnalogWatchdog();
	int number;
	void UnderVoltage_ISR();
	void OverVoltage_ISR();
};