#pragma once
// MyClass.h dosyasý

class MyClass {
public:
	MyClass(int x);
	int getX() const;
	void setX(int x);

private:
	int m_x;
};