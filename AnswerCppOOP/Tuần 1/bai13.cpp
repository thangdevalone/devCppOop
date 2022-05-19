#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Coin{
private:
    string sideUp; 
public:
    Coin(string sideUp){
        this->sideUp = sideUp;
    }
    Coin(){
        this->sideUp = toss();
    }
    string toss(){
        if (rand()%2==1)
            return "Heads";
        else 
            return "Tails";
    }
    string getSideUp() {
        return this->sideUp;
    }
};
void demTailsOrHeads(string x,int& Tails,int& Heads){
    if (x=="Tails"){
        Tails++;
    }
    if (x=="Heads"){
        Heads++;
    }
}
int main(){
    srand(time(NULL));
    Coin coin25;
    Coin coin5;
    Coin coin10;
    int total=0;
    while (total<100){
        if(coin25.toss()=="Tails"){
            total+=25;
        }
        if(coin5.toss()=="Tails"){
            total+=5;
        }
        if(coin10.toss()=="Tails"){
            total+=10;
        }
    }
    if (total==100){
        cout << "YOU WIN" <<" YOUR COIN = "<<total<<endl;
    } else cout <<"YOU LOSE"<<" YOUR COIN = "<<total<<endl;
    return 0;
}