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
};
int main ()
{
    Employee employee1;
    employee1.Name = "Rehumile";
    employee1.Company = "YT-Humunchi";
    employee1.Age = 24;
    employee1.IntroduceYourself();
}