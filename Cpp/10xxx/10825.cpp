#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
	string name;
	int kor, eng, math;
};

bool cmp(Student a, Student b) {
	if (a.kor != b.kor)
		return a.kor > b.kor;
	if (a.eng != b.eng)
		return a.eng < b.eng;
	if (a.math != b.math)
		return a.math > b.math;
	return a.name < b.name;
}

int main() {
	int n;

	cin >> n;

	vector<Student> students(n);

	for (int i = 0; i < n; i++){
		cin >> students[i].name >> students[i].kor >> students[i].eng >> students[i].math;
	}

	sort(students.begin(), students.end(), cmp);

	for (auto p : students) {
		cout << p.name << "\n";
	}

	return 0;
}
