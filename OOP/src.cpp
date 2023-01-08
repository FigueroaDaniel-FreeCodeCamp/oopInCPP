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
	Employee(string cName, string cCompany, int cAge) {
		name = cName;
		company = cCompany;
		age = cAge;
	}
};

int main() {

	Employee employee1 = Employee("Daniel", "Apple", 30);
	//employee1.name = "Daniel";
	//employee1.company = "Apple";
	//employee1.age = 30;
	employee1.introduceYourself();

	Employee employee2 = Employee("Romanet", "Google", 33);
	employee2.introduceYourself();

	return 0;
}