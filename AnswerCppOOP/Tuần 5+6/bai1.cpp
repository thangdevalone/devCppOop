#include <iostream>

using namespace std;

class Employee
{
public:
    string name;
    string id;
    int dayStartHire;
    Employee(string name = "Unnamed", string id = "None", int dayStartHire = 0)
    {
        setName(name);
        setId(id);
        setDayStartHire(dayStartHire);
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setId(string id)
    {
        this->id = id;
    }
    string getId()
    {
        return this->id;
    }
    void setDayStartHire(int dayStartHire)
    {
        this->dayStartHire = dayStartHire;
    }
    int getDayStartHire()
    {
        return this->dayStartHire;
    }
};
class ProductionWork : public Employee
{
private:
    int timeShift;
    int salary;

public:
    ProductionWork(){
    }
    ProductionWork(int timeShift, int salary){
        setTimeShift(timeShift);
        setSalary(salary);
    }
    void setTimeShift(int timeShift)
    {
        this->timeShift = timeShift;
    }
    int getTimeShift()
    {
        return this->timeShift;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return this->salary;
    }
    int salary(int ngay){
        if (timeShift==1){
            return(salary*ngay);
        }
        if (timeShift==2){
            return(salary*1.5*ngay);
        }
    }
};
int main()
{
    ProductionWork nhanvien1(1,5);
    nhanvien1.setName("Thang");
    nhanvien1.setDayStartHire(2);
    cout << nhanvien1.getName() << endl;
}