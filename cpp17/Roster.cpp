#include "Roster.h"

#include <algorithm>

void SchoolC20R::add(std::string name, int grade) {
	if (roster.count(grade) > 0)
		roster[grade].push_back(name);
	else
		roster[grade] = { name };
}

std::vector<std::string> SchoolC20R::grade(int grade) {
	if (roster.count(grade) == 0)
		return {};
	else
		return roster[grade];
}

std::map<int, std::vector<std::string>> SchoolC20R::school() {
	for (auto& [grade, students] : roster) {
		std::sort(students.begin(), students.end());
	}
	return roster;
}
