// MyClass.cpp dosyas�

#include "MyClass.h" // s�n�f�n ba�l�k dosyas�n� dahil edin

MyClass::MyClass(int x) : m_x(x) {}

int MyClass::getX() const { return m_x; }

void MyClass::setX(int x) { m_x = x; }
