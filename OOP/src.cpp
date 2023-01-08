#include <iostream>

using namespace std;

class Employee {
private:
	string name;
	string company;
	int age;
public:
	// Setters
	void setName(string sName) {
		name = sName;
	}
	void setCompany(string sCompany) {
		company = sCompany;
	}
	void setAge(int sAge) {
		age = sAge;
	}
	// Getters
	string getName() {
		return name;
	}
	string getCompany() {
		return company;
	}
	int getAge() {
		return age;
	}
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

	employee1.setAge(34);
	cout << employee1.getName() << " is " << employee1.getAge() << " years old." << endl;

	return 0;
}