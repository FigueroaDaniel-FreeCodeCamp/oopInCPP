#include <iostream>

using namespace std;

class Employee {
public:
	string name;
	string company;
	int age;

	void introduceYourself() {
		cout << "Name - " << name << endl;
		cout << "Company - " << company << endl;
		cout << "Age - " << age << endl;
	}
};

int main() {

	Employee employee1;
	employee1.name = "Daniel";
	employee1.company = "Apple";
	employee1.age = 30;
	employee1.introduceYourself();

	return 0;
}