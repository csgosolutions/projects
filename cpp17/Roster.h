#ifndef ROSTER_H
#define ROSTER_H

#include <map>
#include <string>
#include <vector>

class SchoolC20R {
	std::map <int, std::vector<std::string>> roster;
public:
	void add(std::string name, int grade);
	std::vector<std::string> grade(int grade);
	std::map<int, std::vector<std::string>> school();
};

#endif
