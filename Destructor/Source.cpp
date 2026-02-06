
#pragma once
#include <iostream>
#include "Person.h"
using namespace std;


int main()
{
	Person* arr = new Person[5];

	cout << "Count після створення масиву: " << Person::count << endl;

	delete[] arr;

	cout << "Count після відалення масиву: " << Person::count << endl;

	return 0;








}////по завершенню роботи функціі обьект Person student; зруйнується