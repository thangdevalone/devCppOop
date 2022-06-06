#include "Employee.h"

class ProductionWorker : public Employee
{
protected:
    int timeShift;
    int salary;

public:
    ProductionWorker()
    {
    }
    ProductionWorker(int timeShift, int salary)
    {
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
    int salary(int ngay)
    {
        if (timeShift == 1)
        {
            return (salary * ngay);
        }
        if (timeShift == 2)
        {
            return (salary * 1.5 * ngay);
        }
    }
};