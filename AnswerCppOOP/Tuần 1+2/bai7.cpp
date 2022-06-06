#include <iostream>

using namespace std;
class TestScores{
private:
    float score1;
    float score2;
    float score3;
public:
    TestScores(float score1, float score2, float score3){
        this->score1 = score1;
        this->score2 = score2;
        this->score3 = score3;
    }
    TestScores(){

    }
    void setScore1(float score1) { this->score1 = score1; };
    float getScore1()  { return score1; }
    void setScore2(float score2) { this->score2 = score2;}
    float getScore2() { return score2; }
    void setScore3(float score3) { this->score3= score3; }
    float getScore3() { return score3;}
    float AverageScore(){
        return float(score1 + score2 + score3)/3;
    }
    void displayData(){
        cout << "Trung binh diem: "<<AverageScore() << endl;
    }
};
int main(){
    float score1, score2, score3;
    cout << "Nhap 3 dau diem: ";
    cin >> score1 >> score2 >> score3;
    TestScores scores;
    scores.setScore1(score1);
    scores.setScore2(score2);
    scores.setScore3(score3);
    scores.displayData();
    return 0;
}