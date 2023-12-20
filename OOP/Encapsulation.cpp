#include <iostream>
using std::string;

// making a class called Employee
// Any members of the class is by deafualt private 
class Employee {
// making the members private

private: 
    string Name;
    string Company;
    int Age;
public:
    // Creating setters and getters to protect members but give access to members through these functions

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    } 
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    // Example of validation methods 
    void setAge(int age){
        if(age >= 18)
        Age = age;
        
    }
    int getAge(){
        return Age;
    } 
    
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
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Joshua", "Amazon", 32);
    employee2.IntroduceYourself();
    employee1.setAge(18);
    std::cout << employee1.getName() << " is actually " << employee1.getAge() << std::endl;

    

 
};