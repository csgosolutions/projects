// MyClass.cpp dosyasý

#include "MyClass.h" // sýnýfýn baþlýk dosyasýný dahil edin

MyClass::MyClass(int x) : m_x(x) {}

int MyClass::getX() const { return m_x; }

void MyClass::setX(int x) { m_x = x; }
