#include <iostream>

using namespace std;

class AbstractEmployee {
	virtual void askForPromotion() = 0;
};

class Employee: AbstractEmployee {
private:
	string company;
	int age;
protected:
	string name;
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

class Developer : public Employee {
public:
	string favProgrammingLanguage;
	Developer(string cName, string cCompany, int cAge, string cFavProgrammingLanguage)
		: Employee(cName, cCompany, cAge) {
		favProgrammingLanguage = cFavProgrammingLanguage;
	}
	void fixBug() {
		cout << name << " fixed bug using " << favProgrammingLanguage << endl;
	}
};

class Teacher : public Employee {
public:
	string subject;
	void prepareLesson() {
		cout << name << " is preparing " << subject << " lesson" << endl;
	}
	Teacher(string cName, string cCompany, int cAge, string cSubject)
		: Employee(cName, cCompany, cAge) {
		subject = cSubject;
	}
};

int main() {

	Developer d = Developer("Daniel", "Apple", 31, "JavaScript");
	d.fixBug();
	d.askForPromotion();
	Teacher t = Teacher("Romanet", "School", 27, "History");
	t.prepareLesson();

	return 0;
}