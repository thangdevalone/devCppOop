#include <iostream>

using namespace std;
class NumberArray{
private:
    int* Arr;
    int size;
public:
    NumberArray(int size ){
        this->size = size;
        Arr = new int[size]{0};
    }
    ~NumberArray(){
        delete[] Arr;
    }
    void insertNumber(int number,int index){
        Arr[index] = number;
    }
    int getNumber(int index){
        return Arr[index];
    }
    int maxValue() {
        int max=Arr[0];
        for(int i = 1; i < size;i++){
            if(Arr[i] > max){
                max = Arr[i];
            }
        }
        return max;
    }
    int minValue() {
        int min=Arr[0];
        for(int i = 1; i < size;i++){
            if(Arr[i] < min){
                min = Arr[i];
            }
        }
        return min;
    }
    float averageValue() {
        int total=0;
        for(int i = 0; i < size;i++){
            total += Arr[i];
        }
        return float(total)/size;
    }
    void displayData(){
        cout << "MAX: "<<maxValue()<<endl;
        cout << "MIN: "<<minValue()<<endl;
        cout <<"AVERAGE: "<<averageValue()<<endl;
    }
};
int main(){
    NumberArray array(5);
    array.insertNumber(6,0);
    array.insertNumber(1,2);
    array.insertNumber(3,3);
    for(int i = 0; i < 5;i++){
        cout << "GETVALUE: "<<array.getNumber(i)<<endl;
    }
    array.displayData();
    return 0;
}