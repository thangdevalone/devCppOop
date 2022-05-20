#include <iostream>

using namespace std;
class Numbers{
private:
    int number;
    string lessThan20[20]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                        "eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen","seventeen","eighteen","nineteen"};
    string hundred="hundred";
    string thousand="thousand";
public:
    Numbers(int number){
        setNumber(number);
    }
    void setNumber(int number){
        if (number>0){
            this->number = number;
        } else return;
    }
    int getNumber(){
        return number;
    }
    void print(){
        int chuSo[4]={};
        int i=0;
        int dem=0;
        while (number>0){
            chuSo[i]=number%10;
            number/=10;
            dem++;
            i++;
        }
        if (dem==4){
            cout << lessThan20[chuSo[3]]<<" "<<thousand<<" "<<lessThan20[chuSo[2]]<<" "<<hundred<<" "<<lessThan20[chuSo[1]]<<" "<<lessThan20[chuSo[0]];
        }
        if (dem==3){
            cout << lessThan20[chuSo[2]]<<" "<<thousand<<" "<<lessThan20[chuSo[1]]<<" "<<lessThan20[chuSo[0]];
        }
        if (dem==2){
            cout << lessThan20[chuSo[1]]<<" "<<lessThan20[chuSo[0]];
        }
        if (dem==1){
            cout << lessThan20[chuSo[0]];
        }
    }

};

int main(){
    Numbers number(931);
    number.print();
}