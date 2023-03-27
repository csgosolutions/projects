#include "autosar.h"

AutosarApplication::AutosarApplication()
{
	// Initialize data members
	m_version = "1.0.0";
	m_name = "My AUTOSAR Application";
	m_model = "Passat";
}
//AutosarApplication::AutosarApplication(std::string version, std::string name, std::string model) {
//	m_version = version;
//	m_name = name;
//	m_model = model;
//}
AutosarApplication::AutosarApplication(std::string version, std::string name, std::string model) :
	m_version(version), m_name(name), m_model(model) {}

//space_age::space_age(long long sec) : sec(sec) {}

// Destructor
AutosarApplication::~AutosarApplication()
{
	// Clean up memory, if necessary
}

// Public methods
void AutosarApplication::printInfo()
{
	printf("Application version: %s\n", m_version.c_str());
	printf("Application name: %s\n", m_name.c_str());
	printf("Application model: %s\n", m_model.c_str());
}
std::string AutosarApplication::getVersion() {
	return m_version;
}
std::string AutosarApplication::getName() {
	return m_name;
}
std::string AutosarApplication::getModel() {
	return m_model;
}
void AutosarApplication::setModel(std::string model) {
	m_model = model;
}
void AutosarApplication::setAppParams(std::string version, std::string name, std::string model) {
	m_version = version;
	m_name = name;
	m_model = model;
}

