#include <iostream>
#include <list>
#include <thread>
#include <map>
#include <chrono>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <memory>
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <limits> 
#include <unordered_set>
#include <numeric>
#include <stdexcept>

using namespace std;

class SchoolC98Opi
{
private:
	map<int, vector<string> > roster;
public:
	void add(string name, int grade)
	{
		if (roster.count(grade) > 0)
			roster[grade].push_back(name);
		else
			roster[grade] = vector<string>(1, name); //roster[grade] = { name }; uniform initialization syntax
	}
	vector<string> grade(int grade)
	{
		if (roster.count(grade) == 0)
			return vector<string>();
		else
			return roster[grade];
	}
	map<int, vector<string> > school()
	{
		for (map<int, vector<string> >::iterator it = roster.begin(); it != roster.end(); ++it)
			sort(it->second.begin(), it->second.end());
		return roster;
	}
};

void printSchoolC98Opi() {
	SchoolC98Opi school;
	school.add("Anna", 1);
	school.add("Barb", 1);
	school.add("Charlie", 1);
	school.add("Alex9", 2);
	school.add("Peter9", 2);
	school.add("Zoe9", 2);
	school.add("Jim", 5);
	vector<string> grade2C98 = school.grade(2);
	cout << "Students in grade 2: ";
	for (int i = 0; i < grade2C98.size(); i++)
		cout << grade2C98[i] << " ";
	cout << endl;
	map<int, vector<string> > rosterC98 = school.school();
	cout << "All students: " << endl;
	for (map<int, vector<string> >::iterator it = rosterC98.begin(); it != rosterC98.end(); ++it) {
		cout << "Grade " << it->first << ": ";
		for (int i = 0; i < it->second.size(); i++)
			cout << it->second[i] << " ";
		cout << endl;
	}
}

class SchoolC14Opi
{
	map<int, vector<string>> roster;
public:
	void add(string name, int grade)
	{
		if (roster.count(grade) > 0)
		{
			roster[grade].push_back(name);
		}
		else
		{
			roster[grade] = { name };
		}
	}
	vector<string> grade(int grade)
	{
		if (roster.count(grade) == 0)
			return {};
		else
			return roster[grade];
	}
	map<int, vector<string>> school()
	{
		for (auto it = roster.begin(); it != roster.end(); it++) {//c++14 version
			sort(it->second.begin(), it->second.end());
		}
		return roster;
	}
};

void printSchoolC14Opi() {
	SchoolC14Opi schoolC14;
	schoolC14.add("Anna Opi", 1);
	schoolC14.add("Barb Opi", 1);
	schoolC14.add("Charlie", 1);
	schoolC14.add("Alex Opi", 2);
	schoolC14.add("Peter Sampras Reyiz", 2);
	schoolC14.add("Armbian Peter", 2);
	schoolC14.add("Zoe", 2);
	schoolC14.add("Jim", 5);
	vector<string> grade2 = schoolC14.grade(2);
	cout << "Students in grade 2: ";
	for (string student : grade2) {
		cout << student << " ";
	}
	cout << endl;
	map<int, vector<string>> roster = schoolC14.school();
	cout << "All students: " << endl;
	//for (auto& [grade, students] : roster) { //C++17's "structured binding declarations" feature
	//	cout << "Grade " << grade << ": ";
	//	for (string student : students) {
	//		cout << student << " ";
	//	}
	//	cout << endl;
	//}
	//for (auto it = roster.begin(); it != roster.end(); ++it) //structured binding equivalent
	//{
	//	int grade = it->first;
	//	std::vector<std::string> students = it->second;
	//	std::cout << "Grade " << grade << ": ";
	//	for (const std::string& student : students)
	//	{
	//		std::cout << student << " ";
	//	}
	//	std::cout << std::endl;
	//}
	for (auto it = roster.begin(); it != roster.end(); it++) { //c++14 version
		cout << "Grade " << it->first << ": ";
		for (int i = 0; i < it->second.size(); i++) {
			cout << it->second[i] << " ";
		}
		cout << endl;
	}
}

int main2()
{
	printSchoolC14Opi();
	//printSchoolC98Opi();

	return 0;
	//system("pause>nul");
}