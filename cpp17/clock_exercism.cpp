#include <sstream>
#include <iomanip>
#include "clock_exercism.h"
using namespace std;
namespace date_independent2 {
    clock::clock(int hour, int minute) {
        this->hour = hour;
        this->minute = minute;
        while (this->minute >= 60 || this->minute < 0) {
            this->hour += (this->minute < 0) ? -1 : +1;
            this->minute += (this->minute < 0) ? +60 : -60;
        }
        while (this->hour >= 24 || this->hour < 0) {
            this->hour += (this->hour < 0) ? 24 : -24;
        }
    }
    clock clock::at(int hour, int minute) {
        return { hour, minute };
    }
    clock clock::plus(int minutes) {
        return { this->hour, this->minute + minutes };
    }
    clock::operator std::string() const {
        ostringstream str;
        str << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute;
        return str.str();
    }
    bool clock::operator == (const clock& rhs) const {
        return this->hour == rhs.hour && this->minute == rhs.minute;
    }
    bool clock::operator!=(const clock& rhs) const {
        return !(*this == rhs);
    }
}