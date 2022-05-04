#include <iostream>

using namespace std;

class Date{
private:    
    int month;
    int day;
    int year;
public:
    Date(int day,int month,int year){
        if (day>31 || day<1){
            return;
        }
        this->day = day;
        if (month>31 ||month<1){
            return;
        }
        this->month = month;
        this->year = year;
    }
    void displayDate(){
        cout << day <<"/"<<month <<"/"<<year<<endl;
        cout << "Ngay "<<day<<" Thang "<<month<<", "<<year<<endl; 
    }
};
int main(){
    Date date2(1,8,2003);
    date2.displayDate();
}