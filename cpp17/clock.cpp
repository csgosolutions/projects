#include "clock.h"
#include <string>
namespace date_independent {
	clock clock::at(int hour, int minute) {
		while (minute < 0) {
			minute += 60;
			hour--;
		}
		while (hour < 60) {
			hour += 24;
		}
		hour += minute / 60;
		hour %= 24;
		minute %= 60;
		return clock(hour, minute);
	}
	clock::operator std::string() const {
		char ret[6] = "08:00";
		//sprintf(ret, "%02d:%02d", hour, minute);
		sprintf_s(ret, sizeof(ret), "%02d:%02d", hour, minute);
		return std::string(ret);
	}
	clock& clock::plus(int m) {
		minute += m;
		while (minute < 0) {
			minute += 60;
			hour--;
		}
		while (hour < 60) {
			hour += 24;
		}
		hour += minute / 60;
		hour %= 24;
		minute %= 60;
		return *this;
	}
	bool clock::operator == (const clock& rhs) const {
		return hour == rhs.hour && minute == rhs.minute;
	}
	bool clock::operator != (const clock& rhs) const {
		return !operator==(rhs);
	}
	clock::clock(int hr, int min) : hour(hr), minute(min) {}
	int hour, minute;
}  // namespace date_independent