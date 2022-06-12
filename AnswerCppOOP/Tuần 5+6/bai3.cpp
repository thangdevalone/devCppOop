#include <iostream>
#include "ProductionWorker.h"
using namespace std;

class TeamLeader: public ProductionWorker{
private:
    int minimumHours;
    int hoursJoin;
    int bonus;
public:
    TeamLeader(int minimumHours=0, int hoursJoin=0,int bonus=0){
        setMinimumHours(minimumHours);
        setHoursJoin(hoursJoin);
        setBonus(bonus);
    }
    void setHoursJoin(int hoursJoin){
        this->hoursJoin = hoursJoin;
    }
    int getHoursJoin(){
        return this->hoursJoin;
    }
    void setMinimumHours(int minimumHours){
        this->minimumHours = minimumHours;
    }
    int getMinimumHours(){
        return this->minimumHours;
    }
    void setBonus(int bonus){
        this->bonus = bonus;
    }
    int getBonus(){
        return this->bonus;
    }
};
int main(){

}