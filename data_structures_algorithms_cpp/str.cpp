// Structure: used for user-defined datatypes
// Define structure
// Size of Structure
// Used to defined things having multiple values and attributes; consider example of a Rectangle

#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct Rectangle {
	int len;  // takes 2-bytes
	int breath; // takes 2-bytes
};

struct Complex {
	// defining complex number using Structure
	// a + ib -> a, b are the real numbers 
	// ib -> collectively is an immaginary number
	int real;
	int img;

};

struct Student {
	int age; // student's age
	int id; // student's id 
	string cls; // student's class
	//char first[10]; // first name
	//char last[10]; // last name
	//char dept[20]; // department
	//char address[50]; // address
	
	// memory consumed in bytes; age = 4, id = 4, cls = 10, first = 10, second = 10, dept = 20, address = 50;
	// 4 + 4 + 10 + 10 + 10 + 20 + 50 = 108 bytes

};


int main() {
	// struct rectangle r{10, 15}; // declare + initialize the structure
	
	struct Student s;
	s.age = 15;
	s.id = 11;
	s.cls = "class";
	//s.first = "fist_";
	//s.last = "last_";
	//s.dept = "maths";
	//s.address = "std add";

	cout << s.id << '\n';
	cout << s.age<< '\n';
	for (int i = 0; i < 5; i++) {
		cout << s.cls[i] << '\n';
	}
	//cout << s.first<< '\n';
	//cout << s.last<< '\n';
	//cout << s.dept<< '\n';
	//cout << s.address << '\n';
	return 0;

}
