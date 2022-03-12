#pragma once
#include<iostream>
#include "Functions.h"
using namespace std;

void Start() {

	ShowMenu();
	int select = 0;
	cout << "\nEnter the option: ";
	cin >> select;
	system("cls");
	if (select == 1) {
		//ShowTeachers
		ShowAllTeachers(teachers);
	}
	else if (select == 2) {
		//Create Group
		auto group = getGroup();
		AddnewGroups(group);
		cout << "New group has been successfully submitted !!!" << endl;
	}
	else if (select == 3) {
		//ShowAllGroups

		ShowAllGroups(groups);
	}
	else if (select == 4) {
		//GetNewStudent
		AddNewStudent(students);
		cout << "\nNew Student has been successfully added !!!\n";
	}
	else if (select == 5) {
		//GetNewTeacher
		AddNewTeacher(teachers);
		cout << "\nNew Teacher has been successfully added !!!\n";
	}
}
