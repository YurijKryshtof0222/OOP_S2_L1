#include <string>
#include <fstream>

using namespace std;

class Student
{
private:
	string lastname;
	string firstname;
	string group;
public:
	Student(string ln, string fn, string group = " ") :
		lastname(ln), firstname(fn) { }

	string getFirstname() 
	{
		return firstname;
	}

	string getLastname()
	{
		return lastname;
	}

	string getGroup()
	{
		return group;
	}

	void setGroup(string group) 
	{
		this->group = group;
	}

	friend istream& operator >> (istream& is, Student& s)
	{
		is >> s.lastname >> s.firstname >> s.group;
		return is;
	}

	friend ostream& operator << (ostream& os, Student& s)
	{
		os << s.lastname << "\t" << s.firstname << "\t" << s.group << " ";
		return os;
	}
};