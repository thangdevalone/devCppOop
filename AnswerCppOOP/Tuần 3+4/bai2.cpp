#include <iostream>

using namespace std;
class DayOfYear{
private:
    int dayOfYear;
    string monthOfYear[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int calMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
public:
    DayOfYear(int dayOfYear){
        setDayOfYear(dayOfYear);
    }
    void setDayOfYear(int dayOfYear){
        if (dayOfYear>0 && dayOfYear<366){
            this->dayOfYear = dayOfYear;
        }
        else return;
    }
    int calDay(int cal){
        for (int i=0; i <cal;i++)
            dayOfYear -= calMonth[i];
        return dayOfYear;   
    }
    void print(){
        int calMonth=dayOfYear/30;
        if (calMonth==12) calMonth--;
        cout << monthOfYear[calMonth]<<" "<<calDay(calMonth)<<endl;
    }
};
int main(){
    system("cls");
    DayOfYear dayOfYear(2);
    dayOfYear.print();
    return 0;
}