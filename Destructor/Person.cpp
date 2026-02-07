#include "Person.h"


int Person::count = 0;


Person::Person()
{
	mf = nullptr;
	name = nullptr;
	lastName = nullptr;
	phone = nullptr;
	age = 0;

	count++;
}

Person::Person(int ag, const char* m_f, const char* nm, const char* fn, const char* phn)
{
	age = ag;

	int size = strlen(m_f) + 1;
	mf = new char[size];
	strcpy(mf, m_f);

	size = strlen(nm) + 1;
	name = new char[size];
	strcpy(name, nm);

	size = strlen(fn) + 1;
	lastName = new char[size];
	strcpy(lastName, fn);

	size = strlen(phn) + 1;
	phone = new char[size];
	strcpy(phone, phn);

	count++;
}

Person::~Person()
{
	cout << "Destructor" << endl;
	delete[] mf;
	delete[] name;
	delete[] lastName;
	delete[] phone;

	count--;
}


 inline void  Person::Output() const
{
	cout << "Name: " << name << endl;
	cout << "Fisrt name: " << lastName << endl;
	cout << "Age: " << age << endl;
	cout << "M/F: " << mf << endl;
	cout << "Phone: " << phone << endl;
}

 inline int Person::GetAge() const
{
	return age;
}

 inline void Person::SetAge(int ag)
{
	if (ag > 13)
		age = ag;
}

 inline void Person::SetName(const char* nm)
{
	if (strlen(nm) >= 30)
		return;
	if (name)
		delete[] name;

	int size = strlen(nm) + 1;
	name = new char[size];

	strcpy(name, nm);
}


 inline const char* Person::GetName() const
{
	return name;
}

void Person::Print() const
{

}
