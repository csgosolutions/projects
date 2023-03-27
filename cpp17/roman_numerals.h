#if !defined(ROMAN_NUMERALS_H)
#define ROMAN_NUMERALS_H
#include <iostream>
#include <string>
#include <map>
using namespace std;
namespace roman_numerals {
	std::string convert(int num) {
		std::string roman = "";
		std::map<int, std::string> romanMap = {
		{1000, "M"},
		{900, "CM"},
		{500, "D"},
		{400, "CD"},
		{100, "C"},
		{90, "XC"},
		{50, "L"},
		{40, "XL"},
		{10, "X"},
		{9, "IX"},
		{5, "V"},
		{4, "IV"},
		{1, "I"}
		};
		for (auto it = romanMap.rbegin(); it != romanMap.rend(); it++) {
			while (num >= it->first) {
				roman += it->second;
				num -= it->first;
			}
		}
		return roman;
	}

}  // namespace roman_numerals

#endif // ROMAN_NUMERALS_H