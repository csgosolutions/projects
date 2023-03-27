#include "space.h"
#include <iostream>
namespace space_age {
	space_age::space_age(long long sec) : sec(sec) {}
	space_age::~space_age() {};
	void space_age::printSpaceTime() {
		std::cout << "seconds():  " << space_age::seconds() << std::endl;
		std::cout << "on_earth():  " << space_age::on_earth() << std::endl;
		std::cout << "on_mercury():  " << space_age::on_mercury() << std::endl;
		std::cout << "on_venus():  " << space_age::on_venus() << std::endl;
		std::cout << "on_mars():  " << space_age::on_mars() << std::endl;
		std::cout << "on_jupiter():  " << space_age::on_jupiter() << std::endl;
		std::cout << "on_saturn():  " << space_age::on_saturn() << std::endl;
		std::cout << "on_uranus():  " << space_age::on_uranus() << std::endl;
		std::cout << "on_neptune():  " << space_age::on_neptune() << std::endl;
	};
	long long	space_age::seconds() const {
		return (sec);
	}
	double	space_age::on_earth() const {
		return (sec * earth_years_per_second);
	}
	double	space_age::on_mercury() const {
		return (sec * mercury_years_per_second);
	}
	double	space_age::on_venus() const {
		return (sec * venus_years_per_second);
	}
	double	space_age::on_mars() const {
		return (sec * mars_years_per_second);
	}
	double	space_age::on_jupiter() const {
		return (sec * jupiter_years_per_second);
	}
	double	space_age::on_saturn() const {
		return (sec * saturn_years_per_second);
	}
	double	space_age::on_uranus() const {
		return (sec * uranus_years_per_second);
	}
	double	space_age::on_neptune() const {
		return (sec * neptune_years_per_second);
	}

}  // namespace space_age
