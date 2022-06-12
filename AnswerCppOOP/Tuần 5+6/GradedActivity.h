#pragma once
#include <iostream>

using namespace std; //
class GradedActivity
{
private:
    double score; // To hold the numeric score
public:
    GradedActivity()
    {
        score = 0.0;
    }
    GradedActivity(double s)
    {
        score = s;
    }
    void setScore(double s)
    {
        score = s;
    }
    double getScore() const
    {
        return score;
    }
    char getLetterGrade() const
    {
        char letterGrade; // To hold the letter grade
        if (score > 89)
            letterGrade = 'A';
        else if (score > 79)
            letterGrade = 'B';
        else if (score > 69)
            letterGrade = 'C';
        else if (score > 59)
            letterGrade = 'D';
        else
            letterGrade = 'F';
        return letterGrade;
    }
};
class  Essay : public GradedActivity{
private:
    float nguphap;
    float chinhta;
    float dodai;
    float noidung;
public:
    Essay(float nguphap=0, float chinhta=0, float dodai=0, float noidung=0):GradedActivity(noidung+dodai+chinhta+nguphap){
    }
    friend ostream& operator<<(ostream& os,const Essay& x){
        os << x.getScore() << " " << x.getLetterGrade(); 
        return os;
    }
    
    
};