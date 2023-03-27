#pragma once
#include <ctime>
#include <chrono>

namespace meetup {
    using year_type = int;
    using month_type = int;
    using day_type = int;
    using weekday_type = int;
    struct date_type {
        year_type year;
        month_type month;
        day_type day;
    };

    class scheduler {
    public:
        scheduler(year_type year, month_type month);
        date_type teenth_day(weekday_type weekday) const;

    private:
        year_type year_;
        month_type month_;
    };
}
