#pragma once
// MyClass.h dosyas�

class MyClass {
public:
	MyClass(int x);
	int getX() const;
	void setX(int x);

private:
	int m_x;
};