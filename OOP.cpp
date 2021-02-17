#include <iostream>
using std::string;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        std::cout << "Name -" << Name << std::end1;
        std::cout << "Company -" << Company << std::end1;
        std::cout << "Age -" << Age << std::end1;
    }
    Employee (string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main ()
{
    Employee employee1 = Employee("Rehumile", "YT-Humunchi", 24);
    employee1.IntroduceYourself();
    
     Employee employee2 = Employee("Jomathan", "YT-Jounchi", 23);
     employee2.IntroduceYourself();
}
