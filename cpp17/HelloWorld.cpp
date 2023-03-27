#include <iostream>
#include <list>
#include <thread>
#include <map>
#include "string"
#include <chrono>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <memory>
#include <stdio.h>
#include <fstream>
#include "Food.h"
#include "space.h"
#include <string.h>
#include "MyClass.h" 
#include "autosar.h"
#include <limits> 
#include <unordered_set>
#include <numeric>
#include <stdexcept>
#include "Roster.h"
#include <unordered_map>
#include "delay.h"
#include "glparser.h"



//using namespace std::chrono_literals;
using namespace  std;
//using std::cout;
//using std::endl;
//using std::string;


namespace namespace1 {
    int age = 25;
    string name = "saldin ha:)";
}

namespace namespace2 {
    int age = 26;
}

//template<typename t>
template<class t>

void swapt(t& a, t& b) {
    t temp = a;
    a = b;
    b = temp;
}

int recursive_sum(int m, int n) {
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n);
}

int recursive_factorial(int n) {
    if (n > 1)
        return n * recursive_factorial(n - 1);
    else
        return 1;
}

class youtubechannel {
private:
    string name;
    int subscriberscount;
    list<string> publishedvideotitles;
protected:
    string ownername;
    int contentquality;
public:
    youtubechannel(string name, string ownername) {
        name = name;
        ownername = ownername;
        subscriberscount = 0;
        contentquality = 0;
    }
    void getInfo() {
        cout << "name: " << name << endl;
        cout << "owner name: " << ownername << endl;
        cout << "subscriber count: " << subscriberscount << endl;
        cout << "videos: " << endl;
        for (string videotitle : publishedvideotitles) {
            cout << videotitle << endl;
        }
    }
    void subscribe() {
        subscriberscount++;
    }
    void unsubscribe() {
        if (subscriberscount>0)
        subscriberscount--;
    }
    void publishvideo(string title) {
        publishedvideotitles.push_back(title);
    }
    string getname() {
        return name;
    }
    void setname(string name) {
        name = name;
    }
    string getownername() {
        return ownername;
    }
    void setownername(string ownername) {
        ownername = ownername;
    }
    int getsubscribercount() {
        return subscriberscount;
    }
    void setsubscribercount(int subscriberscount) {
        subscriberscount = subscriberscount;
    }
    void checkanalytics(){
        if (contentquality > 5) {
            cout <<name<<" has high quality"<<endl;
        }else {
            cout << name<<  " has low quality"<<endl;
        }
    }

};

class cookingyoutubechannel : public youtubechannel{
public:
    cookingyoutubechannel(string name, string ownername):youtubechannel(name,ownername) {

    }
    void practice() {
        cout << ownername << " (" << getownername() << ") is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        contentquality++;
    }
};

class singersyoutubechannel : public youtubechannel{
public:
    singersyoutubechannel(string name, string ownername): youtubechannel(name, ownername){

    }
    void practice(){
        cout << ownername << " is taking singing classes, learning new songs, learning how to dance..." << endl;
        contentquality++;
    }
};

void print (void* ptr, char type ){
    switch (type) {
        case 'i':cout << *((int*)ptr) << endl;break;
        case 'c':cout << *((char*)ptr) << endl;break;
    }
}

int getmin (int numbers[],int size){
    int min=numbers[0];
    for (int i=0; i<size; i++){
        if (numbers[i]<min){
            min = numbers[i];
        }
    }
    return min;

}
int getmax(int numbers[], int size){
    int max = numbers[0];
    for (int i=1;i<size;i++){
        if (numbers[i]>max){
            max = numbers[i];
        }
    }
    return max;
}

void getminandmax(int numbers[],int size, int* min, int* max){
    for (int i=0;i<size;i++){
        if (numbers[i]<*min){
            *min=numbers[i];
        }
        if(numbers[i]>*max){
            *max=numbers[i];
        }
    }
}

class Node {
public:
    int value;
    Node* next;
};

void printList(Node* n){
    while (n != NULL){
        cout << n->value << endl;
        n=n->next;
    }
    cout << endl;
}

struct NodeTree{
    int data;
    NodeTree* left;
    NodeTree* right;
};

NodeTree* createNodeTree (int data){
    NodeTree* newnode = new NodeTree();
    newnode->data = data;
    newnode->left=newnode->right= nullptr;
    return newnode;
}

class Instrument{
public:
    virtual void makesound()=0;
//    virtual void makesound(){
//        cout<<"ınstrument playing"<<endl;
//    }
};

class accordion:public Instrument{
public:
    void makesound(){
        cout<<"accordion playing"<<endl;
    }
};
class piano:public Instrument{
public:
    void makesound(){
        cout<<"piano playing"<<endl;
    }
};

class printer{
    string name;
    int availablepaper;
public:
    printer (string name, int availablepaper){
        name = name;
        availablepaper = availablepaper;
    }
    void print (string txtdoc){
        int requiredpaper = txtdoc.length()/10;
        if(requiredpaper>availablepaper){
            throw ("no paper");
            //throw (101);
        }
        cout<<"printing..."<<txtdoc<<endl;
        availablepaper -= requiredpaper;
    }
};

class SmartPhone{
public:
    virtual void takeaSelfie() =0;
    virtual void makeaCall() = 0;
};

class androidphone:public SmartPhone{
    void takeaSelfie() override{
        cout<<"android selfie\n";
    }
    void makeaCall() override {
        cout<<"android calling\n";
    }
};

class IPhone:public SmartPhone{
public:
    void takeaSelfie(){
        cout<<"iPhone selfie\n";
    }
    void makeaCall(){
        cout<<"iPhone calling\n";
    }
};

class NokiaPhone:public SmartPhone{
public:
    void takeaSelfie(){
        cout<<"Nokia selfie\n";
    }
    void makeaCall(){
        cout<<"Nokia calling\n";
    }
};

void function1(char symbol) {
    for (int i = 0; i < 200; i++)
        cout << symbol;
}

void function2() {
    for (int i = 0; i < 200; i++)
        cout << "-";
}

