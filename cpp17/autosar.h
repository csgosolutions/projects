#pragma once
#include <string>
class AutosarApplication {
public:
	AutosarApplication();
	AutosarApplication(std::string version, std::string name, std::string model);
	~AutosarApplication();
	virtual void printInfo();
	void setAppParams(std::string version, std::string name, std::string model);
	void setModel(std::string);
	std::string getVersion();
	std::string getName();
	std::string getModel();
private:
	std::string m_version;
	std::string m_name;
	std::string m_model;
};
