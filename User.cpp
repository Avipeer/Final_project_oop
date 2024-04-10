#include "User.h"


void User::Print(int course_id) const {
	if (course_id > 9999 && course_id < 100000) {
		string f_name = "courses.csv";
		int id = 11101;
		char f[6] = {'1','1','1' ,'0' ,'1' ,'\0'};
		string course;
		course = f;
		string fullname = course + "_yes";
		fstream courses_f(f_name, ios::in);
		if (!courses_f) {
			throw("Cannot open file.\n");
		}
		//cout << "success";
		string s;
		int a;
		courses_f >> a;
		while (getline(courses_f, s)) {
			if (a == course_id) {
				cout << a << s << endl;
				break;
			}
			else {
				if (courses_f.eof()) {
					cout << " Course id not found" << endl;
					break;
				}
				courses_f >> a;

			}
		}

	}
	else {
		cout << " Invalid course id" << endl;
	}
}
//void User::PrintCourse() const {
//
//}
//void User::More() const {
//
//}

void main() {
	fsteam current_file;
	current_file >> a;
	User a;
	a.Print(11101);
}