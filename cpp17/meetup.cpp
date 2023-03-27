#include "meetup.h"

namespace meetup {
    scheduler::scheduler(year_type year, month_type month) :
        year_{ year },
        month_{ month }
    {}

    date_type scheduler::teenth_day(weekday_type weekday) const {
        std::tm t;
        t.tm_year = year_ - 1900;
        t.tm_mon = month_ - 1;
        t.tm_mday = 13;
        mktime(&t);
        //int i = 0;
        for (int i = 0; i < 7; ++i) {
            if (t.tm_wday == weekday) {
                break;
            }
            t.tm_mday += 1;
            mktime(&t);
        }
        return date_type{ year_, month_, t.tm_mday };
    };
}
