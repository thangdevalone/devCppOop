#include <iostream>
#include <iomanip>

using namespace std;
class Retail{
private:
    string description;
    int unitsOnHand;
    float price;
public:
    Retail(string description, int unitsOnHand, float price){
        this->description = description;
        this->unitsOnHand = unitsOnHand;
        this->price = price;
    }
    void setDescription(string description){
        this->description = description;
    }
    string getDescription() { 
        return description; 
    }
    void setUnitOnHand(int unitsOnHand){
        this->unitsOnHand = unitsOnHand;
    }
    int getUnitOnHand() {
        return unitsOnHand;
    }
    void setPrice(float price){
        this->price = price;
    }
    float getPrice() {
        return price;
    }
    void displayData(int rank){
        cout << "Item #"<<rank<<setw(20) << description<<setw(20)<<unitsOnHand<<setw(20)<<price<<endl;
    }

};
int main(){
    string block="";
    for(int i=0;i<=80;i++){
        block+=char(196);
    }
    cout << setw(27) << "Description" <<setw(25)<<"Unit On Hand"<<setw(15)<<"Price"<<endl;
    cout <<block<<endl;
    Retail item1("Jacket",12,59.95);
    Retail item2("Designer Jeans",40,34.95);
    Retail item3("Shirt",20,24.95);
    item1.displayData(1);
    item2.displayData(2);
    item3.displayData(3);
    return 0;
}