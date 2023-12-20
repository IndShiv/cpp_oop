#include <iostream>
using std::string;



// making a class called Employee
// Any members of the class is by deafualt private 

class Employee {

// making the members publically available 
public: 
    string Name;
    string Company;
    int Age;

    // Class method (public)
    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

    // Constructor
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;


    }

};





int main()
{
    // Creating an object employee1
    Employee employee1 = Employee("Shival","Robotics HQ", 28);
    //employee1.Name = "Shival";
    //employee1.Company = "Robotics HQ";
    //employee1.Age = 28;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Joshua", "Amazon", 32);
    //employee2.Name = "Joshua";
    //employee2.Company = "Amazon";
    //employee2.Age = 32;
    employee2.IntroduceYourself();

 
};