void refreshForecast(std::map <std::string, int> forecastMap) {
    while (true) {
        for (auto& item : forecastMap) {
            item.second++;
            std::cout << item.first << " - " << item.second << std::endl;
        }
        //std::this_thread::sleep_for(2000);
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
}

class EquilateralTriangle {
private:
    float a;
    float circumference;
    float area;
public:
    void setA(float length) {
        a = length;
        circumference = a * 3;
        area = ((pow(a, 2)) * sqrt(3)) / 4;
    }
    friend void printResults(EquilateralTriangle);
    friend class Homework;
};

void printResults(EquilateralTriangle equilateralTriangle) {
    cout << "circumference = " << equilateralTriangle.circumference << endl;
    cout << "area = " << equilateralTriangle.area << endl;
}

class Homework {
public:
    void printResults(EquilateralTriangle equilateralTriangle) {
        cout << "circumference = " << equilateralTriangle.circumference << endl;
        cout << "area = " << equilateralTriangle.area << endl;
    }
};

void printStackElements(stack<int> stack) {
    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}

void printQueueElements(queue<int> queue) {
    while (!queue.empty()) {
        cout << queue.front() << endl;
        queue.pop();
    }
}

float sumNumbers(float a, float b) {
    return a + b;
}

float sumNumbers(float a, float b, float c) {
    return a + b + c;
}

class  User {
public:
    virtual void getPermissions() {
        cout << "Users can see limited info" << endl;
    }
};

class SuperUser :public User {
    void getPermissions() {
        cout << "Superusers can see all the info" << endl;
    }
};

enum EyeColor {
    Brown,
    Blue = 5,
    Green,
    Gray,
    Heterochromia,
    Other
};

void getEyeColorDetails(EyeColor eyeColor) {
    switch (eyeColor) {
    case Brown: cout << "your eyes are brownie" << endl; break;
    case Blue: cout << "your eyes are deep blue like ocean" << endl; break;
    case Green: cout << "your eyes are green like heaven" << endl; break;
    case Gray: cout << "your eyes are just gray" << endl; break;
    case Heterochromia: cout << "your eyes are heterochromia which i don't know the meaning" << endl; break;
    case Other: cout << "your eyes are not able to be categorised by us for now" << endl; break;
    default: cout << "you entered a color type which is not supported in our system" << endl; break;
    }
}

//class MyClass {
//public:
//    MyClass() {
//        cout << "Constructer invoked" << endl;
//    }
//    ~MyClass() {
//        cout << "Destructor invoked" << endl;
//    }
//};

int add(int a, int b) {
    return a+b;
}

bool ascendingCompare(int a, int b) {
    return a < b;
}

bool descendingCompare(int a, int b) {
    return a > b;
}

void sortAscending(vector<int>& numbersVector) {
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) {
        int bestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++) {
            if (ascendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void sortDescending(vector<int>& numbersVector) {
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) {
        int bestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++) {
            if (descendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void customSort(vector<int>& numbersVector, bool(*compareFuncPtr)(int, int)) {
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) {
        int bestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++) {
            if (compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void printNumbers(vector<int>& numberVector) {
    for (int i = 0; i < numberVector.size(); i++) {
        cout << numberVector[i] << " ";
    }
    cout << endl;
}

class C{
public:
    void operator()(string str)
    {
        cout << " STL " << str << endl;
    }
};

class NodeDLL {
public:
    int value;
    NodeDLL* next;
    NodeDLL* previous;
};

void printForward(NodeDLL* head) {
    NodeDLL* traverser = head;
    while (traverser != nullptr)
    {
        cout << traverser->value << endl;
        traverser = traverser->next;
    }
}

void printBackward(NodeDLL* tail) {
    NodeDLL* traverser = tail;
    while (traverser != nullptr) {
        cout << traverser->value << endl;
        traverser = traverser->previous;
    }
}

void insertAtTheFront(Node** head, int newValue) {
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = *head;
    *head = newNode;
}
void insertAtTheEnd(Node** head, int newValue) {
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}
void insertAfter(Node* previous, int newValue) {
    if (previous == NULL) {
        cout << "Previous can not be NULL";
        return;
    }
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = previous->next;
    previous->next = newNode;
}

void printTreePreOrder(NodeTree* root) { //Data Left Right
    if (root == nullptr) return;
    cout << root->data << " ";
    printTreePreOrder(root->left);
    printTreePreOrder(root->right);
    cout << endl;

}

void printTreeInOrder(NodeTree* root) { //Left Data Right
    if (root == nullptr) return;
    printTreeInOrder(root->left);
    cout << root->data << " ";
    printTreeInOrder(root->right);
    cout << endl;
}

void printTreePostOrder(NodeTree* root) { //Left  Right Data
    if (root == nullptr) return;
    printTreePostOrder(root->left);
    printTreePostOrder(root->right);
    cout << root->data << " ";
    cout << endl;
}

string reverseStringStack(string input) {
	stack<char> st;
	string output;
	for (char x : input) {
        st.push(x);
	}
	while (!st.empty()) {
		output.push_back(st.top());
		st.pop();
	}
	return output;
}

string reverseStringCustom(string str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
    return str;
}

void reverseStrPointer(string *str)
{
    string temp;
    temp = *str;
	int n = temp.length();
	for (int i = 0; i < n / 2; i++)
		swap(temp[i], temp[n - i - 1]);
    *str = temp;
}       

void reverseStrReference(string &str)
{
	int n = str.length();
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

string reverseStrInbuilt(string str)
{
    reverse(str.begin(), str.end());
    return str;
}

string reverseStrWhile(string str) {
    int len = str.length();
    int n = len - 1;
    int i = 0;
    while (i <= n) {
        swap(str[i], str[n]);
        n -= 1;
        i += 1;
    }
    return str;
}

void reverseStrRecursiveTwoPtr(string &str, int n, int i) {
    if (n <= i) { return; }
    swap(str[i], str[n]);
    reverseStrRecursiveTwoPtr(str, n - 1, i + 1);
}

void reverseStrRecursiveOnePtr(string &str, int i) {
    if (i > (str.length() - 1 - i)) {
        return;
    }
    swap(str[i], str[str.length() - i - 1]);
    i++;
    reverseStrRecursiveOnePtr(str, i);
}

string reverseStrTempStr(string str) {
    //int len = str.length();
    string revStr;
	//for (int i = len - 1; i >= 0; i--) {
	for (int i = str.length() - 1; i >= 0; i--) {
			revStr.push_back(str[i]);
    }
    return revStr;
}

//char* reverseConstString(char* str) {
//    int n = strlen(str);
//    char* rev = new char[n + 1];
//    strcpy(rev, str);
//    for (int i = 0, j = n - 1; i < j; i++, j--) {
//        swap(rev[i], rev[j]);
//    }
//    return rev;
//}



char* reverseConstCharSwap(char const* constStr)
{
	int length = strlen(constStr);
    char* str = new char[length + 1];
    //strcpy(str, constStr);
    //strcpy_s(str, strlen(constStr) + 1, constStr);
	for (int i = 0, j = length - 1; i < j; i++, j--)
		swap(str[i], str[j]);
    return str;
}

char* reverseConstCharCStyle(char const* constStr)
{
	int length = strlen(constStr);
	int c, i, j;
	char* str = new char[length + 1];
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		c = constStr[i];
        str[i] = constStr[j];
        str[j] = c;
	}
    str[length] = '\0';
	return str;
}

string reverseStrAppend(string const &s) {
    string rev;
    for (int i = s.size() - 1; i >= 0; i--) {
        rev = rev.append(1, s[i]);
    };
    return rev;
}

string reverseStrIterator(string const& s) {
    string rev;
    string::const_reverse_iterator it = s.crbegin();
    while (it != s.crend()) {
        rev = rev.append(1, *(it++));
    };
    return rev;
}

string reverseStrForEachLambda(string const& s) {
    string rev;
    for_each(s.crbegin(), s.crend(), [&rev](char const& c) {
        rev = rev.append(1, c);
        });
    return rev;
}

string reverseStrConstructer(string const& s) {
    string rev(s.rbegin(), s.rend());
    return rev;
}

namespace space_age2 {
	constexpr double earth_years_per_second = 1.0 / 31557600;
	constexpr double mercury_years_per_second =
		earth_years_per_second / 0.2408467;
	constexpr double venus_years_per_second =
		earth_years_per_second / 0.61519726;
	constexpr double mars_years_per_second =
		earth_years_per_second / 1.8808158;
	constexpr double jupiter_years_per_second =
		earth_years_per_second / 11.862615;
	constexpr double saturn_years_per_second =
		earth_years_per_second / 29.447498;
	constexpr double uranus_years_per_second =
		earth_years_per_second / 84.016846;
	constexpr double neptune_years_per_second =
		earth_years_per_second / 164.79132;

    class space_age2 {
    private:
        double sec;
    public:
        space_age2(double sec) {
            this->sec = sec;
        }
        //space_age::space_age(long long sec) : sec(sec) {}
        ~space_age2() {

        }
		void printSpaceTime() {
			std::cout << "1 seconds():  " << seconds() << std::endl;
			std::cout << "1 on_earth():  " << on_earth() << std::endl;
			std::cout << "1 on_mercury():  " << on_mercury() << std::endl;
			std::cout << "1 on_venus():  " << on_venus() << std::endl;
			std::cout << "1 on_mars():  " << on_mars() << std::endl;
			std::cout << "1 on_jupiter():  " << on_jupiter() << std::endl;
			std::cout << "1 on_saturn():  " << on_saturn() << std::endl;
			std::cout << "1 on_uranus():  " << on_uranus() << std::endl;
			std::cout << "1 on_neptune():  " << on_neptune() << std::endl;
		};
        long long seconds() const {
            return sec;
        }
        //	long long	space_age::seconds() const {
        //		return (sec);
        //	}
        double on_earth() const {
            return (sec * earth_years_per_second);
        }
        //double	space_age::on_earth() const {
        //    return (sec * earth_years_per_second);
        //}
        double	on_mercury() const {
            return (sec * mercury_years_per_second);
        }
        double	on_venus() const {
            return (sec * venus_years_per_second);
        }
        double	on_mars() const {
            return (sec * mars_years_per_second);
        }
        double	on_jupiter() const {
            return (sec * jupiter_years_per_second);
        }
        double	on_saturn() const {
            return (sec * saturn_years_per_second);
        }
        double	on_uranus() const {
            return (sec * uranus_years_per_second);
        }
        double	on_neptune() const {
            return (sec * neptune_years_per_second);
        }
    };

}  // namespace space_age

class BMAutosar : public AutosarApplication {
public:
	BMAutosar(string version, string name, string model) : AutosarApplication(version, name, model) {}
	void practice() {
        cout << "practice" << endl;
	}
    void printInfo() override {
		//cout << "BM print info\n";
		printf("BM Application version: %s\n", getVersion().c_str());
		printf("BM Application name: %s\n", getName().c_str());
		printf("BM Application model: %s\n", getModel().c_str());
    }
};

std::string raindrops(int number) {
	std::string result = "";
	if (number % 3 == 0) {
		result += "Pling";
	}
	if (number % 5 == 0) {
		result += "Plang";
	}
	if (number % 7 == 0) {
		result += "Plong";
	}
	if (result == "") {
		result = std::to_string(number);
	}
	return result;
}

bool is_pangram(string text) {
	unordered_set<char> chars;
	for (char i : text)
		if (islower(tolower(i)))
			chars.insert(tolower(i));
	return chars.size() == 26;
}

int max_of_four(int a, int b, int c, int d) {
	// Initialize max to the maximum of a and b
	int max = a > b ? a : b;
	// Update max to the maximum of max and c
	max = max > c ? max : c;
	// Update max to the maximum of max and d
	max = max > d ? max : d;
	return max;
}

void update(int* a, int* b) {
	*a = *a + *b;
	*b = abs(*a - 2 * (*b));
}

std::string two_fer(std::string const name) {
	if (name.empty()) {
		return "One for you, one for me.";
	}
	else {
		return "One for " + name + ", one for me.";
	}
}

int hamming_distance(const std::string& strand1, const std::string& strand2) {
	if (strand1.length() != strand2.length()) {
		//return -1;  // error: strands have different lengths
        throw std::domain_error("Invalid string lengths");
	}
	int distance = 0;
	for (int i = 0; i < strand1.length(); i++) {
		if (strand1[i] != strand2[i]) {
			distance++;
		}
	}
	return distance;
}

int hamming_distance_count(const std::string& strand1, const std::string& strand2) {
	if (strand1.length() != strand2.length()) {
		//return -1;  // error: strands have different lengths
        throw std::domain_error("Invalid string lengths");
	}
	int distance = std::inner_product(strand1.begin(), strand1.end(), strand2.begin(), 0, std::plus<>(), [](char c1, char c2) {
		return c1 != c2;
		});
	return distance;
}

bool is_even(int x) {
	return x % 2 == 0;
}

//consteval int get_value() {//C++20 example
//	return 3;
//}

class SchoolC98
{
	// Map to store the grades and the corresponding list of students
private:
    map<int, vector<string> > roster;
public:
	// Method to add a student to the roster for a given grade
	void add(string name, int grade)
	{
		// if the grade already exists in the roster, add the student to the corresponding list of students
		if (roster.count(grade) > 0)
		{
            roster[grade].push_back(name);
		}
		// if the grade does not exist in the roster, create a new entry in the map with the grade and the student's name
		else
		{
            roster[grade] = vector<string>(1, name); //roster[grade] = { name }; uniform initialization syntax
		}
	}
	// Method to return a list of all students enrolled in a given grade
	vector<string> grade(int grade)
	{
		// If the grade does not exist in the roster, return an empty list
		if (roster.count(grade) == 0)
		{
			return vector<string>();
		}
		// If the grade exists in the roster, return the corresponding list of students
		else
		{
			return roster[grade];
		}
	}
	// Method to return a sorted list of all students in all grades
	map<int, vector<string> > school()
	{
		// Iterate through the map and sort the list of students in each grade
		for (map<int, vector<string> >::iterator it = roster.begin(); it != roster.end(); ++it)
		{
			sort(it->second.begin(), it->second.end());
		}
		// Return the roster
		return roster;
	}
};
void printSchoolC98() {
	//Create an instance of the School class
	SchoolC98 school;
	// Add some students to the roster
	school.add("Anna", 1);
	school.add("Barb", 1);
	school.add("Charlie", 1);
	school.add("Alex9", 2);
	school.add("Peter9", 2);
	school.add("Zoe9", 2);
	school.add("Jim", 5);
	// Get a list of all students enrolled in grade 2
	vector<string> grade2C98 = school.grade(2);
	cout << "SchoolC98 Students in grade 2: ";
	for (int i = 0; i < grade2C98.size(); i++)
		cout << grade2C98[i] << " ";
	cout << endl;
	// Get a sorted list of all students in all grades
	map<int, vector<string> > rosterC98 = school.school();
	cout << "SchoolC98 All students: " << endl;
	for (map<int, vector<string> >::iterator it = rosterC98.begin(); it != rosterC98.end(); ++it) {
		cout << "Grade " << it->first << ": ";
		for (int i = 0; i < it->second.size(); i++)
			cout << it->second[i] << " ";
		cout << endl;
	}
}
class CsgSchoolC14
{
	// Map to store the grades and the corresponding list of students
private:
	map<int, vector<string>> schoolList;
public:
	// Method to add a student to the roster for a given grade
	void add(string studentName, int studentGrade) {
		if (schoolList.count(studentGrade) > 0) {
			schoolList[studentGrade].push_back(studentName);
		}
		else {
			schoolList[studentGrade] = vector<string>(1, studentName);
		}
	}
	//Method to return a list of all students enrolled in a given grade
	vector<string> grade(int studentGrade) {
	    if (schoolList.count(studentGrade) == 0) {
	        return vector<string>();
	    }
	    else {
            //cout << "schoolList.size(): " << schoolList.size() << endl;
	        return schoolList[studentGrade];
	    }
	}
	// Method to return a sorted list of all students in all grades
	map<int, vector<string>> sortedSchoolList() {
		//for (map<int, vector<string>>::iterator it = schoolList.begin(); it != schoolList.end(); it++) {
		for (auto it = schoolList.begin(); it != schoolList.end(); it++) {
				sort(it->second.begin(), it->second.end());
	    }
	    return schoolList;
	}
};
void printSchoolCSGC14() {
	// Create an instance of the School class
	CsgSchoolC14 csgSchoolList;
	csgSchoolList.add("Victoria", 1);
	csgSchoolList.add("Anna", 2);
	csgSchoolList.add("Olesya", 1);
	csgSchoolList.add("Olga", 2);
	csgSchoolList.add("Inna", 2);
	csgSchoolList.add("Ksenia", 2);
	vector<string> grade1 = csgSchoolList.grade(1);
	cout << "CsgSchoolC14 csgStudents in grade 1: ";
	for (auto it = grade1.begin(); it != grade1.end(); ++it) {
		cout << *it << " ";
		//cout << it->data() << " ";
	}
	cout << endl;
	map<int, vector<string>> studentList = csgSchoolList.sortedSchoolList();
	cout << "CsgSchoolC14 All students: " << endl;
	//for (map<int, vector<string>>::iterator it = studentList.begin(); it != studentList.end(); it++) {
	for (auto it = studentList.begin(); it != studentList.end(); it++) {
		cout << "Grade " << it->first << ": ";
		for (int i = 0; i < it->second.size(); i++) {
			cout << it->second[i] << " ";
		}
		cout << endl;
	}
}
class SchoolC17P {
	std::map <int, std::vector<string>> roster;
public:
	void add(std::string name, int grade) {
		if (roster.count(grade) > 0)
			roster[grade].push_back(name);
		else
			roster[grade] = { name };
	}
	std::vector<std::string> grade(int grade) {
		if (roster.count(grade) == 0)
			return {};
		else
			return roster[grade];
	}
	std::map<int, std::vector<std::string>> school() {
		for (auto& [grade, students] : roster) {//C++17 structured binding feature
			std::sort(students.begin(), students.end());
		}
		return roster;
	}
};
void printSchoolC17P() {
	SchoolC17P schoolC17P;
	schoolC17P.add("Mehmet", 1);
	schoolC17P.add("Ahmet", 1);
	schoolC17P.add("Veli", 1);
	schoolC17P.add("Niyazi", 2);
	schoolC17P.add("YIlmaz", 2);
	schoolC17P.add("ilkkan", 2);
	schoolC17P.add("Ekrem Abi:)", 5);
	auto grade22 = schoolC17P.grade(2);
	std::cout << "SchoolC17P Students in grade22: ";
	for (const auto& student : grade22)
		std::cout << student << " ";
	std::cout << std::endl;
	auto roster22 = schoolC17P.school();
	std::cout << "SchoolC17P All students: " << std::endl;
	for (const auto& [grade, students] : roster22) {//C++17's "structured binding declarations" feature
		std::cout << "Grade: " << grade << ": ";
		for (const auto& student : students) {//C++11 range-based for loop
			std::cout << student << " ";
		}
		//	for (auto& [grade, students] : roster){//C++17 structured binding feature
		//		cout << "Grade " << grade << ": ";
		//		for (string student : students){//C++11 range-based for loop
		std::cout << std::endl;
	}
}

std::unordered_map<char, int> count_nucleotides(const std::string& sequence) {
	std::unordered_map<char, int> counts;
	counts['A'] = 0;
	counts['C'] = 0;
	counts['G'] = 0;
	counts['T'] = 0;

	for (const char nucleotide : sequence) {
		if (counts.count(nucleotide) == 0) {
			std::cerr << "INVALID" << std::endl;
            return {};
		}
		else {
			counts[nucleotide]++;
		}
	}

	return counts;
}

std::string transcribe_RNA(const std::string& dna) {
	std::string rna;
	rna.reserve(dna.size());  // reserve enough space for the RNA strand

	for (char c : dna) {
		switch (c) {
		case 'G':
			rna += 'C';
			break;
		case 'C':
			rna += 'G';
			break;
		case 'T':
			rna += 'A';
			break;
		case 'A':
			rna += 'U';
			break;
		default:
			std::cerr << "Invalid DNA nucleotide: " << c << std::endl;
			break;
		}
	}

	return rna;
}

std::map<char, char> dnaToRnaMap = {
	 { 'G', 'C' },
	 { 'C', 'G' },
	 { 'T', 'A' },
	 { 'A', 'U' }
};
char to_rna(char nucleotide) {
	return dnaToRnaMap[nucleotide];
}
std::string to_rna(std::string nucleotides) {
	for (char& nucleotide : nucleotides) {
		nucleotide = to_rna(nucleotide);
	}
	return nucleotides;
}

vector<string> find_anagrams(string word, vector<string> candidates) {
	vector<string> anagrams;
	sort(word.begin(), word.end());  // sort the given word
	for (string candidate : candidates) {
		string sorted_candidate = candidate;
		sort(sorted_candidate.begin(), sorted_candidate.end());  // sort the candidate
		if (sorted_candidate == word) {  // compare the sorted candidate with the sorted given word
			anagrams.push_back(candidate);
		}
	}
	return anagrams;
}

bool is_valid_isbn(string isbn) {
	// remove hyphens from the input string
	isbn.erase(remove(isbn.begin(), isbn.end(), '-'), isbn.end());

	// check the length of the string
	if (isbn.length() != 10) {
		return false;
	}

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		char c = isbn[i];
		if (isdigit(c)) {
			sum += (c - '0') * (10 - i);
		}
		else if (c == 'X') {
			sum += 10 * (10 - i);
		}
		else {
			return false;
		}
	}

	return sum % 11 == 0;
}

int find_difference(int n) {
	int square_of_sum = (n * (n + 1) / 2) * (n * (n + 1) / 2);
	int sum_of_squares = n * (n + 1) * (2 * n + 1) / 6;
	return square_of_sum - sum_of_squares;
}

int find_difference_for(int n) {
	int square_of_sum = 0;
	int sum_of_squares = 0;
	for (int i = 1; i <= n; i++) {
		square_of_sum += i;
		sum_of_squares += i * i;
	}
	square_of_sum = square_of_sum * square_of_sum;
	return square_of_sum - sum_of_squares;
}

int collatz_steps(int n) {
	int steps = 0;
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = 3 * n + 1;
		}
		steps++;
		cout << steps << ". : " << n << endl;
	}
	return steps;
}

int collatz_steps_recursive(int n) {
    static int i = 0;
    if (n == 1) {
        return 0;
    }
    i++;
    if (n % 2 == 0) {
        cout << i <<". : " << n << endl;
        return collatz_steps_recursive(n / 2) + 1;
    }
    else {
        cout << i << ". : " << n << endl;
        return collatz_steps_recursive(3 * n + 1) + 1;
    }
}


// Function to find the nth prime number
int nthPrime(int n)
{
	// Initialize a vector to store the prime numbers
	vector<int> primes;

	// Start from 2, the first prime number
	int num = 2;

	// Keep iterating until we have found the nth prime number
	while (primes.size() < n)
	{
		bool isPrime = true;

		// Check if the current number is divisible by any of the prime numbers found so far
		for (int prime : primes)
		{
			// If it is divisible, it is not a prime number
			if (num % prime == 0)
			{
				isPrime = false;
				break;
			}
		}

		// If it is a prime number, add it to the list of prime numbers
		if (isPrime)
		{
			primes.push_back(num);
		}

		// Move on to the next number
		num++;
	}

	// Return the nth prime number
	return primes[n - 1];
}

// Struct to represent the position of a queen on the chessboard
struct Queen
{
	int row;
	int col;
};

// Function to check if two queens can attack each other
bool canAttack(Queen q1, Queen q2)
{
	// Check if the queens are on the same row
	if (q1.row == q2.row)
	{
		return true;
	}

	// Check if the queens are on the same column
	if (q1.col == q2.col)
	{
		return true;
	}

	// Check if the queens are on the same diagonal
	if (abs(q1.row - q2.row) == abs(q1.col - q2.col))
	{
		return true;
	}

	// If none of the above conditions are met, the queens cannot attack each other
	return false;
}

// Function to find all the prime numbers up to a given limit using the Sieve of Eratosthenes
vector<int> sieve(int limit)
{
	// Initialize a vector to store the prime numbers and mark all numbers as prime
	vector<int> primes(limit + 1, true);

	// 0 and 1 are not prime
	primes[0] = primes[1] = false;

	// Iterate through the numbers up to the square root of the limit
	for (int i = 2; i <= sqrt(limit); i++)
	{
		// If the current number is marked as prime
		if (primes[i])
		{
			// Mark all multiples of i as not prime
			for (int j = i * i; j <= limit; j += i)
			{
				primes[j] = false;
			}
		}
	}

	// Initialize a vector to store the prime numbers
	vector<int> result;

	// Iterate through the numbers and store the prime numbers
	for (int i = 2; i <= limit; i++)
	{
		if (primes[i])
		{
			result.push_back(i);
		}
	}

	// Return the vector of prime numbers
	return result;
}

// A lookup table of words for numbers from 0 to 19
const std::string words_0_to_19[] = {
  "zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
  "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
  "sixteen", "seventeen", "eighteen", "nineteen"
};

// A lookup table of words for multiples of ten from 20 to 90
const std::string words_tens[] = {
  "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
};

std::string convert_number_to_words(int number) {
	if (number < 0 || number > 99) {
		// Complain loudly if the input is out of range
		std::cerr << "Error: Number " << number << " is out of range!" << std::endl;
		return "";
	}

	if (number < 20) {
		// For numbers from 0 to 19, use the words in the lookup table
		return words_0_to_19[number];
	}
	else {
		// For numbers from 20 to 99, use the words in the lookup table for multiples of ten
		// and append the word for the units digit
		return words_tens[number / 10] + "-" + words_0_to_19[number % 10];
	}
}

std::chrono::system_clock::time_point add_gigasecond(
	const std::chrono::system_clock::time_point& moment) {
	return moment + std::chrono::seconds(1000000000);
}

void sumofmultiples(int n) {
	//int n = 20; // Upper limit
	int sum = 0; // Sum of multiples

	// Iterate through all numbers from 1 to n - 1
	for (int i = 1; i < n; ++i) {
		// Check if i is a multiple of 3 or 5
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i; // Add i to the sum if it is a multiple of 3 or 5
		}
	}

	std::cout << "Sum of multiples: " << sum << std::endl;
}

std::vector<std::string> secretHandshake(int n) {
	std::vector<std::string> handshake;
	if (n & 1) {
		handshake.push_back("wink");
	}
	if (n & 2) {
		handshake.push_back("double blink");
	}
	if (n & 4) {
		handshake.push_back("close your eyes");
	}
	if (n & 8) {
		handshake.push_back("jump");
	}
	if (n & 16) {
		std::reverse(handshake.begin(), handshake.end());
	}
	return handshake;
}

void printhandshake(std::vector<std::string> handshake) {
	for (const std::string& action : handshake) {
		std::cout << action << std::endl;
	}
}

#include <bitset>

const int ALLERGENS_COUNT = 8;

struct Allergen {
	int value;
	std::string name;
};

std::vector<Allergen> allergens = {
  {1, "eggs"},
  {2, "peanuts"},
  {4, "shellfish"},
  {8, "strawberries"},
  {16, "tomatoes"},
  {32, "chocolate"},
  {64, "pollen"},
  {128, "cats"}
};

std::vector<std::string> allergies(int score) {
	std::vector<std::string> result;

	// Use a bitset to store the allergens that the person is allergic to
	std::bitset<ALLERGENS_COUNT> allergic;
	for (int i = 0; i < ALLERGENS_COUNT; i++) {
		if (score & allergens[i].value) {
			allergic.set(i);
		}
	}

	// Iterate over the allergens and add the ones that the person is allergic to to the result vector
	for (int i = 0; i < ALLERGENS_COUNT; i++) {
		if (allergic[i]) {
			result.push_back(allergens[i].name);
		}
	}

	return result;
}

// Map to store the codon-protein pairs
std::unordered_map<std::string, std::string> codon_map = {
	{"AUG", "Methionine"}, //uniform initializers
	{"UUU", "Phenylalanine"},
	{"UUC", "Phenylalanine"},
	{"UUA", "Leucine"},
	{"UUG", "Leucine"},
	{"UCU", "Serine"},
	{"UCC", "Serine"},
	{"UCA", "Serine"},
	{"UCG", "Serine"},
	{"UAU", "Tyrosine"},
	{"UAC", "Tyrosine"},
	{"UGU", "Cysteine"},
	{"UGC", "Cysteine"},
	{"UGG", "Tryptophan"},
	{"UAA", "STOP"},
	{"UAG", "STOP"},
	{"UGA", "STOP"}
};
void printTranslateRNA(std::string rna) {
	// RNA sequence to be translated
	//std::string rna = "AUGUUUUCUUUUUAAAUG"; //AUG-Methionine UUU-Phenylalanine UCU-Serine UAA-STOP

	// Protein sequence
	std::string protein;

	// Iterate through the RNA sequence three nucleotides at a time
	for (int i = 0; i < rna.size(); i += 3)
	{
		// Get the current codon
		std::string codon = rna.substr(i, 3);

		// If the codon is a stop codon, stop translation
		if (codon_map[codon] == "STOP")
		{
			break;
		}

		// Otherwise, add the corresponding protein to the protein sequence
		protein += codon_map[codon] + " ";
	}

	std::cout << protein << std::endl;
}

// Function that computes the prime factors of a given natural number
std::vector<int> prime_factors(int n) {
	std::vector<int> factors;
	// Divide by 2 while it is possible
	cout << "n: " << n << endl;
	while (n % 2 == 0) {
		factors.push_back(2);
		n /= 2;
		cout << "n/2: " << n << endl;
	}
	// Divide by the odd numbers until n becomes 1
	for (int i = 3; n > 1; i += 2) {
		while (n % i == 0) {
			factors.push_back(i);
			n /= i;
			//cout << "n/"<<i << ": " << n << endl;
		}
		//cout << "prime number: " << i << endl;
	}
	cout << "n: " << n << endl;
	return factors;
}

void printPrimeFactors(int n) {
	//int n = 60;
	//std::cout << "Enter a natural number: ";
	//std::cin >> n;

	std::vector<int> factors = prime_factors(n);

	std::cout << "The prime factors of " << n << " are: ";
	for (int factor : factors) {
		std::cout << factor << " ";
	}
	std::cout << std::endl;
}

int convertTrinary2Decimal(string s) {
	int decimalResult = 0;
	for (int i = 0, n = s.length() - 1; i < s.length(); i++, n--) {
		if (s[i] < '0' || s[i] > '2') return 0;  // invalid trinary digit
		decimalResult += (s[i] - '0') * pow(3, n);
	}
	cout << "base 3 s = " << s << " decimalResult: " << decimalResult << endl;
	return decimalResult;
}

bool isLuhnValid(const std::string& s)
{
	// Strip spaces from the input string
	std::string t;
	std::remove_copy(s.begin(), s.end(), std::back_inserter(t), ' ');
	//s.erase(std::remove_if(s.begin(), s.end(), [](char c) { return std::ispunct(c) || std::isspace(c); }), s.end());


	// Check for non-digit characters
	//if (t.find_first_not_of("0123456789") != string::npos)//if it cant find non-digit character returns string::npos if it finds returns the index 
	if(!all_of(t.begin(), t.end(), isdigit))
		return false;

	// Check string length
	if (t.length() <= 1)
		return false;

	// Implement the Luhn algorithm
	int sum = 0;
	bool double_digit = false;
	for (auto it = t.rbegin(); it != t.rend(); ++it)
	{
		int digit = *it - '0';
		if (double_digit)
		{
			digit *= 2;
			if (digit > 9)
				digit -= 9;
		}
		sum += digit;
		double_digit = !double_digit;
	}

	return sum % 10 == 0;
}

void printLuhnValidation(string s) {
	//std::string s = "4539 3195 0343 6467";
	//std::getline(std::cin, s);

	if (isLuhnValid(s))
		std::cout << "the credit card with the number : " << s << " is halit bin valid:DD" << std::endl;
	else
		std::cout << "the credit card with the number : " << s << " is not fucking valid!" << std::endl;
}

bool is_armstrong(int n)
{
	// Calculate the number of digits in n
	int num_digits = std::log10(n) + 1;
	//cout << "num_digits: " << num_digits << endl;

	// Calculate the sum of the digits raised to the power of num_digits
	int sum = 0;
	int temp = n;
	while (temp > 0)
	{
		int digit = temp % 10;
		sum += std::pow(digit, num_digits);
		temp /= 10;
	}

	// Check if the sum is equal to n
	return sum == n;
}

void printAmstrongNumber(int n) {
	//int n;
	//std::cin >> n;

	if (is_armstrong(n))
		std::cout << n << " is an Armstrong number." << std::endl;
	else
		std::cout << n << " is not an Armstrong number." << std::endl;
}

string atbash(std::string s) {
	//std::string t;

	//std::remove_copy(s.begin(), s.end(), std::back_inserter(t), ' ');
	//std::remove_copy(s.begin(), s.end(), std::back_inserter(t), std::ispunct);
//	s.erase(std::remove_if(s.begin(), s.end(), std::ispunct), s.end());
	s.erase(std::remove_if(s.begin(), s.end(), [](char c) { return std::ispunct(c) || std::isspace(c); }), s.end());


	string result;
	for (char c : s) {
		if (c >= 'a' && c <= 'z') {
			result += 'z' - (c - 'a');
		}
		else if (c >= 'A' && c <= 'Z') {
			result += 'Z' - (c - 'A');
		}
		else {
			result += c;
		}
	}
	return result;
}

int printAtbash(string s) {
	//std::string s;
	//std::getline(std::cin, s);
	std::cout << atbash(s) << std::endl;
	return 0;
}

int hex2int(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	if (ch >= 'A' && ch <= 'F')
		return ch - 'A' + 10;
	if (ch >= 'a' && ch <= 'f')
		return ch - 'a' + 10;
	return -1;
}

int hex_to_decimalfnc(const std::string& hex) {
	int decimal = 0;
	for (int i = hex.length() - 1, power = 0; i >= 0; i--, power++) {
		// Check if the current character is a valid hexadecimal digit
		if (hex2int(hex[i]) == -1) {
			std::cout << "Invalid hexadecimal string" << std::endl;
			return -1;
		}
		// Convert the hexadecimal digit to decimal and add it to the result
		decimal += hex2int(hex[i]) * std::pow(16, power);
	}
	return decimal;
}

void printHexNum(string hex) {
	//std::string hex = "10af8c";
	int decimal = hex_to_decimalfnc(hex);
	if (decimal != -1) {
		std::cout << hex << " in decimal is: " << decimal << std::endl;
	}
}

int hex2IntMap(const string hex) {
	// Map to store the values of the hexadecimal digits
	std::unordered_map<char, int> hex_values = {
	  {'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4},
	  {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9},
	  {'a', 10}, {'b', 11}, {'c', 12}, {'d', 13}, {'e', 14}, {'f', 15},
	  {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}
	};
	int decimal = 0;
	for (int i = hex.length() - 1, power = 0; i >= 0; i--, power++) {
		// Check if the current character is a valid hexadecimal digit
		if (hex_values.count(hex[i]) == 0) {
			std::cout << "Invalid hexadecimal string" << std::endl;
			return -1;
		}
		// Convert the hexadecimal digit to decimal and add it to the result
		decimal += hex_values[hex[i]] * std::pow(16, power);
	}
	return decimal;
}

void printHexNumMap(string hex) {
	//std::string hex = "10af8c";
	int decimal = hex2IntMap(hex);
	if (decimal != -1) {
		cout << "hex2IntMap " << hex << " in decimal is: " << decimal << endl;
	}
}

bool is_isogram(const string& s) {
	// Create an unordered set to store the characters we have seen so far.
	unordered_set<char> seen;
	// Loop through each character in the string.
	for (char c : s) {
		// If the character is a space or a hyphen, we can skip it.
		if (c == ' ' || c == '-') {
			continue;
		}
		// If the character has already been seen, then the string is not an isogram.
		if (seen.count(c) > 0) {
			return false;
		}
		// Otherwise, add the character to the set of seen characters.
		seen.insert(c);
	}
	// If we have reached this point, then the string is an isogram.
	return true;
}

bool isIsogram(string s) {
	unordered_set<char> seen;
	for (char c : s) {
		if (c == ' ' || c == '-')
			continue;
		if (seen.count(c) > 0)
			return false;
		seen.insert(c);
	}
	return true;
}

void printIsogram() {
	// Test some example words and phrases.
	cout << boolalpha;
	//cout << noboolalpha;
	cout << is_isogram("lumberjacks") << endl;
	cout << is_isogram("background") << endl;
	cout << is_isogram("downstream") << endl;
	cout << is_isogram("six-year-old") << endl;
	cout << is_isogram("isograms") << endl;
}

bool isBalanced(const std::string& str) {
	std::stack<char> s;
	for (char c : str) {
		switch (c) {
		case '(':
		case '[':
		case '{':
			s.push(c);
			break;
		case ')':
			if (s.empty() || s.top() != '(') {
				return false;
			}
			s.pop();
			break;
		case ']':
			if (s.empty() || s.top() != '[') {
				return false;
			}
			s.pop();
			break;
		case '}':
			if (s.empty() || s.top() != '{') {
				return false;
			}
			s.pop();
			break;
		}
	}
	return s.empty();
}

void printMatchingBrackets(string str) {
	//std:: = "{[()]}"printMatchingBrackets("{[()]}");
	if (isBalanced(str)) {
		std::cout << "The string: " << str << " is balanced." << std::endl;
	}
	else {
		std::cout << "The string: " << str << " is not balanced." << std::endl;
	}
}

bool isMatchingBrackets(const string& str) {
	stack<char> s;
	for (char c : str) {
		switch (c) {
			case '(':
			case '{':
			case '[':
				s.push(c);
				break;
			case ')':
				if (s.empty() || s.top() != '(')
					return false;
				s.pop();
				break;
			case ']':
				if (s.empty() || s.top() != '[')
					return false;
				s.pop();
				break;
			case '}':
				if (s.empty() || s.top() != '{')
					return false;
				s.pop();
				break;
		}
	}
	cout << str << " s.empty(); part: " << s.empty() << endl;
	return s.empty();
}

void printisMatchingBrackets(string str) {
	if (isMatchingBrackets(str)) {
		std::cout << "The isMatchingBrackets string: " << str << " is balanced." << std::endl;
	}
	else {
		std::cout << "The isMatchingBrackets string: " << str << " is not balanced." << std::endl;
	}
}

bool checkParenthesesForInt(string str) {
	int leftPar = 0;
	int rightPar = 0;
	for (int i = 0; i < sizeof(str); i++) { //")(");
		if (str[i] == '(') {
			leftPar++;
		}
		else if (str[i] == ')')
		{
			rightPar++;
			if (rightPar > leftPar) {
				return false;
			}
		}
		//  if (leftPar == rightPar){
		//        leftPar = 0;
		//        rightPar
		//    }
	}
	cout << "leftPar: " << leftPar << endl;
	cout << "rightPar: " << rightPar << endl;
	//cout << "str:" << str << endl;

	if (leftPar == rightPar) {
		return true;
	}
	else {
		return false;
	}
}

bool checkParenthesesStackIf(const std::string& s) {
	std::stack<char> stack;
	for (char c : s) {
		if (c == '(') {
			stack.push(c);
		}
		else if (c == ')') {
			if (stack.empty() || stack.top() != '(') {
				return false;
			}
			stack.pop();
		}
	}
	return stack.empty();
}

bool checkParanthesesLuxSoft(string str) {
	stack<char> stack;
	for (char c : str) {
		switch (c) {
		case '(':
			stack.push(c);
			break;
		case ')':
			if (stack.empty() || stack.top() != '(')
				return false;
			stack.pop();
			break;
		}
	}
	return stack.empty();
}

int dartPoints(float x, float y ) {
	int point = 0;
	float c = sqrt(pow(x, 2) + pow(y, 2));
	cout << " c= " << c << "  ";
	if (c <= 1)
		point = 10;
	else if (c <= 5)
		point = 5;
	else if (c <= 10)
		point = 1;
	return point;
	//r 10,5,1
	// sqrt(x^2+y^2)
}

int convertBinary2Decimal(string s) {
	int decimalResult = 0;
	for (int i = 0, n = s.length() - 1; i < s.length(); i++, n--) {
		if (s[i] < '0' || s[i] > '1') return 0;  // invalid binary digit
		decimalResult += (s[i] - '0') * pow(2, n);
	}
	cout << s << "xb in decimal= " << decimalResult << endl;
	return decimalResult;
}

int convertN2Decimal(string s, int base) {
	int decimalResult = 0;
	//string maxDigitStr = to_string(Base - 1);
	//char maxDigit = maxDigitStr[0];
	char maxDigit = '0' + base - 1;
	cout << "maxDigit: " << maxDigit << endl;
	//for (int i = 0, n = s.length() - 1; i < s.length(); i++, n--) {
	for (int i = 0, n = s.length(); i < n; i++) {
		if (s[i] < '0' || s[i] > maxDigit) return 0;  // invalid binary digit
		decimalResult += (s[i] - '0') * pow(base, n - i - 1);
	}
	cout << s << "x"<<base<<" in decimal = " << decimalResult << endl;
	return decimalResult;
}

#include <sstream>
#include <cctype>

std::string acronymAllPunc(const std::string& phrase) {
	std::stringstream ss;
	bool found_separator = true;
	for (char c : phrase) {
		if (std::isalpha(c) || c == '\'') {
			if (found_separator) {
				ss << static_cast<char>(std::toupper(c));
				found_separator = false;
			}
		}
		else {
			found_separator = true;
		}
	}
	return ss.str();
}

std::string acronym(const std::string& phrase) {
	std::stringstream ss;
	bool found_separator = true;
	for (char c : phrase) {
		if (std::isalpha(c) || c == '\'') {
			if (found_separator) {
				ss << static_cast<char>(std::toupper(c));
				found_separator = false;
			}
		}
		else if (c == ' ' || c == '-') {
			found_separator = true;
		}
	}
	return ss.str();
}

std::vector<std::vector<int>> pascal_triangle(int num_rows) {
	std::vector<std::vector<int>> triangle = { {1} };
	for (int i = 1; i < num_rows; i++) {
		std::vector<int> row;
		for (int j = 0; j < i + 1; j++) {
			if (j == 0 || j == i) {
				row.push_back(1);
			}
			else {
				row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
			}
		}
		triangle.push_back(row);
	}
	return triangle;
}

int score(const std::string& word) {
	std::unordered_map<char, int> scores = {
		{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'l', 1}, {'n', 1}, {'r', 1}, {'s', 1}, {'t', 1},
		{'d', 2}, {'g', 2},
		{'b', 3}, {'c', 3}, {'m', 3}, {'p', 3},
		{'f', 4}, {'h', 4}, {'v', 4}, {'w', 4}, {'y', 4},
		{'k', 5},
		{'j', 8}, {'x', 8},
		{'q', 10}, {'z', 10}
	};
	int total_score = 0;
	for (const char c : word) {
		cout << "c: " << c << " ,scores[c]: " << scores[c] << endl;
		total_score += scores[c];
	}
	return total_score;
}

void parseWord(string phrase) {
	//getline(cin, phrase);
	map<string, int> word_count;
	string word = "";
	for (char c : phrase) {
		if (isalnum(c) || c == '\'') {
			word += tolower(c);
		}
		else if (word != "") {
			word_count[word]++;
			word = "";
		}
	}
	if (word != "") {
		word_count[word]++;
	}
	for (auto [word, count] : word_count) {
		cout << word << ": " << count << endl;
	}
}	

void parseWordNewLine(string phrase) {
	string word;
	map<string, int> word_count;
	stringstream ss(phrase);
	while (ss >> word) {
		word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		word_count[word]++;
	}
	for (auto [word, count] : word_count) {
		cout << word << ": " << count << endl;
	}
}

map <string, int> parseandWordCount(const string& s) {
	map<string, int> res;
	string word;
	for (auto c : s) {
		if (!std::isalnum(c) && c != '\'' && !word.empty()) {
			if (word.front() == '\'') word.erase(0, 1);//word.begin();
			if (word.back() == '\'') word.pop_back();
			res[word] += 1;
			word.clear();
		}
		else if (std::isalnum(c) || c == '\'') {
			word.push_back(std::tolower(c));
		}
	}
	if (!word.empty()) {
		if (word.front() == '\'') word.erase(0, 1);
		if (word.back() == '\'') word.pop_back();
		res[word] += 1;
	}
	for (auto [wor, count] : res) {
		cout << wor << ": " << count << endl;
	}
	return res;
}

vector<int> baseConversion(vector<int> num, int b1, int b2) {
	bool isNegative = num[0] == '-';
	int x = 0;
	for (int i = (isNegative ? 1 : 0); i < num.size(); i++) {
		x = x * b1 + num[i];
	}

	vector<int> convertedNum;
	do {
		int rem = x % b2;
		x /= b2;
		convertedNum.push_back((rem < 10) ? rem + '0' : rem - 10 + 'A');
	} while (x);

	if (isNegative)
		convertedNum.push_back('-');

	reverse(convertedNum.begin(), convertedNum.end());
	return convertedNum;
}

vector<int> convertBaseGeneric(vector<int> num, int old_base, int new_base) {
	// First, convert the number to base 10
	int decimal = 0;
	int n = num.size();
	for (int i = 0; i < n; i++) {
		decimal += num[i] * pow(old_base, n - 1 - i);
	}
	// Next, convert the decimal number to the new base
	vector<int> new_num;
	while (decimal > 0) {
		new_num.push_back(decimal % new_base);
		decimal /= new_base;
	}
	// Reverse the new number and return it
	reverse(new_num.begin(), new_num.end());
	return new_num;
}

string clean_phone_number(string phone_number) {
	string cleaned_number;
	// Remove all non-numeric characters
	for (auto c : phone_number) {
		if (isdigit(c)) {
			cleaned_number += c;
		}
	}
	// Remove country code
	if (cleaned_number.length() > 0 && cleaned_number[0] == '1') {
		cleaned_number = cleaned_number.substr(1);
	}
	// Check length
	if (cleaned_number.length() != 10) {
		throw std::invalid_argument("Invalid phone number");
	}
	return cleaned_number;
}

void implementCleanNumber(string str) {
	try {
		cout << clean_phone_number(str) << std::endl;
	}
	catch (const std::exception& e) {
		cout << str << " is an invalid number" << endl;
		cout << "exception type: " << typeid(e).name() << endl;
	}
}

class bank
{
	int acno;
	char nm[100], acctype[100];
	float bal;
public:
	bank(int acc_no, char* name, char* acc_type, float balance)  //Parameterized Constructor
	{
		acno = acc_no;
		strcpy_s(nm, name);
		strcpy_s(acctype, acc_type);
		bal = balance;
	}
	void deposit();
	void withdraw();
	void display();
};
void bank::deposit()   //depositing an amount
{
	int damt1;
	cout << "\n Enter Deposit Amount = ";
	cin >> damt1;
	bal += damt1;
}
void bank::withdraw()  //withdrawing an amount
{
	int wamt1;
	cout << "\n Enter Withdraw Amount = ";
	cin >> wamt1;
	if (wamt1 > bal)
		cout << "\n Cannot Withdraw Amount";
	bal -= wamt1;
}

#include "bank_account.h"
void bank::display()  //displaying the details
{
	cout << "\n ----------------------";
	cout << "\n Accout No. : " << acno;
	cout << "\n Name : " << nm;
	cout << "\n Account Type : " << acctype;
	cout << "\n Balance : " << bal;
}

#include "meetup.h"
#include <ctime>

std::map<std::string, int> descriptorMap = {
	{"first", 1},
	{"second", 2},
	{"third", 3},
	{"fourth", 4},
	{"fifth", 5},
	{"last", -1},
	{"monteenth", 13},
	{"tuesteenth", 14},
	{"wednesteenth", 15}, 
	{"thursteenth", 16},
	{"friteenth", 17},
	{"saturteenth", 18},
	{"sunteenth", 19}
};

std::map<std::string, int> dayMap = {
	{"Monday", 1},
	{"Tuesday", 2},
	{"Wednesday", 3},
	{"Thursday", 4},
	{"Friday", 5},
	{"Saturday", 6},
	{"Sunday", 7}
};

std::map<std::string, int> monthMap = {
	{"January", 1},
	{"February", 2},
	{"March", 3},
	{"April", 4},
	{"May", 5},
	{"June", 6},
	{"July", 7},
	{"August", 8},
	{"September", 9},
	{"October", 10},
	{"November", 11},
	{"December", 12}
};

void parseDate(string description) {
	//std::string description = "The first Monday of January 2017";
	std::string month, day, year, descriptor, blank;
	std::stringstream ss(description);

	ss >> blank >> descriptor >> day >> blank >> month >> year;

	int descriptorValue = descriptorMap[descriptor];
	int dayValue = dayMap[day];
	int monthValue = monthMap[month];
	int yearValue = stoi(year);

	cout << descriptor << " " << descriptorValue << "-"
		<< day << " " << dayValue << "-"
		<< month << " " << monthValue << "-"
		<< year << yearValue << endl;

}

struct DateValues {
	int year;
	int month;
	int descriptor;
	int day;
};
struct DateValuesStr {
	string year;
	string month;
	string descriptor;
	string day;
};

DateValues parseDate2(string description) {
	// Split the input string into separate parts
	stringstream ss(description);
	std::string month, day, year, descriptor, blank;
	int yearValue = 0, monthValue=0, descriptorValue=0, dayValue=0;
	vector<string> parts;
	string part;
	while (ss >> part) {
		parts.push_back(part);
	}

	// Extract the values of year, month, descriptor, and day
	//int year, month;
	//string descriptor, day;
	for (int i = 0; i < parts.size(); i++) {
		if (isdigit(parts[i][0])) {
			//year = stoi(parts[i]);
			year = parts[i];
			yearValue = stoi(year);
		}
		else if (monthMap.count(parts[i])) {
			month = parts[i];
			monthValue = monthMap[month];
		}
		else if (descriptorMap.count(parts[i])) {
			descriptor = parts[i];
			descriptorValue = descriptorMap[descriptor];
		}
		else if (dayMap.count(parts[i])) {
			day = parts[i];
			dayValue = dayMap[day];
		}
	}

	if (descriptorValue >= 13) {
		cout << descriptor << " " << descriptorValue << "-"
			//<< day << " " << dayValue << "-"
			<< month << " " << monthValue << "-"
			<< year << " " << yearValue << endl;
	}
	else {
		cout << descriptor << " " << descriptorValue << "-"
			<< day << " " << dayValue << "-"
			<< month << " " << monthValue << "-"
			<< year << " " << yearValue << endl;
	}

	// Calculate the actual meetup date based on the extracted values
	// ...
	// Determine the number of days in the month
	std::tm t = {};
	t.tm_mon = monthValue;  // January
	t.tm_year = yearValue - 1900;  // 2017
	if (descriptorValue >= 13) {
		t.tm_mday = descriptorValue;  // First day of the month
	}
	else {
		//first tuesday and so on
	}
	mktime(&t);
	int numDaysInMonth = t.tm_mday;
	cout << "t.tm_mday: " << t.tm_mday << " t.tm_mon: " << t.tm_mon << " t.tm_year: " << t.tm_year+1900 << endl;
	return { yearValue, monthValue, descriptorValue, dayValue };

}

DateValuesStr parseDate3(string description) {
	// Split the input string into separate parts
	stringstream ss(description);
	std::string month, day, year, descriptor, blank;
	vector<string> parts;
	string part;
	while (ss >> part) {
		parts.push_back(part);
	}
	// Extract the values of year, month, descriptor, and day
	for (int i = 0; i < parts.size(); i++) {
		if (isdigit(parts[i][0])) {
			year = parts[i];
		}
		else if (monthMap.count(parts[i])) {
			month = parts[i];
		}
		else if (descriptorMap.count(parts[i])) {
			descriptor = parts[i];
		}
		else if (dayMap.count(parts[i])) {
			day = parts[i];
		}
	}
	return { year, month, descriptor, day };
}

//int nth_day_of_week(int year, int month, const std::string& day_of_week, const std::string& nth) {
//	std::tm t = {};
//	t.tm_year = year - 1900;
//	t.tm_mon = month;
//	t.tm_mday = 1;
//	t.tm_isdst = -1;
//
//	time_t time = std::mktime(&t);
//	std::tm* cal = std::localtime(&time);
//
//	int day_of_week_num = dayMap[day_of_week];
//	int days_to_add = (7 + day_of_week_num - cal->tm_wday) % 7;
//	int nth_day_of_week = (7 * descriptorMap[nth] - 6) + days_to_add;
//	if (descriptorMap[nth] == -1) {
//		int days_in_month = (t.tm_mon == 11) ? 31 : cal->tm_mday + ((t.tm_mon == 1) ? -7 : 28);
//		nth_day_of_week = days_in_month - (cal->tm_wday - day_of_week_num + 7) % 7;
//	}
//	return nth_day_of_week;
//}

int nth_day_of_week(int year, int month, const std::string& day_of_week, const std::string& nth) {
	std::tm t = {};
	t.tm_year = year - 1900;
	t.tm_mon = month;
	t.tm_mday = 1;
	t.tm_isdst = -1;

	time_t time = std::mktime(&t);
	std::tm cal;
	localtime_s(&cal, &time);

	int day_of_week_num = dayMap[day_of_week];
	int days_to_add = (7 + day_of_week_num - cal.tm_wday) % 7;
	int nth_day_of_week = (7 * descriptorMap[nth] - 6) + days_to_add;
	if (descriptorMap[nth] == -1) {
		int days_in_month = (t.tm_mon == 11) ? 31 : cal.tm_mday + ((t.tm_mon == 1) ? -7 : 28);
		nth_day_of_week = days_in_month - (cal.tm_wday - day_of_week_num + 7) % 7;
	}
	return nth_day_of_week;
}

//std::string getMonthString(int month) {
//	for (const auto& [monthStr, monthInt] : monthMap) {
//		if (monthInt == month) {
//			return monthStr;
//		}
//	}
//	return "Invalid month";
//}

#include <iostream>
#include <string>
#include <map>

std::map<std::string, int> months = {
  {"January", 1},
  {"February", 2},
  {"March", 3},
  {"April", 4},
  {"May", 5},
  {"June", 6},
  {"July", 7},
  {"August", 8},
  {"September", 9},
  {"October", 10},
  {"November", 11},
  {"December", 12}
};

std::map<std::string, int> days_of_week = {
  {"Sunday", 0},
  {"Monday", 1},
  {"Tuesday", 2},
  {"Wednesday", 3},
  {"Thursday", 4},
  {"Friday", 5},
  {"Saturday", 6}
};

std::map<std::string, int> teenths = {
  {"monteenth", 13},
  {"tuesteenth", 14},
  {"wednesteenth", 15},
  {"thursteenth", 16},
  {"friteenth", 17},
  {"saturteenth", 18},
  {"sunteenth", 19}
};

// Returns the day of the month (1-31) corresponding to the nth occurrence
// of day_of_week in the given month and year.
int get_day_of_month(int year, int month, int n, int day_of_week) {
	std::tm t = {};
	t.tm_year = year - 1900;
	t.tm_mon = month - 1;
	t.tm_mday = 1;

	std::mktime(&t);

	int first_day_of_week = t.tm_wday;
	int day = 1 + n * 7 + day_of_week - first_day_of_week;
	if (day < 1) {
		day += 7;
	}

	return day;
}

// Returns the last day of the month corresponding to the given day of the week.
//int get_last_day_of_month(int year, int month, int day_of_week) {
//	std::tm t = {};
//	t.tm_year = year - 1900;
//	t.tm_mon = month - 1;
//	t.tm_mday = 31;
//
//	std::mktime(&t);
//
//	int last_day_of_week = t.tm_wday;
//	int day = 31 - (last_day_of_week - day_of_week);
//	if (day > 31) {
//		day -= 7;
//	}
//
//	return day;
//}

int get_last_day_of_month(int year, int month, int day_of_week) {
	std::tm t = {};
	t.tm_year = year - 1900;
	t.tm_mon = month - 1;

	int days_in_month = 0;
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days_in_month = 31;
		break;
	case 4: case 6: case 9: case 11:
		days_in_month = 30;
		break;
	case 2:
		days_in_month = 28 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		break;
	}

	t.tm_mday = days_in_month;
	std::mktime(&t);

	int last_day_of_week = t.tm_wday;
	int day = days_in_month - (last_day_of_week - day_of_week);
	if (day > days_in_month) {
		day -= 7;
	}

	return day;
}

void printParsedDates(string description) {
	std::string descriptor, month_str, day_of_week_str;
	int year, month, day_of_week, day_of_month;
	//std::stringstream ss(description);
	//ss >> descriptor >> day_of_week_str >> month_str >> year;

	DateValuesStr parsedDateStr = parseDate3(description);
	descriptor = parsedDateStr.descriptor;
	month_str = parsedDateStr.month;
	day_of_week_str = parsedDateStr.day;
	year = stoi(parsedDateStr.year);

	month = months[month_str];
	day_of_week = days_of_week[day_of_week_str];
	if (descriptor == "first") {
		day_of_month = get_day_of_month(year, month, 0, day_of_week);
	}
	else if (descriptor == "second") {
		day_of_month = get_day_of_month(year, month, 1, day_of_week);
	}
	else if (descriptor == "third") {
		day_of_month = get_day_of_month(year, month, 2, day_of_week);
	}
	else if (descriptor == "fourth") {
		day_of_month = get_day_of_month(year, month, 3, day_of_week);
	}
	else if (descriptor == "fifth") {
		day_of_month = get_day_of_month(year, month, 4, day_of_week);
	}
	else if (descriptor == "last") {
		day_of_month = get_last_day_of_month(year, month, day_of_week);
	}
	else {
		day_of_month = teenths[descriptor];
	}
	cout << description << " is " << endl;
	std::cout << year << "/" << month << "/" << day_of_month << std::endl;

}

string normalize(string s) {
	string result;
	for (char c : s) {
		if (isalnum(c)) {
			result += tolower(c);
		}
	}
	return result;
}

string encode(string s) {
	s = normalize(s);
	int len = s.size();
	int rows = sqrt(len);
	int cols = rows + (rows * rows < len);
	string result;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows + (i < len - rows * cols); j++) {
			//result += s[j * cols + i];
			if (j * cols + i < s.length()) {
				result += s[j * cols + i];
			}

		}
		result += ' ';
	}
	return result;
}




enum class Direction { NORTH, EAST, SOUTH, WEST };

class Robot {
public:
	void turn_right() {
		switch (dir) {
		case Direction::NORTH: dir = Direction::EAST; break;
		case Direction::EAST: dir = Direction::SOUTH; break;
		case Direction::SOUTH: dir = Direction::WEST; break;
		case Direction::WEST: dir = Direction::NORTH; break;
		}
	}

	void turn_left() {
		switch (dir) {
		case Direction::NORTH: dir = Direction::WEST; break;
		case Direction::EAST: dir = Direction::NORTH; break;
		case Direction::SOUTH: dir = Direction::EAST; break;
		case Direction::WEST: dir = Direction::SOUTH; break;
		}
	}

	void advance() {
		switch (dir) {
		case Direction::NORTH: ++y; break;
		case Direction::EAST: ++x; break;
		case Direction::SOUTH: --y; break;
		case Direction::WEST: --x; break;
		}
	}

	void execute(const string& instructions) {
		for (char instr : instructions) {
			switch (instr) {
			case 'R': turn_right(); break;
			case 'L': turn_left(); break;
			case 'A': advance(); break;
			}
		}
	}

	void report() const {
		cout << x << "," << y << " (";
		switch (dir) {
		case Direction::NORTH: cout << "NORTH"; break;
		case Direction::EAST: cout << "EAST"; break;
		case Direction::SOUTH: cout << "SOUTH"; break;
		case Direction::WEST: cout << "WEST"; break;
		}
		cout << ")" << endl;
	}

private:
	int x = 0;
	int y = 0;
	Direction dir = Direction::NORTH;
};

#include <string>
#include <set>
#include <cstdlib>
#include <ctime>

class Robot2 {
public:
	Robot2() {
		reset();
	}

	std::string getName() const {
		return robot_name;
	}

	void reset() {
		std::string new_name;
		do {
			new_name = random_name();
		} while (robotNames.count(new_name) > 0);

		robotNames.erase(robot_name);
		robotNames.insert(new_name);
		robot_name = new_name;
	}

private:
	std::string robot_name;
	static std::set<std::string> robotNames;

	std::string random_name() const {
		std::string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		std::string name = "";
		for (int i = 0; i < 2; i++) {
			int index = rand() % letters.size();
			name += letters[index];
		}

		for (int i = 0; i < 3; i++) {
			name += std::to_string(rand() % 10);
		}

		return name;
	}
};

std::set<std::string> Robot2::robotNames;//It is a definition of a static variable that is shared across all instances of the Robot class.

#include <unordered_set>
#include <random>

const int NUM_LETTERS = 26;
const int NUM_DIGITS = 10;

class Robot3 {
private:
	std::string name;
	static std::unordered_set<std::string> names; // Set to store used names
	static std::mt19937 rng; // Mersenne Twister RNG
	static std::uniform_int_distribution<int> letter_dist; // Distribution for letters
	static std::uniform_int_distribution<int> digit_dist; // Distribution for digits

public:
	// Constructor that generates a new random name
	Robot3() {
		reset();
	}

	// Reset the robot to its factory settings, generating a new random name
	void reset() {
		std::string new_name;
		do {
			// Generate a new random name
			new_name = "";
			for (int i = 0; i < 2; i++) {
				new_name += 'A' + letter_dist(rng);
			}
			for (int i = 0; i < 3; i++) {
				new_name += '0' + digit_dist(rng);
			}
		} while (names.count(new_name) > 0); // Check if the name is already in use
		// Update the name and add it to the set of used names
		name = new_name;
		names.insert(name);
	}

	// Return the current name of the robot
	std::string getName() const {
		return name;
	}
};

// Initialize the static member variables
std::unordered_set<std::string> Robot3::names;
std::mt19937 Robot3::rng;
std::uniform_int_distribution<int> Robot3::letter_dist(0, NUM_LETTERS - 1);
std::uniform_int_distribution<int> Robot3::digit_dist(0, NUM_DIGITS - 1);

void printSeriesSubstrings(string s, int n) {
	int len = s.length();
	if (n > len) {
		cout << "Invalid input";
		return;
	}
	for (int i = 0; i <= len - n; i++) {
		string substr = s.substr(i, n);
		cout << substr << endl;
	}
}

int binarySearch(std::vector<int> arr, int key) {
	int left = 0, right = arr.size() - 1;
	int ctr = 0;
	while (left <= right) {
		ctr++;
		cout << "ctr: " << ctr << endl;
		int mid = left + (right - left) / 2;
		if (arr[mid] == key) {
			return mid;
		}
		else if (arr[mid] < key) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}

template<typename T>
class CircularBuffer {
public:
	CircularBuffer(size_t capacity)
		: buffer(capacity)
		, head(0)
		, tail(0)
		, isFull(false)
	{}

	void write(T item) {
		buffer[head] = item;
		head = (head + 1) % buffer.size();
		if (isFull) {
			tail = (tail + 1) % buffer.size();
		}
		isFull = (head == tail);
	}

	T read() {
		if (empty()) {
			throw std::out_of_range("Buffer is empty");
		}
		T item = buffer[tail];
		tail = (tail + 1) % buffer.size();
		isFull = false;
		return item;
	}

	bool empty() const {
		return (!isFull && (head == tail));
	}

	bool full() const {//full
		return isFull;
	}

	size_t size() const {
		size_t size = buffer.size();
		if (!isFull) {
			if (head >= tail) {
				size = head - tail;
			}
			else {
				size = buffer.size() + head - tail;
			}
		}
		return size;
	}

	std::vector<T> get_contents() const {
		std::vector<T> contents;
		contents.reserve(size());
		for (size_t i = tail; i != head; i = (i + 1) % buffer.size()) {
			contents.push_back(buffer[i]);
		}
		return contents;
	}

private:
	std::vector<T> buffer;
	size_t head;
	size_t tail;
	bool isFull;
};

class ComplexNumber {
public:
	ComplexNumber(double real, double imag) : real(real), imag(imag) {}

	ComplexNumber operator+(const ComplexNumber& other) const {
		return ComplexNumber(real + other.real, imag + other.imag);
	}

	ComplexNumber operator-(const ComplexNumber& other) const {
		return ComplexNumber(real - other.real, imag - other.imag);
	}

	ComplexNumber operator*(const ComplexNumber& other) const {
		return ComplexNumber(real * other.real - imag * other.imag, imag * other.real + real * other.imag);
	}

	ComplexNumber operator/(const ComplexNumber& other) const {
		double denominator = other.real * other.real + other.imag * other.imag;
		double real_numerator = real * other.real + imag * other.imag;
		double imag_numerator = imag * other.real - real * other.imag;
		return ComplexNumber(real_numerator / denominator, imag_numerator / denominator);
	}

	ComplexNumber conjugate() const {
		return ComplexNumber(real, -imag);
	}

	double abs() const {
		return std::sqrt(real * real + imag * imag);
	}

	ComplexNumber exp() const {
		double real_part = std::exp(real) * std::cos(imag);
		double imag_part = std::exp(real) * std::sin(imag);
		return ComplexNumber(real_part, imag_part);
	}

	friend std::ostream& operator<<(std::ostream& os, const ComplexNumber& c);

private:
	double real;
	double imag;
};

std::ostream& operator<<(std::ostream& os, const ComplexNumber& c) {
	os << c.real << " + " << c.imag << "i";
	return os;
}


/*_main

*/
#include "bank_account_cgpt.h"
#include "bank_account.h"
#include "bank_account_move.h"
#include "bob.h"
#include "roman_numerals.h"
#include "clock.h"
#include "clock_exercism.h"
#include "circular_buffer.h"


class LargestSeriesProduct {
public:
	static long long largestSeriesProduct(const string& num, int n) {
		int len = num.length();
		if (len < n) {
			cout << "Error: substring length is greater than input length." << endl;
			return 0;
		}

		long long max_product = 0;
		for (int i = 0; i <= len - n; i++) {
			long long product = 1;
			for (int j = 0; j < n; j++) {
				product *= num[i + j] - '0';
			}
			if (product > max_product) {
				max_product = product;
			}
		}

		return max_product;
	}
};


int main()
{
	string num1 = "1027839564";
	int n1 = 3;
	cout << "Largest product for a series of " << n1 << " digits in " << num1 << " is " << LargestSeriesProduct::largestSeriesProduct(num1, n1) << endl;

	string num2 = "1027839564";
	int n2 = 5;
	cout << "Largest product for a series of " << n2 << " digits in " << num2 << " is " << LargestSeriesProduct::largestSeriesProduct(num2, n2) << endl;

	string num3 = "73167176531330624919225119674426574742355349194934";
	int n3 = 6;
	cout << "Largest product for a series of " << n3 << " digits in " << num3 << " is " << LargestSeriesProduct::largestSeriesProduct(num3, n3) << endl;






	return 0;
	//system("pause>nul");
}


/*_142

*/
/*_141

*/
/*_140

*/
/*_139

*/
/*_138
	// Create two complex numbers
	ComplexNumber a(1, 2);
	ComplexNumber b(3, 4);
	// Test addition
	std::cout << a + b << std::endl;  // Output: 4 + 6i
	// Test subtraction
	std::cout << a - b << std::endl;  // Output: -2 - 2i
	// Test multiplication
	std::cout << a * b << std::endl;  // Output: -5 + 10i
	// Test division
	std::cout << a / b << std::endl;  // Output: 0.44 + 0.08i
	// Test conjugate
	std::cout << a.conjugate() << std::endl;  // Output: 1 - 2i
	// Test absolute value
	std::cout << a.abs() << std::endl;  // Output: 2.236
	// Test exponentiation
	std::cout << a.exp() << std::endl;  // Output: -1.13 + 2.47i

*/
/*_137
	circular_buffer::circular_buffer<int> cirBuffer(5);
	cirBuffer.write(1);

	//try {
	//	cout << "cirBuffer.read()= " << cirBuffer.read() << endl;
	//	cout << "cirBuffer.read()= " << cirBuffer.read() << endl;
	//}
	//catch (...) {
	//	cout << "read error amk" << endl;
	//}
	cirBuffer.write(2);
	cirBuffer.write(3);
	cirBuffer.write(4);
	cirBuffer.write(5);

	cirBuffer.overwrite(25);
	//cirBuffer.write(6);
	//cirBuffer.write(7);

	cout << "cirBuffer.read()= " << cirBuffer.read() << endl;
	cout << "cirBuffer.read()= " << cirBuffer.read() << endl;
	cout << "cirBuffer.read()= " << cirBuffer.read() << endl;
	cout << "cirBuffer.read()= " << cirBuffer.read() << endl;
	cout << "cirBuffer.read()= " << cirBuffer.read() << endl;

	CircularBuffer<int> buffer(5); // Create a buffer of size 5
	buffer.write(1);
	buffer.write(2);
	buffer.write(3);
	buffer.write(4);
	buffer.write(5);
	// print the buffer contents
	for (int i : buffer.get_contents()) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	buffer.write(6);
	buffer.write(7);
	// print the buffer contents
	for (int i : buffer.get_contents()) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	buffer.read();
	buffer.read();
	buffer.read();
	// print the buffer contents
	for (int i : buffer.get_contents()) {
		std::cout << i << " ";
	}
	buffer.write(8);
	buffer.write(9);
	// print the buffer contents
	for (int i : buffer.get_contents()) {
		std::cout << i << " ";
	}

*/
/*_136
	std::vector<int> arr = { 1, 3, 4, 6, 7, 8, 9, 10, 11 };
	int key = 8;
	int index = binarySearch(arr, key);
	if (index != -1) {
		std::cout << "Found key at index " << index << std::endl;
	}
	else {
		std::cout << "Key not found in array" << std::endl;
	}

*/
/*_135
	string s = "49142";
	int n = 3;
	printSeriesSubstrings(s, n);

*/
/*_134
	Robot2 robot1;
	std::cout << "Robot 1 name: " << robot1.getName() << std::endl;

	Robot2 robot2;
	std::cout << "Robot 2 name: " << robot2.getName() << std::endl;

	robot1.reset();
	std::cout << "Robot 1 reset. New name: " << robot1.getName() << std::endl;


	// Create a robot and print its name
	Robot3 r3;
	std::cout << "Robot 3: " << r3.getName() << std::endl;

	// Reset the robot and print its new name
	r3.reset();
	std::cout << "Robot 3 reset. New name: " << r3.getName() << std::endl;

	// Create another robot and print its name
	Robot3 r4;
	std::cout << "Robot 4: " << r4.getName() << std::endl;

*/
/*_133
	Robot robot;
	robot.execute("RAAALAAL");
	robot.report();

*/
/*_132
	string s = "If man was meant to stay on the ground, god would have given us roots.";
	cout << encode(s) << endl;

*/
/*_131
string toRoman(int num) {
	string roman = "";
	map<int, string> romanMap = {
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

*/
/*_130
	int numBottles = 99;
	while (numBottles > 0) {
		cout << numBottles << " bottles of beer on the wall, " << numBottles << " bottles of beer." << endl;
		cout << "Take one down and pass it around, " << numBottles - 1 << " bottles of beer on the wall." << endl;
		numBottles--;
	}
	cout << "No more bottles of beer on the wall, no more bottles of beer." << endl;
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall." << endl;

*/
/*_129
	vector<string> animal_list = { "fly", "spider", "bird", "cat", "dog", "goat", "cow", "horse" };

	for (int i = 0; i < animal_list.size(); i++) {
		string animal = animal_list[i];
		cout << "I know an old lady who swallowed a " << animal << "." << endl;
		if (animal == "fly") {
			cout << "I don't know why she swallowed the fly. Perhaps she'll die." << endl;
		}
		else {
			string prev_animal = animal_list[i - 1];
			cout << "It wriggled and jiggled and tickled inside her." << endl;
			for (int j = i - 1; j > 0; j--) {
				string prev_prev_animal = animal_list[j - 1];
				cout << "She swallowed the " << prev_animal << " to catch the " << prev_prev_animal << "." << endl;
				prev_animal = prev_prev_animal;
			}
			cout << "She swallowed the fly to catch the spider that wriggled and jiggled and tickled inside her." << endl;
			cout << "I don't know why she swallowed the fly. Perhaps she'll die." << endl;
		}
		if (animal == "horse") {
			cout << "She's dead, of course!" << endl;
		}
	}

*/
/*_128
	// create a clock instance at 8:00 am
	date_independent::clock c = date_independent::clock::at(8, 0);
	// print the clock time
	std::cout << std::string(c) << std::endl;
	// add 30 minutes to the clock
	c.plus(30);
	// print the updated clock time
	std::cout << std::string(c) << std::endl;
	// compare two clock instances
	date_independent::clock c2 = date_independent::clock::at(8, 30);
	if (c == c2) {
		std::cout << "The two clocks are the same." << std::endl;
	}
	else {
		std::cout << "The two clocks are different." << std::endl;
	}

	std::cout << endl << endl;

	// create a clock object using the constructor
	date_independent2::clock myClock(9, 30);
	std::cout << "myClock: " << std::string(myClock) << std::endl; // output: "myClock: 09:30"
	// create a clock object using the at function
	date_independent2::clock otherClock = myClock.at(12, 15);
	std::cout << "otherClock: " << std::string(otherClock) << std::endl; // output: "otherClock: 12:15"
	// add minutes to a clock object
	date_independent2::clock newClock = myClock.plus(45);
	std::cout << "newClock: " << std::string(newClock) << std::endl; // output: "newClock: 10:15"
	// compare two clock objects
	if (myClock == otherClock) {
		std::cout << "myClock and otherClock are equal." << std::endl;
	}
	else {
		std::cout << "myClock and otherClock are not equal." << std::endl;
	}
	// output: "myClock and otherClock are not equal."

	std::cout << endl << endl;

*/
/*_127
	using namespace bob;
	std::cout << hey("How are you?") << std::endl;
	std::cout << hey("HELLO") << std::endl;
	std::cout << hey("HELLO?") << std::endl;
	std::cout << hey("") << std::endl;
	std::cout << hey("   ") << std::endl;
	std::cout << hey("Do you like cats?") << std::endl;

*/
/*_126
	cout << "Roman numeral: " << " 16 " << roman_numerals::convert(16) << endl;
	cout << "Roman numeral: " << " 37 " << roman_numerals::convert(37) << endl;
	cout << "Roman numeral: " << " 3000 " << roman_numerals::convert(3000) << endl;
	cout << "Roman numeral: " << " 666 " << roman_numerals::convert(666) << endl;
	cout << "Roman numeral: " << " 1024 " << roman_numerals::convert(1024) << endl;
	cout << "Roman numeral: " << " 1024 " << roman_numerals::convert(3999) << endl;

*/
/*_125
	BangaAkkauntu::BankAccount account1("John Doe", 1000.0);
	account1.deposit(500.0);
	std::cout << "Account name: " << account1.get_name() << std::endl;
	std::cout << "Account balance: " << account1.get_balance() << std::endl;

	Bankaccount::Bankaccount account2;
	try {
		account2.open();
		account2.deposit(100);
		account2.withdraw(50);
		std::cout << "account2 Balance: " << account2.balance() << std::endl;
		account2.close();
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}

	BankaccountMove::Bankaccount account3;
	try {
		account3.open();
		account3.deposit(120);
		account3.withdraw(50);
		std::cout << "account3 Balance: " << account3.balance() << std::endl;
		account3.close();
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}

*/
/*_124
	std::string description = "The last Sunday of February 1900";
	printParsedDates(description);
	printParsedDates("The last Monday of February 1900");
	printParsedDates("The first Monday of January 2017");
	printParsedDates("The wednesteenth of June 2023");
	printParsedDates("The second Saturday of June 2023");
	printParsedDates("The third Saturday of February 2023");

*/
/*_123
	//int year = 2023;
	//int month = 5;  // June
	//std::string day_of_week = "Saturday";
	//std::string nth = "second";
	//int nth_day_of_week_day = nth_day_of_week(year, month-1, day_of_week, nth);
	//cout << "nth_day_of_week" << endl;
	//cout << "The "<< nth << " " << day_of_week << " of " << getMonthString(month) << " "
	//	 << year << " is " << nth_day_of_week_day << " nth day of " << getMonthString(month) << endl;

	//parseDate2("The first Monday of January 2017");
	//parseDate("The third Tuesday of January 2017");
	parseDate2("The wednesteenth of June 2023");
	//parseDate("The last Thursday of January 2017");

*/
/*_122
	Bankaccount::Bankaccount account;
	try {
		account.open();
		account.deposit(100);
		account.withdraw(50);
		std::cout << "Balance: " << account.balance() << std::endl;
		account.close();
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}

	int acc_no;
	char name[100], acc_type[100];
	float balance;
	cout << "\n Enter Details: \n";
	cout << "-----------------------";
	cout << "\n Accout No. ";
	cin >> acc_no;
	cout << "\n Name : ";
	cin >> name;
	cout << "\n Account Type : ";
	cin >> acc_type;
	cout << "\n Balance : ";
	cin >> balance;

	bank b1(acc_no, name, acc_type, balance);  //object is created
	b1.deposit(); //
	b1.withdraw(); // calling member functions
	b1.display(); //

*/
/*_121
	bool processMessages = true;
	InitRandomNumberGenerator();
	while (1) {
		if (processMessages) {
			ProcessRandomMessages();
		}
		if (TimeoutCheck(MESSAGE_TIMEOUT_PERIOD_20S)) {
			printf("TIMEOUT!!\n");
		}
		processMessages = ProcessTimer();
		Delay(TIMER_DELAY_PERIOD_100MS);
	}

*/
/*_120
	implementCleanNumber("+1 (613)-995-0253");
	implementCleanNumber("613-995-0253");
	implementCleanNumber("1 613 995 0253");
	implementCleanNumber("613.995.0253");
	implementCleanNumber("+905428931399");

*/
/*_119
	cout << "1,1,0,0,1,0" << endl;
	vector<int> num = { 1,1,0,0,1,0 };
	int b1 = 2, b2 = 10;
	vector<int> convertedNum = baseConversion(num, b1, b2);
	for (int i = 0; i < convertedNum.size(); i++)
		cout << convertedNum[i];

*/
/*_118
	vector<int> num2 = { 1,1,0,0,1,0 };
	vector<int> convertedNum2 = convertBaseGeneric(num2, 3, 8);
	cout << "The number in old base: " << 3 << ": ";
	for (int i = 0; i < num2.size(); i++) {
		cout << num2[i];
	}
	cout << endl;
	cout << "convertedNum2 in new base " << 8 << ": ";
	for (int i = 0; i < convertedNum2.size(); i++) {
		cout << convertedNum2[i];
	}
	cout << endl;

*/
/*_117
	vector<int> num = { 1,1,0,0,1,0 };
	int b1 = 2, b2 = 10;
	vector<int> convertedNum = baseConversion(num, b1, b2);
	cout << "Original number in base " << b1 << ": ";
	for (int i = 0; i < num.size(); i++) {
		cout << num[i];
	}
	cout << endl;
	cout << "Converted number in base " << b2 << ": ";
	for (int i = 0; i < convertedNum.size(); i++) {
		cout << convertedNum[i];
	}

*/
/*_116
	parseWord("That's the password: 'PASSWORD 123'!");
	parseWord("That's the password: 'PASSWORD 123'!, cried the Special Agent.\nSo I fled.");
	parseWordNewLine("That's the password: 'PASSWORD 123'!, cried the Special Agent.\nSo I fled.");
	parseandWordCount("That's the password: 'PASSWORD 123'!, cried the Special Agent.\nSo I fled.");

*/
/*_115
	convertN2Decimal("42", 10);
	convertN2Decimal("101010", 2);
	convertN2Decimal("1120", 3);
	//The number 42, in base 10, means:
	//(4 * 10 ^ 1) + (2 * 10 ^ 0)
	//	The number 101010, in base 2, means :
	//	(1 * 2 ^ 5) + (0 * 2 ^ 4) + (1 * 2 ^ 3) + (0 * 2 ^ 2) + (1 * 2 ^ 1) + (0 * 2 ^ 0)
	//	The number 1120, in base 3, means :
	//	(1 * 3 ^ 3) + (1 * 3 ^ 2) + (2 * 3 ^ 1) + (0 * 3 ^ 0)

*/
/*_114
	std::cout << score("cabbage") << std::endl;  // prints 14

*/
/*_113
	auto triangle = pascal_triangle(5);
	for (const auto& row : triangle) {
		for (const auto& val : row) {
			std::cout << val << ' ';
		}
		std::cout << std::endl;
	}

*/
/*_112
	// Create a new std::unordered_map to hold the score per letter
	std::unordered_map<char, int> scores;

	// Iterate over the list of letters and their corresponding scores in the legacy data
	std::vector<std::pair<int, std::vector<char>>> legacy_data = {
		{1, {'A', 'E', 'I', 'O', 'U', 'L', 'N', 'R', 'S', 'T'}},
		{2, {'D', 'G'}},
		{3, {'B', 'C', 'M', 'P'}},
		{4, {'F', 'H', 'V', 'W', 'Y'}},
		{5, {'K'}},
		{8, {'J', 'X'}},
		{10, {'Q', 'Z'}}
	};
	for (const auto& [score, letters] : legacy_data) {
		for (const char letter : letters) {
			// Add an entry to the scores map with the letter as the key and the score as the value
			scores[std::tolower(letter)] = score;
		}
	}

	// now you can use the scores map to look up the score for any given letter
	std::cout << scores['a'] << std::endl;  // prints 1
	std::cout << scores['b'] << std::endl;  // prints 3
	std::cout << scores['z'] << std::endl;  // prints 10

*/
/*_111
	float value = 3.14;
	void* ptr = &value;

	// To use the value stored in the pointer, it must be cast back to a float
	float* float_ptr = (float*)ptr;
	printf("The value is: %f\n", *((float*)ptr));

	unsigned char a = 10;    // binary: 00001010
	unsigned char b = ~a;    // binary: 11110101

	cout << (2 << 4 << 3) << " " << (int)b << endl;

	int x = 0;
	auto lambda = [&x]() { x++; };
	lambda();
	std::cout << x << std::endl; // prints 1
	lambda();
	std::cout << x << std::endl; // prints 1
*/
/*_110
	std::cout << acronym("As Soo,n As Possible") << std::endl;
	std::cout << acronym("Liquid-crystal display") << std::endl;
	std::cout << acronym("Thank George It's Friday!") << std::endl;
*/
/*_109
	convertN2Decimal("11", 2);
	convertN2Decimal("110", 5);
	convertBinary2Decimal("11");
	convertBinary2Decimal("1000");
	convertBinary2Decimal("10101");
*/
/*_108
	std::stringstream stream("Hello world! How are you?");
	std::string word;

	while (stream >> word) {
		std::cout << word << std::endl;
	}

	// Output:
	// Hello
	// world!
	// How
	// are
	// you?
*/
/*_107
	cout << "dartPoints(0.5, 0.2): " << dartPoints(0.5, 0.2) << endl;
	cout << "dartPoints(0.5, 1.2): " << dartPoints(0.5, 1.2) << endl;
	cout << "dartPoints(0.5, 5.2): " << dartPoints(0.5, 5.2) << endl;
	cout << "dartPoints(0.5, 10.2): " << dartPoints(0.5, 10.2) << endl;
*/
/*_106
#include <unordered_set>
#include <random>

const int NUM_LETTERS = 26;
const int NUM_DIGITS = 10;

class Robot {
private:
	std::string name;
	static std::unordered_set<std::string> names; // Set to store used names
	static std::mt19937 rng; // Mersenne Twister RNG
	static std::uniform_int_distribution<int> letter_dist; // Distribution for letters
	static std::uniform_int_distribution<int> digit_dist; // Distribution for digits

public:
	// Constructor that generates a new random name
	Robot() {
		reset();
	}

	// Reset the robot to its factory settings, generating a new random name
	void reset() {
		std::string new_name;
		do {
			// Generate a new random name
			new_name = "";
			for (int i = 0; i < 2; i++) {
				new_name += 'A' + letter_dist(rng);
			}
			for (int i = 0; i < 3; i++) {
				new_name += '0' + digit_dist(rng);
			}
		} while (names.count(new_name) > 0); // Check if the name is already in use
		// Update the name and add it to the set of used names
		name = new_name;
		names.insert(name);
	}

	// Return the current name of the robot
	std::string getName() const {
		return name;
	}
};

// Initialize the static member variables
std::unordered_set<std::string> Robot::names;
std::mt19937 Robot::rng;
std::uniform_int_distribution<int> Robot::letter_dist(0, NUM_LETTERS - 1);
std::uniform_int_distribution<int> Robot::digit_dist(0, NUM_DIGITS - 1);

void printRandomRobotNames() {
	// Create a robot and print its name
	Robot r1;
	std::cout << "Robot 1: " << r1.getName() << std::endl;

	// Reset the robot and print its new name
	r1.reset();
	std::cout << "Robot 1: " << r1.getName() << std::endl;

	// Create another robot and print its name
	Robot r2;
	std::cout << "Robot 2: " << r2.getName() << std::endl;
}
*/
/*_105
	printIsogram();
	cout << isIsogram("lumberjacks") << endl;
*/
/*_104
	string input_string("()())");
	bool result = true; // TODO: implement the parentheses checker
	result = checkParenthesesForInt(input_string);
	cout << "Input of CheckParentheses: " << result << std::endl;
	cout << "Input of CheckParentheses: " << checkParanthesesLuxSoft("()((()))") << endl;
*/
/*_103
	printisMatchingBrackets("{({[]");
	printisMatchingBrackets("{}({[[]]})");

	printMatchingBrackets("{[()]}}");
	printMatchingBrackets("()())");
	printMatchingBrackets("()((()))");
*/
/*_102
	cout << boolalpha;
	cout << checkParanthesesLuxSoft("())") << endl ;
	cout << checkParenthesesStackIf("())") << endl;
	cout << checkParenthesesForInt("())") << endl;*/
/*_101
	printHexNum("10af8cğ");
	printHexNum("10af8c");
	printHexNum("dA");
*/
/*_100
	printHexNumMap("D");
	printHexNumMap("X");
	printHexNumMap("ADF");
*/
/*_99
	printAtbash("test");
	printAtbash("gvhg");
	printAtbash("gsvjf rxpyi ldmul cqfnk hlevi ,gsvoz abwlt");
*/
/*_98
int hex_to_decimal(const std::string& hex) {
	// Map to store the values of the hexadecimal digits
	std::unordered_map<char, int> hex_values = {
	  {'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, {'4', 4},
	  {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9},
	  {'a', 10}, {'b', 11}, {'c', 12}, {'d', 13}, {'e', 14}, {'f', 15},
	  {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}
	};

	int decimal = 0;
	//int power = 0;

	for (int i = hex.length() - 1, power = 0; i >= 0; i--, power++) {
		// Check if the current character is a valid hexadecimal digit
		//if (hex_values.count(hex[i]) == 0) {
		if (hex2int(hex[i]) == -1) {
			std::cout << "Invalid hexadecimal string" << std::endl;
			return -1;
		}
		// Convert the hexadecimal digit to decimal and add it to the result
		//decimal += hex_values[hex[i]] * std::pow(16, power);
		decimal += hex2int(hex[i]) * std::pow(16, power);
		//power++;
	}

	return decimal;
}
*/
/*_97
	printAmstrongNumber(9);
	printAmstrongNumber(10);
	printAmstrongNumber(153);
	printAmstrongNumber(407);
*/
/*_96
	printLuhnValidation("4539 3195 0343 6467");
	printLuhnValidation("8273 1232 7352 0569");
	printLuhnValidation("4824 6508 7026 0161");
*/
/*_95
	convertTrinary2Decimal("102012");
	convertTrinary2Decimal("01");
	convertTrinary2Decimal("202");
*/
/*_94
int convertTrinary2Decimal(string s) {
	cout << "reverse trinary" << s << endl;
	vector<int> trinaryDigits;
	int decimalResult = 0;
	transform(s.rbegin(), s.rend(), back_inserter(trinaryDigits), [](char c) { return c - '0'; });
	cout << "trinaryDigits " << trinaryDigits[0] << trinaryDigits[1] << endl;
	for (int i=0; i < trinaryDigits.size(); i++) {
		decimalResult += trinaryDigits[i] * pow(3, i);
	}
	cout << "decimalResult" << decimalResult << endl;
	return decimalResult;
}
*/
/*_93
int convertTrinary2Decimal(string s) {
	cout << "reverse trinary" << s << endl;
	vector<int> trinaryDigits;
	int decimalResult = 0;
	//reverse(s.begin(), s.end());
	//cout << "trinary" << s << endl;
	//for (char digits : s) {
	//	//string str(1, digits);  // convert char to string
	//	//trinaryDigits.push_back(stoi(str));
	//	cout << digits << endl;
	//	trinaryDigits.push_back(digits - '0');
	//}
	transform(s.rbegin(), s.rend(), back_inserter(trinaryDigits), [](char c) { return c - '0'; });
	cout << "trinaryDigits " << trinaryDigits[0] << trinaryDigits[1] << endl;

	for (int i=0; i < trinaryDigits.size(); i++) {
		decimalResult += trinaryDigits[i] * pow(3, i);
	}
	//int i = 0;
	//for (auto it = trinaryDigits.rbegin();it != trinaryDigits.rend(); it++)
	//{
	//	decimalResult += *it * pow(3, i);
	//	i++;
	//}
	cout << "decimalResult" << decimalResult << endl;
	return decimalResult;
}
*/
/*_92
	printPrimeFactors(60);
	printPrimeFactors(78);
*/
/*_91
	//{"AUG", "Methionine"},{ "UUU", "Phenylalanine" },{ "UUC", "Phenylalanine" },{ "UUA", "Leucine" },{ "UUG", "Leucine" },
	//{ "UCU", "Serine" },{ "UCC", "Serine" },{ "UCA", "Serine" },{ "UCG", "Serine" },{ "UAU", "Tyrosine" },{ "UAC", "Tyrosine" },
	//{ "UGU", "Cysteine" },{ "UGC", "Cysteine" },{ "UGG", "Tryptophan" },{"UAA", "STOP"},{ "UAG", "STOP" },{ "UGA", "STOP" }
	printTranslateRNA("AUGUUUUCUUUUUAAAUG");	//std::string rna = "AUGUUUUCUUUUUAAAUG"; //AUG-Methionine UUU-Phenylalanine UCU-Serine UAA-STOP
	printTranslateRNA("UAUUGUUAA");
*/
/*_90
	int score = 47;
	//std::cin >> score;

	std::vector<std::string> result = allergies(score);

	if (result.empty()) {
		std::cout << "The person is not allergic to any of the tested allergens." << std::endl;
	}
	else {
		std::cout << "The person is allergic to: ";
		for (const std::string& allergen : result) {
			std::cout << allergen << " ";
		}
		std::cout << std::endl;
	}
*/
/*_89
		std::bitset<8> b;  // Declare an 8-bit bitset

		b.set();  // Set all bits to 1
		std::cout << b << std::endl;  // Outputs "11111111"

		b.reset(2);  // Set the 3rd bit (counting from 0) to 0
		std::cout << b << std::endl;  // Outputs "11111011"

		b.flip(5);  // Flip the 6th bit (counting from 0)
		std::cout << b << std::endl;  // Outputs "11110011"

		b.flip();  // Flip all bits
		std::cout << b << std::endl;  // Outputs "00001100"
*/
/*_88
	printhandshake(secretHandshake(3));
	printhandshake(secretHandshake(19));
*/
/*_87
	sumofmultiples(20);
*/
/*_86
	// Calculate the moment after a gigasecond has passed from the current time
	auto now = std::chrono::system_clock::now();
	auto after_gigasecond = add_gigasecond(now);

	std::cout << "Now: " << now.time_since_epoch().count() << " seconds since epoch" << std::endl;
	std::cout << "After gigasecond: " << after_gigasecond.time_since_epoch().count() << " seconds since epoch" << std::endl;
*/
/*_85
	// Test the convert_number_to_words function with some sample inputs
	std::cout << convert_number_to_words(0) << std::endl;
	std::cout << convert_number_to_words(14) << std::endl;
	std::cout << convert_number_to_words(50) << std::endl;
*/
/*_84
	// Find all the prime numbers up to 10
	int limit = 18;
	vector<int> primes = sieve(limit);

	// Print the prime numbers
	for (int prime : primes)
	{
		cout << prime << " ";
	}
	cout << endl;
*/
/*_83
	// Initialize the positions of the queens
	Queen q1, q2;
	q1.row = 3;
	q1.col = 2;
	q2.row = 6;
	q2.col = 5;

	// Check if the queens can attack each other
	if (canAttack(q1, q2))
	{
		cout << "The queens can attack each other." << endl;
	}
	else
	{
		cout << "The queens cannot attack each other." << endl;
	}
*/
/*_82
	// Find the 6th prime number
	int n = 27;
	cout << nthPrime(n) << endl;
*/
/*_81
	std::cout << collatz_steps(12) << std::endl;  // should print 9
	std::cout << collatz_steps_recursive(12) << std::endl;  // should print 9
*/
/*_80
	std::cout << find_difference(10) << std::endl;  // should print 2640
	std::cout << find_difference_for(10) << std::endl;  // should print 2640
*/
/*_79
	cout << boolalpha;  // print true/false instead of 1/0
	cout << is_valid_isbn("3-598-21508-8") << endl;  // should print true
	cout << is_valid_isbn("3-598-21507-X") << endl;  // should print true
	cout << is_valid_isbn("3-598-21517-8") << endl;  // should print false
*/
/*_78
   printSchoolC98();
	cout << endl;
	printSchoolCSGC14();
	cout << endl;
	printSchoolC17P();
*/
/*_77
	vector<string> candidates = { "enlists", "google", "inlets", "banana" };
	vector<string> anagrams = find_anagrams("listen", candidates);
	for (string anagram : anagrams) {
		cout << anagram << endl;
	}
*/
/*_76
	std::string dna = "GCTAGCAT";
	std::string rna = transcribe_RNA(dna);
	std::cout << "RNA: " << rna << std::endl;

	std::string rna2 = to_rna(dna);
	std::cout << "RNA2: " << rna2 << std::endl;
*/
/*_75
	//auto myMap = count_nucleotides("GATTACA");
	//for (const auto& [key, value] : myMap) {
	for (const auto& [key, value] : count_nucleotides("GATTACA")) {
			std::cout << key << ": " << value << std::endl;
	}
	for (const auto& [key, value] : count_nucleotides("INVALID")) {
		std::cout << key << ": " << value << std::endl;
	}

	//std::cout << count_nucleotides("GATTACA") << std::endl;
	//std::cout << count_nucleotides("INVALID") << std::endl;
*/
/*_74
	std::map<int, std::string> m{ {1, "one"}, {2, "two"}, {3, "three"} };
	for (const auto& [key, value] : m) //C++11 range-based for loop
		std::cout << key << ": " << value << std::endl;
*/
/*_73
	constexpr int value = get_value();//C++20 example
	cout << "value : " << value << endl;
*/
/*_72
	if (__cplusplus == 202002L) std::cout << "C++20\n";
	else if (__cplusplus == 201703L) std::cout << "C++17\n";
	else if (__cplusplus == 201402L) std::cout << "C++14\n";
	else if (__cplusplus == 201103L) std::cout << "C++11\n";
	else if (__cplusplus == 199711L) std::cout << "C++98\n";
	else std::cout << "pre-standard C++\n";
*/
/*_71
	std::cout << hamming_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") << std::endl;  // 7
	std::cout << hamming_distance_count("GAGCCTACTAACGGGAA", "CATCGTAATGACGGCCT") << std::endl;  // 7
*/
/*_70
	std::vector<int> v = { 1, 2, 3, 4, 5, 6 };
	// Count the number of even elements in v
	int num_even = std::count_if(v.begin(), v.end(), is_even);
	// Outputs "Number of even elements: 3"
	std::cout << "Number of even elements: " << num_even << std::endl;
*/
/*_69
	std::string strand1 = "ATGCATGC";
	std::string strand2 = "ATGCTTGC";
	// Count the number of elements in strand1 and strand2 that are different
	int distance = std::inner_product(strand1.begin(), strand1.end(), strand2.begin(), 0, std::plus<>(), [](char c1, char c2) {
		return c1 != c2;
		});
	// Outputs "Distance: 2"
	std::cout << "Distance: " << distance << std::endl;
*/
/*_68
	std::vector<int> v = { 1, 2, 3, 2, 4, 2 };
	// Count the number of elements in v that are equal to 2
	int num_twos = std::count(v.begin(), v.end(), 2);
	// Outputs "Number of 2s: 3"
	std::cout << "Number of 2s: " << num_twos << std::endl;
*/
/*_67
	std::cout << two_fer("Alice") << std::endl;  // One for Alice, one for me.
	std::cout << two_fer("") << std::endl;
*/
/*_66
	string sentence = "The 2quiick brown fox jumps over the lazy dog";
	//getline(cin, sentence); // get the sentence from the user
	// convert the sentence to lowercase
	transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
	cout << endl <<  "sentence: " << sentence << endl;
	// create a boolean array to keep track of which letters have been seen
	bool seen[26] = { false };
	// iterate through the sentence and mark the letters as seen
	for (char c : sentence) {
		if (c >= 'a' && c <= 'z') {
			seen[c - 'a'] = true;
		}
	}
	// check if all the letters have been seen
	bool is_pangram = true;
	for (int i = 0; i < 26; i++) {
		if (!seen[i]) {
			is_pangram = false;
			break;
		}
	}
	// print the result
	if (is_pangram) {
		cout << "The sentence is a pangram." << endl;
	}
	else {
		cout << "The sentence is not a pangram." << endl;
	}
*/
/*_65
	string sentence = "The 2quiick brown fox jumps over the lazy dog";
	unordered_set<char> chars;
	for (char i : sentence)
		if (islower(tolower(i)))////if (isalpha(i) && islower(tolower(i)))
			chars.insert(tolower(i));
	if (chars.size() == 26) {
		cout << "The sentence is a pangram presented by unordered set." << endl;
	}
	else {
		cout << "The sentence is not a pangram by unordered set." << endl;
	}
*/
/*_64
	std::vector<int> v1{ 1, 2, 3, 4, 5 };
	std::vector<int> v2{ 10, 20, 30, 40, 50 };
	std::vector<int> v3(v1.size());  // Create an empty vector to store the results
	// Add corresponding elements from v1 and v2 and store the result in v3
	std::transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), [](int x, int y) { return x + y; });
	cout << "v1 =     x: ";
	for (int x : v1) {std::cout << x << ' ';}
	std::cout << endl;
	cout << "v2 =     y: ";
	for (int x : v2) {std::cout << x << ' ';}
	std::cout << endl;
	cout << "v3 = x + y: ";
	for (int x : v3) {std::cout << x << ' ';}
	std::cout << endl;
*/
/*_63
	const vector<int> v44 = { 1, 2, 3, 4, 5 };
	cout << "v44: ";
	for (auto it = v44.cbegin(); it != v44.cend(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
*/
/*_62
	std::vector<int> v11{ 1, 2, 3, 4, 5 };
	std::vector<int> v22(v11.size());  // Create an empty vector to store the results
	// Increment each element in v1 by 1 and store the result in v2
	std::transform(v11.begin(), v11.end(), v22.begin(), [](int x) { return x + 1; });
	cout << "v22: ";
	for (int x : v22) {
		std::cout << x << ' ';
	}
	std::cout << endl;//'\n'
*/
/*_61
	// Read the size of the array and the elements
	int n;
	cin >> n;

	std::vector<int> arr(n);
	std::vector<int> arr2(n);
	for (int i = 0; i < n; i++)
	{
		//cin >> arr[i];
		arr2[i] = pow(i+1,2);
	}
	int size = static_cast<int>(arr2.size());
	std::cout << "The maximum value of a int is " <<
	std::numeric_limits<int>::max() << std::endl;
	cout << "size: " << size << endl;
	// Print the elements in reverse order
	for (int i = arr.size() - 1; i >= 0; i--)
	{
		cout << arr2[i] << " ";
	}
*/
/*_60
	// Read the size of the array and the elements
	int n=0;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// Print the elements in reverse order
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
*/
/*_59
	int a=4, b=5;
	int* pa = &a, * pb = &b;
	//scanf("%d %d", &a, &b);
	//cout << "enter a b: ";
	//cin >> a >> b;
	//cin >> *pa >> *pb;
	update(pa, pb);
	printf("%d\n%d", a, b);
*/
/*_58
	int a=8, b=7, c=9, d=10;
	cout << "enter a, b, c, d: " << endl;
	//scanf("%d %d %d %d", &a, &b, &c, &d);
	cin >> a >> b >> c >> d;
	int ans = max_of_four(a, b, c, d);
	//printf("%d", ans);
	cout << "max is: "<< ans << endl;
*/
/*_57
	cout << is_pangram("The quick brown fox jumps over the laz dog");
*/
/*_56
	std::cout << raindrops(28) << std::endl;  // should print "Plong"
	std::cout << raindrops(30) << std::endl;  // should print "PlingPlang"
	std::cout << raindrops(34) << std::endl;  // should print "34"
	std::cout << raindrops(3*5*7) << std::endl;  // should print "105"
*/
/*_55
	int a, b;

	// Read in the values of a and b
	cin >> a >> b;

	// Use a for loop to iterate through the range [a, b]
	for (int i = a; i <= b; i++) {
		if (i == 1) {
			cout << "one" << endl;
		}
		else if (i == 2) {
			cout << "two" << endl;
		}
		else if (i == 3) {
			cout << "three" << endl;
		}
		else if (i == 4) {
			cout << "four" << endl;
		}
		else if (i == 5) {
			cout << "five" << endl;
		}
		else if (i == 6) {
			cout << "six" << endl;
		}
		else if (i == 7) {
			cout << "seven" << endl;
		}
		else if (i == 8) {
			cout << "eight" << endl;
		}
		else if (i == 9) {
			cout << "nine" << endl;
		}
		else if (i % 2 == 0) {
			cout << std::to_string(i) <<" even" << endl;
		}
		else {
			cout << std::to_string(i) << " odd" << endl;
		}
	}
*/
/*_54
	const int numSquares = 64;
	unsigned long long totalGrains = 0;
	for (int i = 1; i <= numSquares; i++) {
		unsigned long long grains = pow(2, i - 1);
		totalGrains += grains;
		cout << "Square " << i << ": " << grains << " grains" << endl;
	}
	cout << "Total: " << totalGrains << " grains" << endl;
	std::cout << "The maximum value of a unsigned long long is " <<
	std::numeric_limits<unsigned long long>::max() << std::endl;
*/
/*_53
	space_age2::space_age2 spc(60*60*24*365.25);
	spc.printSpaceTime();
	cout << endl;
	space_age::space_age spc1(60 * 60 * 24 * 365.25 * 1.25);
	spc1.printSpaceTime();
*/
/*_52
	space_age2::space_age2 spc(60*60*24*365.25);
	spc.printSpaceTime();
	//cout << "spc.on_earth(): " << spc.on_earth() << endl;
	//cout << "spc.on_saturn(): " << spc.on_saturn() << endl;
	//cout << "spc.on_neptune(): " << spc.on_neptune() << endl;
	cout << endl;
	space_age::space_age spc1(60 * 60 * 24 * 365.25);
	spc1.printSpaceTime();
	//cout << "spc.on_earth(): " << spc1.on_earth() << endl;
	//cout << "spc.on_saturn(): " << spc1.on_saturn() << endl;
	//cout << "spc.on_neptune(): " << spc1.on_neptune() << endl;
*/
/*_51
 This file defines the main AUTOSAR application class
#include "AutosarApplication.h"

 Include other necessary headers
#include <stdio.h>
#include <string.h>

 Define the main AUTOSAR application class
class AutosarApplication
{
public:
	// Constructor
	AutosarApplication()
	{
		// Initialize data members
		m_version = "1.0.0";
		m_name = "My AUTOSAR Application";
	}

	// Destructor
	~AutosarApplication()
	{
		// Clean up memory, if necessary
	}

	// Public methods
	void printInfo()
	{
		printf("Application version: %s\n", m_version.c_str());
		printf("Application name: %s\n", m_name.c_str());
	}

private:
	// Private data members
	std::string m_version;
	std::string m_name;
};
*/
/*_50
	AutosarApplication autosarApp;
	autosarApp.printInfo();
	autosarApp.setModel("Golf");
	autosarApp.printInfo();
	autosarApp.setAppParams("1.0.1", "My Gotasar Application", "Polo");
	autosarApp.printInfo();
	BMAutosar bmApp("1.0.2", "My AUTOSAR Application", "Passat");
	//	BMAutosar bmApp();
	bmApp.practice();
	bmApp.printInfo();
	bmApp.practice();
	AutosarApplication* a1 = new BMAutosar("1.0.3", "My AUTOSAR Application", "Passat");
	a1->printInfo();
	delete a1;
*/
/*_49
	MyClass c(9);
	std::cout << "c= " << c.getX() << std::endl; // 10

	c.setX(21);
	std::cout << "c= " << c.getX() << std::endl; // 20
*/
/*_48
	string s = "123456";
	cout << "reverseStringStack(): " << s << " : " << reverseStringStack(s) << endl;
	cout << "reverseStringCustom(): " << s << " : " << reverseStringCustom(s) << endl;
	reverseStrReference(s);
	cout << "reverseStrReference(): " << s << " : " << reverseStringCustom(s) << endl;
	reverseStrPointer(&s);
	cout << "reverseStrPointer(): " << s << " : " << reverseStringCustom(s) << endl;
	cout << "reverseStrInbuilt(): " << s << " : " << reverseStrInbuilt(s) << endl;
	cout << "reverseStrWhile(): " << s << " : " << reverseStrWhile(s) << endl;
	reverseStrRecursiveTwoPtr(s, s.length()-1,0);
	cout << "reverseStrRecursiveTwoPtr(): " << s << " : " <<  endl;

	reverseStrRecursiveOnePtr(s, 0);
	cout << "reverseStrRecursiveOnePtr(): " << s << " : " << endl;

	string* revp = new string(s.rbegin(), s.rend());
	cout << "reverseStrNewHeapConstructor(): " << *revp << " : " << endl;
	delete revp;

	string rev = string(s.rbegin(), s.rend());
	cout << "reverseStrStackConstructor(): " << rev << " : " << endl;

	std::string foo("[std::string foo] since it's on the stack, it will auto delete out of scope");
	std::string* foop = new std::string("[std::string* foop] allocated on the heap needs explicit destruction by [delete foop]");
	cout << foo << endl;
	cout << *foop << endl;
	delete foop;
	cout << "reverseStrTempStr(): " << s << " : " << reverseStrTempStr(s) << endl;

	char const* ss = "1234567890";
	printf("%s ", reverseConstCharSwap(ss));
	cout << reverseConstCharSwap(ss) << endl;

	cout << "reverseConstCharSwap(): " << ss << " : " << reverseConstCharSwap(ss) << endl;
	cout << "reverseConstCharCStyle(): " << ss << " : " << reverseConstCharCStyle(ss) << endl;
	cout << "reverseStrAppend(): " << ss << " : " << reverseStrAppend(ss) << endl;
	cout << "reverseStrIterator(): " << ss << " : " << reverseStrIterator(ss) << endl;
	cout << "reverseStrForEachLambda(): " << ss << " : " << reverseStrForEachLambda(ss) << endl;
	cout << "reverseStrConstructer(): " << ss << " : " << reverseStrConstructer(ss) << endl;
*/
/*_47
	int* ptr;
	if (ptr == nullptr) {
	}
*/
/*_46
    string s = "12345";
	cout << reverse_string(s) << endl;
*/
/*_45
__interface MyInterface {
	void MyInterfaceMethod1();
	void MyInterfaceMethod2();
};

public class MyBaseClass{
	virtual void MyBaseMethod1();
	virtual void MyBaseMethod2();
};

public class MyDerivedClass: public MyInterface, MyBaseClass
public:
	void MyInterfaceMethod1() override
	{
		throw std::logic_error("The method or operation is not implemented.");
	public:
		void MyInterfaceMethod2() override
		{
			throw std::logic_error("The method or operation is not implemented.");
		}

	private:
		void MyBaseMethod1() override
		{
			throw std::logic_error("The method or operation is not implemented.");
		}


		void MyBaseMethod2() override
		{
			for (int Index = 0; Index < Length ; Index++)
			{
				for (int Index = Length - 1; Index >= 0 ; Index--)
				{

				}
			}
		}

	}

	{};


*/
/*_44
	float top = 132.0;
	int day = 0;
	cout << "How many days: " << endl;
	while (day != 1) {
		cin >> day;
		for (int i = 0; i < day; i++) {
			top = top * 1.05;
		}
		cout << "top: " << top << endl;
		top = 132.0;
	}

*/
/*_43
    cout << namespace1::age << endl;
    cout << namespace2::age << endl;
    cout << namespace1::name << endl;
*/
/*_42
    NodeTree* root = createNodeTree(1);
    root->left = createNodeTree(2);
    root->right = createNodeTree(3);
    root->left->left = createNodeTree(4);
    root->left->right = createNodeTree(5);
    root->right->left = createNodeTree(6);
    root->right->right = createNodeTree(7);
    root->left->right->left = createNodeTree(9);
    root->right->right->left = createNodeTree(15);

    printTreePreOrder(root);
    cout << endl;
    printTreeInOrder(root);
    cout << endl;
    printTreePostOrder(root);
*/
/*_41
    fstream myFile;
    myFile.open("sladina.txt", ios::in);
    if (myFile.is_open()) {
        string line;
        while (getline(myFile,line)) {
            cout << line << endl;
        }
        myFile.close();
    }
    //myFile.open("sladina.txt", ios::out);
    //if (myFile.is_open()) {
    //    myFile << "hello\n";
    //    myFile << "this is second line\n";
    //    myFile.close();
    //}
    //myFile.open("sladina.txt", ios::app);
    //if (myFile.is_open()) {
    //    myFile << "hello2\n";
    //    myFile.close();
    //}

*/
/*_40
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = NULL;
    printList(head);
    //printList(second);

    insertAtTheFront(&head, -1);
    printList(head);

    insertAtTheEnd(&head, 37);
    printList(head);

    insertAfter(second, 37);
    printList(head);

*/
/*_39
    NodeDLL* head;
    NodeDLL* tail;

    NodeDLL* nodeDLL = new NodeDLL();
    nodeDLL->value = 5;
    nodeDLL->next = nullptr;
    nodeDLL->previous = nullptr;
    head = nodeDLL;
    tail = nodeDLL;

    nodeDLL = new NodeDLL();
    nodeDLL->value = 6;
    nodeDLL->next = nullptr;
    nodeDLL->previous = tail;
    tail->next = nodeDLL;
    tail = nodeDLL;

    nodeDLL = new NodeDLL();
    nodeDLL->value = 7;
    nodeDLL->next = nullptr;
    nodeDLL->previous = tail;
    tail->next = nodeDLL;
    tail = nodeDLL;

    nodeDLL = new NodeDLL();
    nodeDLL->value = 8;
    nodeDLL->next = nullptr;
    nodeDLL->previous = tail;
    tail->next = nodeDLL;
    tail = nodeDLL;

    nodeDLL = new NodeDLL();
    nodeDLL->value = 37;
    nodeDLL->next = nullptr;
    nodeDLL->previous = tail;
    tail->next = nodeDLL;
    tail = nodeDLL;

    printForward(head);
    printBackward(tail);

*/
/*_38
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks{ "thunder shock","tail whip","quick attack" };
    list<string> charmanderAttacks{ "flame thrower", "scary face" };
    list<string> chikoritaAttacks{ "razor leaf", "posion powder" };

    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
//    pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));
    pokedex.insert(pair<string, list<string>>("Chikorita", { "razor leaf", "posion powder" }));

    list <string> updateList{ "razor leaf8", "posion powder9" };
    pokedex["Chikorita"] = updateList;

    for (auto mapPair : pokedex) {
        cout << mapPair.first << " - ";
        for (auto attacklist : mapPair.second)
            cout << attacklist << ", ";
        cout << endl;
    }
*/
/*_37
    cout << "recme a food: " << recMeFood('a') << endl; //#include food.h
*/
/*_36
    float top = 1.0;
    int day = 0;
    cout << "How many days: " << endl;
    while (day != 1) {
        cin >> day;
        for (int i = 0; i < day; i++) {
            top = top * 1.1;
        }
        cout << "top: " << top << endl;
    }
*/
/*_35
    map<string, string> myDictionary;
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
    myDictionary["strawberry"] = "Die Erdbeere";
    //myDictionary.clear();
    cout << myDictionary.size() << endl;
    myDictionary.erase("apple");
    //int i = 1;
    for (auto dictPair : myDictionary) {
        static int i=1;
        cout << "myDictionary"<<i<<" "<<dictPair.first << " = " << dictPair.second << endl;
        i++;
    }
*/
/*_34
    C obj;
    obj("Operator");
*/
/*_33
    vector<int> v;
    deque<int> d;
    list<int> l;
    for (int i = 0; i < 10; i++) {
        v.push_back(i + 1);
        d.push_back(i + 1);
        l.push_back(i + 1);
    }
    cout << "\nElements of vector : ";
    for (auto iterator = v.begin(); iterator != v.end(); iterator++) {
        cout << *iterator << " ";
    }
    cout << "\nElement of deque : ";
    for (auto itr = d.begin(); itr != d.end(); itr++) {
        cout << *itr << " ";
    }

    cout << "\nElement of list : ";
    for (auto itr = l.begin(); itr != l.end(); itr++) {
        cout << *itr << " ";
    }
*/
/*_32
    vector<int> myNumbers = { 2,5,1,3,6,4 };
//    vector<int> myNumbers2 = { 2,5,1,3,6,4 };
    //bool(*funcPtr1)(int, int);
    bool(*funcPtr1)(int, int) = descendingCompare;
    //funcPtr1 = descendingCompare;
    customSort(myNumbers, funcPtr1);
    printNumbers(myNumbers);
    funcPtr1 = ascendingCompare;
    customSort(myNumbers, funcPtr1);
    printNumbers(myNumbers);
    //sortDescending(myNumbers);
    //printNumbers(myNumbers);
    //sortAscending(myNumbers);
    //printNumbers(myNumbers);
//    int(*funcPtr)();
    int(*funcPtr)(int, int);
    funcPtr = add;
    cout << funcPtr(2,8) << endl;
    cout << add << endl;
    //cout << getNumber();

*/
/*_31
    int ch;

    for (ch = 75; ch <= 100; ch++) {
        printf("ASCII value = %d, Character = %c\n", ch, ch);
    }
*/

/*_30
    weak_ptr<MyClass> wePtr1;

    {
        shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
        wePtr1 = shPtr1;
    }

    //weak_ptr<int> weptr1;
    //{
    //    shared_ptr<int> shPtr1 = make_shared<int>(25);
    //    wePtr1 = shPtr1;
    //}

    //{
    //shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
    //cout << "shared count: " << shPtr1.use_count() << endl;
    //{
    //    shared_ptr<MyClass> shPtr2 = shPtr1;
    //    cout << "shared count: " << shPtr1.use_count() << endl;
    //}
    //cout << "shared count: " << shPtr1.use_count() << endl;
    //}

    //{
    //    unique_ptr<MyClass> unptr1 = make_unique<MyClass>();
    //}

    //unique_ptr<int> unptr1 = make_unique<int>(25);
    //unique_ptr<int> unptr2 = move(unptr1);
    //cout << *unptr2 << endl;
    //cout << *unptr1 << endl;

*/

/*_29
    EyeColor eyeColor = Green;
    cout << "Eye color: " << eyeColor << endl;
    getEyeColorDetails(Blue);
    //    int userInput;
    //    cout << "please enter your eye color for us:... " << endl;
    //    cin >> userInput;

    EyeColor eyeColor1;
    //eyeColor1 = (EyeColor) userInput;
//    for (int eyeColor1 = Brown; eyeColor1 != Other ; eyeColor1++) {
//        switch (eyeColor1) {
//            case Brown: cout << "your eyes are brownie" << endl; break;
//            case Blue: cout << "your eyes are deep blue like ocean" << endl; break;
//            case Green: cout << "your eyes are green like heaven" << endl; break;
//            case Gray: cout << "your eyes are just gray" << endl; break;
//            case Heterochromia: cout << "your eyes are heterochromia which i don't know the meaning" << endl;break;
//            case Other: cout << "your eyes are not able to be categorised by us for now" << endl; break;
//            default: cout << "you entered a color type which is not supported in our system" << endl; break;
//        }
//    }

*/
/*_28
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
#include <iostream>
#include <string>

using namespace std;
// Implement a function, which would check the parentheses correctness
// Given a string, for example: "()()", "((()))" are valid
// Examples of faulty parentheses combination: "()())", ")("

bool checkParantheses (string str){
    int leftPar = 0;
    int rightPar = 0;
    for (int i=0;i<sizeof(str);i++){ //")(");
        if (str[i] == '('){
            leftPar++;
        } else if (str[i] == ')')
        {
            rightPar++;
            if (rightPar > leftPar ){
                return false;
            }
        }
      //  if (leftPar == rightPar){
      //        leftPar = 0;
      //        rightPar
      //    }
    }
    cout << "leftPar: " << leftPar << endl;
    cout << "rightPar: " << rightPar << endl;
    //cout << "str:" << str << endl;

    if (leftPar == rightPar){
        return true;
    }else{
        return false;
    }
}

int main()
{
    string input_string("()())");
    bool result = true; // TODO: implement the parentheses checker
    result = checkParantheses(input_string);
    cout << "Input of CheckParentheses: " << result << std::endl;

    return 0;
}

*/

/*_27
    User u;
    SuperUser s;
    list<User*>users;
    users.push_back(&u);
    users.push_back(&s);
    for (User* usrPtr : users){
        usrPtr->getPermissions();
    }
*/
/*_26
    cout << sumNumbers(1,2) << endl;
    cout << sumNumbers(1,2,3)<<endl;
*/
/*_25
    vector<int> numbers;

    numbers.push_back(0);
    for (int i = 1; i < 10; ++i) {
        numbers.push_back(i);
    }

    numbers.insert(numbers.begin()+5,88);
    numbers.erase(numbers.begin()+5);
    numbers.pop_back();

    for (auto it = numbers.begin(); it != numbers.end();it++){
        cout << *it << endl;
        cout << &it << endl;
        cout << &(*it) << endl;
    }
    cout << "Size: " << numbers.size()<<endl;
    cout << "Max Size: " << numbers.max_size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;
    numbers.resize(5);
    cout << "Size: " << numbers.size() << endl;
    if (numbers.empty())
        cout << "Vector is empty\n";
    else
        cout << "Vector is not empty\n";
    cout << "Element[0] is: " << numbers[2] << endl;
    cout << "Element at(0) is: " << numbers.at(4) << endl;
    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;
    numbers.clear();
    cout << "After clear vector size: " << numbers.size() << endl;

    auto it2 = numbers.cbegin();
    //*it2 = 20;
    cout << "*(it2 + 5) = " << *(it2 + 5) << endl;
    cout << "*it = " << *it2;
*/
/*_24
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    printQueueElements(myQueue);

    cout << "Queue size is: " << myQueue.size() << endl;
    cout << "First element is " << myQueue.front() << endl;
    cout << "Last element is " << myQueue.back() << endl;
*/
/*_23
    stack<int> numbersStack;
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    //numbersStack.pop();
    //numbersStack.pop();
    //numbersStack.pop();
    printStackElements(numbersStack);

    if(numbersStack.empty())
        cout << "stack is empty\n";
    else
        cout << "stack is not empty\n";
    cout << "stack size is: " << numbersStack.size() << endl;
*/
/*_22
//    struct {
//        void operator()(int x){
//            cout << x << endl;
//        }
//    }something;
    int d = 3, e=5;
    vector <int> v{37,2,3,7,14,23};
//    for_each(v.begin(),v.end(),something);
//    for_each(v.begin(),v.end(),[](int x){cout << x << endl;});
//    for_each(v.begin(),v.end(),[&d,e](int x){
//    for_each(v.begin(),v.end(),[=](int x){
    for_each(v.begin(),v.end(),[&](int x){
        if (x%d==0){
            cout << x << " is divisible by " << d << endl;
        }else{
            cout << x << " is not divisible by " << d << endl;
        }
        cout << d << " " << e << endl;
        d = 7;
        cout << d << endl;
    });
*/
/*_21
    EquilateralTriangle equilateralTriangle;
    Homework homework;
    equilateralTriangle.setA(3);
//    cout << "circumference = " << equilateralTriangle.circumference << endl;
//    cout << "area = " << equilateralTriangle.area << endl;
    homework.printResults(equilateralTriangle);
    //printResults(equilateralTriangle);
*/
/*_20
    std::map <std::string , int> forecastMap = {
            {"New York",15},
            {"Berlin",10},
            {"istanbul",20}
    };
    std::thread bgWorker(refreshForecast,forecastMap);

//    return 0;
    system("pause>nul");
*/
/*_19
    thread worker1 (function1,'o');
    thread worker2 (function2);
*/
/*_18
    SmartPhone* s1 = new AndroidPhone();
    SmartPhone* s2 = new Iphone();
    SmartPhone* s3 = new NokiaPhone();

    SmartPhone* phones[3] = {s1,s2, s3};
    for (int i=0;i<3;i++){
        phones[i]->takeASelfie();
        phones[i]->makeACall();
    }
//    s1->takeASelfie();
//    s2->takeASelfie();
*/
/*_17
// try catch throw
    Printer myPrinter ("HP Deskjet 1234",10);
    try {
        myPrinter.print("Hello my name is CSG. I am Software Engineer...");
        myPrinter.print("Hello my name is CSG. I am Software Engineer...");
        myPrinter.print("Hello my name is CSG. I am Software Engineer...");
    }
    catch(const char* txtException ) {
        cout<<txtException<<endl;
    }
    catch(int intException ) {
        cout<<intException<<endl;
    }
    catch(...) {
        cout<<"Exception!"<<endl;
    }
*/
/*_16
//    Instrument i1;
    Instrument* i1 = new Accordion();
    Instrument* i2 = new Piano();
    Instrument* instruments[2] = {i1,i2};
    for (int i=0;i<2;i++){
        instruments[i]->makeSound();
    }
//    i1->makeSound();
//    i2->makeSound();
*/
/*_15
    NodeTree* root = createNodeTree(1);
    root->left = createNodeTree(2);
    root->right = createNodeTree(3);
    root->left->left = createNodeTree(4);
    root->left->right = createNodeTree(5);
    root->right->left = createNodeTree(6);
    root->right->right = createNodeTree(7);
    root->left->right->left = createNodeTree(9);
    root->right->right->left = createNodeTree(15);
*/
/*_14
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value =1 ;
    head->next = second;
    second->value =2;
    second->next=third;
    third->value=3;
    third->next=NULL;
    printList(head);
    printList(second);
*/
/*_13
    int rows,cols;
    cout<<"rows, cols:";
    cin >> rows >> cols;

    int** table = new int*[rows];
    for (int i=0;i<rows;i++){
        table[i]=new int[cols];
    }
    table[1][2] = 88;
    cout<<table[1][1]<<" "<<table[1][2];
    for(int i=0;i<rows;i++){
        delete[] table[i];
        table[i]=NULL;
    }
    delete[] table;
    table = NULL;
*/
/*_12
    int size;
    cout<<"Size: ";
    cin>>size;
    int* myDynamicArray = new int[size];
    for (int i=0;i<size;i++){
        cout<< "Array["<<i<<"] ";
        cin>>myDynamicArray[i];
    }
    for (int i = 0; i < size; ++i) {
        cout<<myDynamicArray[i]<<" ";
        cout<<*(myDynamicArray+1)<<" ";
    }
    delete[] myDynamicArray;
    myDynamicArray=NULL;
*/
/*_11
    int min=0, max=0;
    int numbers[5] = {5,4,-2,29,6};
    cout<<"Min is "<<getMin(numbers,5)<<endl;
    cout<<"Max is "<<getMax(numbers, 5)<<endl;
    getMinAndMax(numbers,5,&min,&max);
    cout<<endl<<"min is "<<min<<endl;
    cout<<"max is "<<max<<endl;
*/
/*_10
//    int luckyNumbers[5] = {2,3,5,7,9};
//    cout<<luckyNumbers<<endl;
//    cout<<&luckyNumbers[1]<<endl;
//    cout<<luckyNumbers[2]<<endl;
//    cout<<*(luckyNumbers+3)<<endl;
    int luckyNumbers[5];
    for (int i=0;i<5;i++){
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }
    cout <<"luckyNumbers: ";
    for (int i=0;i<5;i++){
        cout << *(luckyNumbers + i)<<" " ;
    }

*/
/*_09
    int number = 5;
    char letter = 'c';
    print (&number, 'i');
    print (&letter, 'c');
*/
/*_08
    int n = 5;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout<<*ptr<<endl;
    cout<<n<<endl;
    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout<<*ptr2<<endl;
*/
/*_07
    CookingYoutubeChannel cookingYoutubeChannel("Amy's Kitchen","Amy");
    cookingYoutubeChannel.publishVideo("Apple pie");
    cookingYoutubeChannel.publishVideo("Chocolate cake");
    cookingYoutubeChannel.setSubscriberCount(5);
    cookingYoutubeChannel.practice();
    SingersYoutubeChannel singersYoutubeChannel("John Sings","John");
    singersYoutubeChannel.practice();
    singersYoutubeChannel.practice();
    singersYoutubeChannel.practice();
    singersYoutubeChannel.practice();
    singersYoutubeChannel.practice();
    singersYoutubeChannel.practice();
    singersYoutubeChannel.checkAnalytics();
    cookingYoutubeChannel.checkAnalytics();

    YouTubeChannel* yt1 = &cookingYoutubeChannel;
    YouTubeChannel* yt2 = &singersYoutubeChannel;

    yt1->checkAnalytics();
    yt2->checkAnalytics();
    //cookingYoutubeChannel.getInfo();
    //singersYoutubeChannel.getInfo();
*/

/*_06
    CookingYoutubeChannel cookingYoutubeChannel("Amy's Kitchen","Amy");
    CookingYoutubeChannel cookingYoutubeChannel1("John's Kitchen", "John");

    cookingYoutubeChannel.publishVideo("Apple pie");
    cookingYoutubeChannel.publishVideo("Chocolate cake");
    cookingYoutubeChannel.setSubscriberCount(5);
    cookingYoutubeChannel.practice();
    cookingYoutubeChannel1.practice();
    cookingYoutubeChannel.getInfo();

*/

/*_05
    YouTubeChannel youTubeChannel("CodeBeauty", "Saldina");
    youTubeChannel.publishVideo("C++ for beginners");
    youTubeChannel.publishVideo("HTML & CSS for beginners");
    youTubeChannel.publishVideo("C++ OOP");
    youTubeChannel.setSubscriberCount(5);
    youTubeChannel.subscribe();
    youTubeChannel.subscribe();
    youTubeChannel.unsubscribe();
    youTubeChannel.getInfo();

    YouTubeChannel youTubeChannel1("AmySings", "Amy");
    youTubeChannel1.publishVideo("Strangers in the night");
    youTubeChannel1.setSubscriberCount(10);
    youTubeChannel1.getInfo();
*/

/*_04
    YouTubeChannel youTubeChannel;
    youTubeChannel.name="CodeBeauty";
    youTubeChannel.ownerName="CodeBeauty";
    youTubeChannel.subscriberCount=1850;
    youTubeChannel.publishedVideoTitles={"C++ for beginners Video 1","HTML & CSS Video 1","C++ OOP Video 1"};
    cout << "Name: " << youTubeChannel.name << endl;
    cout << "Owner Name: " << youTubeChannel.ownerName<< endl;
    cout << "Subscriber Count: " << youTubeChannel.subscriberCount<< endl;
    cout << "Videos: " << endl;
    for (string videoTitle : youTubeChannel.publishedVideoTitles){
        cout << videoTitle << endl;
    }
*/

/*_03
   int a=1, b=6;
   cout << " Sum = " << recursive_sum(a,b) << endl;
   int c=3,d=4;
   for (int i=1;i<7;i++){
      cout << " Factorial of " << i << " is = " << recursive_factorial(i) << endl;
   }
   cout << " Factorial of " << c << " is = " << recursive_factorial(c) << endl;
   cout << " Factorial of " << d << " is = " << recursive_factorial(d) << endl;

*/

/*_02
   int a=5, b=7;
   cout << a << " - " << b << endl;
   Swap<int>(a,b);
   cout << a << " - " << b << endl;

   char c='c', d='d';
   cout << c << " - " << d << endl;
   Swap<char>(c,d);
   cout << c << " - " << d << endl;
*/

/*_01
int main()
{
cout << "c++ welcome to CSG " << endl;

return 0;

}
*/






/*_501
create table Users(
       Id int not null,
       Name varchar(30) not null,
       Age int not null,
       primary key (Id)
);
*/

/*_502
select * from users;
*/

/*_503
insert into users (Id, Name, Age) values (3,'gah bili bili bili geyts:)',65);
*/

/*_504
create table Students(
       Id int not null,
       Name varchar(30) not null,
       Grade int not null,
       Age int not null,
       primary key (Id)
);
*/

/*_505
create table MembershipTypes(
       MembershipId int not null,
       MembershipName varchar(50) not null,
       primary key (MembershipId)
);

create table GymUsers(
       GymUserId int not null,
       MembershipId int,
       FirstName varchar(30) not null,
       LastName varchar(30) not null,
       primary key (GymUserId),
       foreign key (MembershipId) references MembershipTypes(MembershipId)
);

*/
/*_506
insert into membershiptypes (membershipid, membershipname) values (1,'Weekly2');
insert into membershiptypes (membershipid, membershipname) values (2,'Monthly');
insert into membershiptypes (membershipid, membershipname) values (3,'Yearly');

*/
/*_507
insert into gymusers (gymuserid, firstname, lastname, membershipid) values
(1, 'Sladina', 'Nurak', 3)

insert into gymusers (gymuserid, firstname, lastname, membershipid) values
(2, 'bili bili', 'geyts', 2)

insert into gymusers (gymuserid, firstname, lastname, membershipid) values
(3, 'elonara', 'mask', 1)

*/
/*_508
select * from gymusers
where membershipId=:membershipid
*/
/*_509

*/


/*_1000
	std::string reverse_string (std::string input){
		std::stack<char> st;
		std::string output;
		for (char x : input){
			st.push(x);
		}
		while(!st.empty()){
			output.push_back(st.top());
			st.pop();
		}
		return output;
	}
*/
/*_1001

*/
/*_1002

*/
/*_1003

*/
/*_1004

*/
/*_1005

*/
/*_1006

*/
