#pragma once
#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H
#include <iostream>

namespace space_age {
	constexpr double earth_years_per_second = 1.0 / 31557600;
	constexpr double mercury_years_per_second =
		earth_years_per_second / 0.2408467;
	constexpr double venus_years_per_second =
		earth_years_per_second / 0.61519726;
	constexpr double mars_years_per_second =
		earth_years_per_second / 1.8808158;
	constexpr double jupiter_years_per_second =
		earth_years_per_second / 11.862615;
	constexpr double saturn_years_per_second =
		earth_years_per_second / 29.447498;
	constexpr double uranus_years_per_second =
		earth_years_per_second / 84.016846;
	constexpr double neptune_years_per_second =
		earth_years_per_second / 164.79132;
class space_age {
private:
	long long	sec;
public:
	explicit	space_age(long long sec);
	~space_age();
	void printSpaceTime();
	long long	seconds() const;
	double		on_earth() const;
	double		on_mercury() const;
	double		on_venus() const;
	double		on_mars() const;
	double		on_jupiter() const;
	double		on_saturn() const;
	double		on_uranus() const;
	double		on_neptune() const;
	};
}  // namespace space_age

#endif // SPACE_AGE_H
