#include <iostream>

using namespace std;

class AbstractEmployee {
	virtual void askForPromotion() = 0;
};

class Employee: AbstractEmployee {
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
	void askForPromotion() {
		if (age > 30) {
			cout << name << " got promoted!" << endl;
		} else {
			cout << name << ", sorry NO promotion for you" << endl;
		}
	}
};

int main() {

	Employee employee1 = Employee("Daniel", "Apple", 20);
	Employee employee2 = Employee("Romanet", "Google", 33);

	employee1.askForPromotion();
	employee2.askForPromotion();

	return 0;
}