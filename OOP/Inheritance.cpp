#include <iostream>
using std::string;



// Creating an abstract class
// Implemented a contract
class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};


// making a class called Employee
// Any members of the class is by deafualt private 
class Employee:AbstractEmployee {
// making the members private

private: 

    string Company;
    int Age;
protected:
    string Name;
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
    
    void AskForPromotion(){
        if(Age>30)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", sorry no promotion, you need more experience" << std::endl;
    }
  
};
//developer is a sub class of base class - Employee
// Making inheritance public to get access to askforpromotion 
class Developer:public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favprogramminglanguage)
    :Employee(name,company,age){
        FavProgrammingLanguage = favprogramminglanguage;
    }
    void FixBug(){
        std::cout<<Name <<" fixed bug using "<< FavProgrammingLanguage << std::endl;
    }
};

class Teacher:Employee {
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
    :Employee(name,company,age){
        Subject = subject;
    }
    void PrepareLesson(){
        std::cout<<Name <<" is preparing a "<< Subject<< " lesson" << std::endl;
    }


};


int main()
{

    Developer d = Developer("Bob","Farm",24,"Python");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Jack","Hogwarts",44, "History");
    t.PrepareLesson();

};