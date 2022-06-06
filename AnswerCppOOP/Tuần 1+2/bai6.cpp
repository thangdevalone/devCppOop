#include <iostream>

using namespace std;

class Inventory{
private:
    int itemNumbers;
    int quantity;
    float cost;
    float totalCost;
public:
    Inventory(){
        this->itemNumbers = 0;
        this->quantity = 0;
        this->cost = 0;
        this->totalCost = 0;
    }
    Inventory(int itemNumbers, int quantity, float cost){
        setItemNumbers(itemNumbers);
        setQuantity(quantity);
        setCost(cost);
        this->totalCost = 0;
        setTotalCost();
    }
    void setItemNumbers(int itemNumbers){
        if (itemNumbers < 0){
            cout << "Error!";
        } else
        this->itemNumbers = itemNumbers;
    }
    void setQuantity(int quantity) {
        if (itemNumbers < 0){
            cout << "Error!";
        } else
        this->quantity = quantity;
    }
    void setCost(float cost) {
        if (itemNumbers < 0){
            cout << "Error!";
        } else
        this->cost = cost;
    }
    void setTotalCost() {
        totalCost = quantity*cost;
    }
    int getItemNumbers(){
        return itemNumbers;
    }
    int getQuantity(){
        return quantity;
    }
    float getCost(){
        return cost;
    }
    float getTotalCost(){
        return totalCost;
    }
    void displayData(){
        cout << "ItemNumbers: " << itemNumbers <<endl;
        cout << "TotalCost: " << getTotalCost() <<endl;
    }
};
int main(){
    Inventory inven1(211,3,5.6);
    Inventory inven2(213,3,123.3);
    Inventory inven3(231,5,20.4);
    inven1.setTotalCost();
    inven2.setTotalCost();
    inven3.setTotalCost();
    inven1.displayData();
    inven2.displayData();
    inven3.displayData();

        return 0;
}