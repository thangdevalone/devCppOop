#include <iostream>
#include <iomanip>
using namespace std;

class Employee{
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee(string name, int idNumber, string department,string position){
        this->name=name;
        this->idNumber=idNumber;
        this->department=department;
        this->position=position;
    }
    Employee(string name, int idNumber){
        this->name=name;
        this->idNumber=idNumber;
        department="";
        position="";
    }
    Employee(int idNumber){
        this->idNumber=idNumber;
        name="";
        department="";
        position="";
    }
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    void setIdNumber(int idNumber){
        this->idNumber=idNumber;
    }
    int getIdNumber(){
        return idNumber;
    }
    void setDepartment(string department){
        this->department=department;
    }
    string getDepartment(){
        return department;
    }
    void setPosition(string position){
        this->position=position;
    }
    string getPosition(){
        return position;
    }
    void displayData(){
        cout<<setw(10) << name <<setw(20)<<idNumber <<setw(25)<<department<<setw(20)<<position<<endl;
    }
};
int main(){
    string block="";
    for(int i=0;i<=80;i++){
        block+=char(196);
    }
    cout << setw(10) << "Name" <<setw(25)<<"ID Number"<<setw(20)<<"Department"<<setw(20)<<"Position"<<endl;
    cout <<block<<endl;
    Employee emp1("Susan Meyer",47899,"Accounting","Vice President");
    Employee emp2("Mark Jones ",39119,"IT","Programmer");
    Employee emp3("Joy Rogers ",81774,"Manuafacturing","Engineer");
    emp1.displayData();
    emp2.displayData();
    emp3.displayData();
}