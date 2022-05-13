//CoinTossSimulator
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
    Coin coin;
    int Tails=0;
    int Heads=0;
    cout <<coin.getSideUp()<<endl;
    for (int i = 0; i <20;i++){
        string loop=coin.toss();
        cout << "Lan "<<i+1<<": " <<loop<<endl;
        demTailsOrHeads(loop,Tails,Heads);
    }
    cout << "Tails: "<<Tails<<" lan"<<endl;
    cout << "Heads: "<<Heads<<" lan"<<endl;
    return 0;
}