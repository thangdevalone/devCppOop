#include <iostream>

using namespace std;
class Question{
private:
    string question;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    char answerTrue;
    int point;
    char userAnswer;
public:
    Question(string question, string answer1, string answer2, string answer3, string answer4,char answerTrue){
        this->question = question;
        this->answer1 = answer1;
        this->answer2 = answer2;
        this->answer3 = answer3;
        this->answer4 = answer4;
        this->answerTrue = answerTrue;
        point =0;
    }
    Question(){
        this->question ="";
        this->answer1 = "";
        this->answer2 = "";
        this->answer3 = "";
        this->answer4 = "";
        this->answerTrue =' ';
        point =0;
    }
    void setQuestion(string question){
        this->question = question;
    }
    void setAnswer(string answer1,string answer2,string answer3,string answer4){
        this->answer1 = answer1;
        this->answer2 = answer2;
        this->answer3 = answer3;
        this->answer4 = answer4;
        point =0;
    }
    void setAnswerTrue(char answerTrue) {
        this->answerTrue = answerTrue;
    }
    void displayQuestion(int i,int turn){
        system("cls");
        cout << "TURN PLAYER "<<turn<<endl;
        cout << "Question "<<i+1<<" : " << this->question << endl;
        cout << "A. " << this->answer1 << endl;
        cout << "B. " << this->answer2 << endl;
        cout << "C. " << this->answer3 << endl;
        cout << "D. " << this->answer4 << endl;
        setUserAnswer();

    }
    void setUserAnswer(){
        char k;
        do {
            cout << ">>";
            cin >> k;
            if (k!='A' && k!='B' && k!='C'&& k!='D')
            cout << "Sai cu phap! Hay viet in hoa va theo ki tu A,B,C,D"<<endl;
        } while (k!='A' && k!='B' && k!='C'&& k!='D');
        this->userAnswer=k;

    }
    char getUserAnswer(){
        return this->userAnswer;
    }
    int getPoint(){
        return (userAnswer==answerTrue) ? 1 :0;
    }
};
int main(){
    int player1=0, player2=0;
    Question questions[10];
    //tao cau hoi
    questions[0].setQuestion("1+1=?");
    questions[1].setQuestion("Ai la nguoi dep trai nhat lop?");
    questions[2].setQuestion("2x3=?");
    questions[3].setQuestion("Vector phap tuyen cua duong thang 2x-3y+7=0?");
    questions[4].setQuestion("Tim UCLN(129,213)=?");
    questions[5].setQuestion("2+1=");
    questions[6].setQuestion("Nguoi code ra game nay la ai?");
    questions[7].setQuestion("4x6=?");
    questions[8].setQuestion("Vector nao vuong goc voi vector v(1,-3)?");
    questions[9].setQuestion("Tim BCNN(100,234)=?");
    //tao cau trl
    questions[0].setAnswer("2","3","10","5");
    questions[0].setAnswerTrue('A');
    questions[1].setAnswer("Thang","Thay Giang","Doan xem","Khong co dap an dung");
    questions[1].setAnswerTrue('A');
    questions[2].setAnswer("3","4","5","6");
    questions[2].setAnswerTrue('D');
    questions[3].setAnswer("n(2,-3)","n(2;3)","n(2;4)","n(-3,2)");
    questions[3].setAnswerTrue('A');
    questions[4].setAnswer("1","2","3","4");
    questions[4].setAnswerTrue('C');
    questions[5].setAnswer("2","3","4","5");
    questions[5].setAnswerTrue('B');
    questions[6].setAnswer("12","24","5","Khong co dap an nao dung");
    questions[6].setAnswerTrue('B');
    questions[7].setAnswer("Thay Giang","Internet","Thang","Chiu");
    questions[7].setAnswerTrue('C');
    questions[8].setAnswer("n(1,1)","n(0,1)","n(9,3)","Chiu");
    questions[8].setAnswerTrue('C');
    questions[9].setAnswer("132","1215","1000","11700");
    questions[9].setAnswerTrue('D');
    for(int i = 0; i < 5;i++){
        questions[i].displayQuestion(i,1);
    }
    for(int i = 5; i < 10;i++){
        questions[i].displayQuestion(i,2);
    }
    for(int i = 0; i < 5;i++){
        player1+=questions[i].getPoint();
    }
    for(int i =5;i<10;i++){
        player2+=questions[i].getPoint();
    }
    cout << "Player1: " << player1 <<" diem"<<endl;
    cout << "Player2: " << player2 <<" diem"<<endl;
    if (player1==player2){
        cout << "Hoa nhau!";
    } else (player1>player2) ? cout << "Nguoi choi 1 WIN!":cout << "Nguoi choi 2 WIN";
    return 0;
}