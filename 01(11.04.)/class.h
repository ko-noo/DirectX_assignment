#pragma once
#define print cout

class TV
{
private:
	int volume;

public:
	void setvol(int a) {
		volume = a;
	}
	int usevol() {
		return volume;
	}

	int channel;
};
