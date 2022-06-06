#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

class Time{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(int hours, int minutes, int seconds){
        setHours(hours);
        setMinutes(minutes);
        setSeconds(seconds);
    }
    void setHours(int hours){
        if (hours >=0 && hours <=24){
            if (hours==24){
                this->hours =0;
            }
            this->hours = hours;
        }
    }
    int getHours(){
        return this->hours;
    }
    void setMinutes(int minutes){
       
            this->minutes = minutes;
        
    }
    int getMinutes(){
        return this->minutes;
    }
    void setSeconds(int seconds){
        if(seconds >=0 && seconds <=60){
            if( seconds==60){
                this->seconds = 0;
            } else 
            this->seconds = seconds;
        }
    }
    int getSeconds(){
        return this->seconds; 
    }
     void operator++(int){
        setSeconds(this->seconds+1);
    }
    void operator--(int){
        setSeconds(this->seconds-1);
    }
    void checkTimeP(int seconds,int minutes,int hours){
        if (seconds == 60){
            this->seconds =0;
            if (minutes == 59){
                this->minutes =0;
                if(hours == 23){
                    this->hours =0;
                } else setHours(this->hours+1);
            } else setMinutes(this->minutes+1);
        }  
    }
   
    void checkTimeM(int seconds,int minutes,int hours){
        if (seconds == 0){
            this->seconds =59;            
            if (minutes == 0){
                this->minutes =59;
                if(hours == 0){
                    this->hours =23;
                } else setHours(this->hours-1);
            } else setMinutes(this->minutes-1);
        } 
    }
    void startPlus(int time){
        for(int i=0;i<=time;i++){
             this->print();
            int previousSeconds=this->seconds+1;
            (*this)++;
            checkTimeP(previousSeconds,this->minutes,this->hours);
            Sleep(1000);
        }
    }
    void startPlus(){
        while(1){
            this->print();
            int previousSeconds=this->seconds+1;
            (*this)++;
            checkTimeP(previousSeconds,this->minutes,this->hours);
            Sleep(1000);
        }
    }
    void startMinus(int time){
        for(int i=0;i<=time;i++){
            this->print();
            int previousSeconds=this->seconds;
            (*this)--;
            checkTimeM(previousSeconds,this->minutes,this->hours);
            Sleep(1000);
        }
    }
    void startMinus(){
        while(1){
            this->print();
            int previousSeconds=this->seconds;
            (*this)--;
            checkTimeM(previousSeconds,this->minutes,this->hours);
            Sleep(1000);
        }
    }
    void print(){
        system("cls");
        string S_hours=(this->hours<10)?"0"+to_string(this->hours):to_string(this->hours);
        string S_minutes=(this->minutes<10)?"0"+to_string(this->minutes):to_string(this->minutes);
        string S_Seconds=(this->seconds<10)?"0"+to_string(this->seconds):to_string(this->seconds);

        cout <<"[" <<S_hours << ":" << S_minutes << ":" << S_Seconds <<"]"<< endl;
    }
};