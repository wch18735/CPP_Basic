#include <iostream>

using namespace std;

// Abstraction
class AbstractEmployee {
	// Abstract Class
	virtual void AskForPromotion()=0; // pure virtual function
};

// Multi-Inheritance
class AbstractFactory {
	virtual void DisplayLocation() = 0;
};

class Employee: AbstractEmployee, AbstractFactory {
private:
	// inherited classes are even not able to access
	int Age;

protected:
	// inherited classes are able to access
	string Name;
	string Company;
	string Location;

public:
	// Constructor
	Employee(){
		Location = "None";
	}
	Employee(string name, string company, int age){
		Name = name;
		Company = company;
		Age = age;
		Location = "None";
	}
	Employee(string name, string company, int age, string location) {
		Name = name;
		Company = company;
		Age = age;
		Location = location;
	}


	// Method
	void IntroduceSelf()
	{
		cout << "Name: " << Name << '\n';
		cout << "Campany: " << Company << '\n';
		cout << "Age: " << Age << '\n';
	}

	virtual void Work()
	{
		// polymorphism by overriding
		cout << Name << " checking email, task backlog, etc..\n";
	}

	// Getter
	int getAge() { return Age; }
	string getName() { return Name; }
	string getCompany() { return Company; }
	
	// Setter
	void setAge(int age){Age = age;}
	void setName(string name){Name = name;}
	void setCompany(string company) {Company = company;}

	// Override: Interface
	void AskForPromotion()
	{
		if (Age > 30) cout << Name << " got promoted!!\n";
		else cout << Name << " denied promotion!!\n";
	}

	void DisplayLocation()
	{
		cout << Name << " is working in " + Location << '\n';
	}

};

class Developer : public Employee // private is default!! make Employee instance public
{
public:
	string Language;
	Developer(string name, string company, int age, string language)
		:Employee(name, company, age) // super().__init__(*argv) in python
	{
		Language = language;
	}

	void SendResume()
	{
		// why make getter and setter
		cout << getName() << " applies to " << getCompany() << " for " << Language << '\n';
	}

	void Work()
	{
		cout << getName() << " developes program\n";
	}
};

class Teacher : public Employee // private is default!! make Employee instance public
{
public:
	string Subject;
	Teacher(string name, string company, int age, string subject)
		:Employee(name, company, age) // super().__init__(*argv) in python
	{
		Subject = subject;
	}

	// Method
	void Teach()
	{
		// why make getter and setter
		cout << getName() << " teach in " << getCompany() << " about " << Subject << '\n';
	}

	void Work()
	{
		cout << Name << " teaches\n";
	}
};

int main(int argc, char* argv[])
{
	Employee emp1 = Employee("Cassie", "A", 26);
	Employee emp2 = Employee("John", "B", 32);
	emp1.AskForPromotion();
	emp2.AskForPromotion();
	
	Developer emp3 = Developer("Yuu", "C", 32, "C++");
	emp3.SendResume();
	emp3.AskForPromotion();

	Teacher emp4 = Teacher("Saldina", "D", 36, "Math");

	// polymorhism
	emp1.Work();
	emp3.Work();
	emp4.Work();

	// parent class can hold sub-class pointer
	// if Work() function doesn't have any virtual keyword, they just execute Work() in Employee
	// But if there is virtual keyword, compliler execute their Work() function
	// virtual -> check most recently implemented function in derived class 
	Employee* pointerExample1 = &emp3;
	Employee* pointerExample2 = &emp4;

	pointerExample1->Work();
	pointerExample2->Work();

	return 0;
}