#include <iostream>

using namespace std;

class Person{
private:
    string name;
    string address;
    string numberPhone;
public:
    Person(string name, string address, string numberPhone){
        this->name = name;
        this->address = address;
        this->numberPhone = numberPhone;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setAddress(string address){
        this->address = address;
    }
    string getAddress(){
        return address;
    }
    void setNumberPhone(string numberPhone){
        this->numberPhone = numberPhone;
    }
    string getNumberPhone(){
        return numberPhone;
    }
    void displayData(){
        cout <<"Name: "<<name<<endl;
        cout << "Address: "<<address<<endl;
        cout << "Number Phone: "<<numberPhone;
}
};
int main(){
    Person Person1("Thai","HaNoi","0123234124");
    Person Person2("Thang","HaNoi","0312421424");
    Person Person3("Hieu","HaNoi","01234124");
    Person1.displayData();
    cout<< endl;
    Person2.displayData();
    cout<< endl;
    Person3.displayData();
    return 0;
}