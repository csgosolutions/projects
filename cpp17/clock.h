#if !defined(CLOCK_H)
#define CLOCK_H
#include <string>
#include <cstdio>
namespace date_independent {
	class clock {
	public:
		static clock at(int hour, int minute);
		clock& plus(int minutes);


		operator std::string() const;
		bool operator == (const clock& rhs) const;
		bool operator != (const clock& rhs) const;
	private:
		clock(int hr, int min);// : hour(hr), minute(min) {}
		int hour, minute;
	};
}  // namespace date_independent
#endif // CLOCK_H