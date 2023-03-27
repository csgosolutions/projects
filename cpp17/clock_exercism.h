#ifndef CLOCK_CLOCK_EXERCISM_H
#define CLOCK_CLOCK_EXERCISM_H
#include <string>
namespace date_independent2 {
    class clock {
    public:
        clock(int hour, int minute);
        static clock at(int hour, int minute = 0);
        operator std::string() const;
        clock plus(int num);
        bool operator == (const clock& rhs) const;
        bool operator != (const clock& rhs) const;
    private:
        int hour;
        int minute;
    };
}
#endif //CLOCK_CLOCK_EXERCISM_H