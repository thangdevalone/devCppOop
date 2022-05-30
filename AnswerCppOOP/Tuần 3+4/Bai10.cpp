#include <iostream>
using namespace std;

class DivSales {
    private:
        int doanhSoTheoQuy[4];
        static int doanhSoCongTyCaNam;
    public:
        void setDoanhSoTheoQuy(int, int, int, int);
        int getDoanhSoTheoQuy(int);

        static int getDoanhSoCaNam();

        friend istream& operator>> (istream& is,const DivSales& other);
        friend ostream& operator<< (ostream& os,const DivSales& other);
};

int DivSales::doanhSoCongTyCaNam = 0;

void DivSales::setDoanhSoTheoQuy(int quy1, int quy2, int quy3, int quy4) {
    doanhSoTheoQuy[0] = quy1;
    doanhSoTheoQuy[1] = quy2;
    doanhSoTheoQuy[2] = quy3;
    doanhSoTheoQuy[3] = quy4;

    doanhSoCongTyCaNam += quy1+quy2+quy3+quy4;

}

int DivSales::getDoanhSoTheoQuy(int index) {
    return doanhSoTheoQuy[index];
}

int DivSales::getDoanhSoCaNam() {
    return doanhSoCongTyCaNam;
}

istream& operator>>(istream& is, DivSales& bophan) {
    int quy1, quy2, quy3, quy4;
    is >> quy1 >> quy2 >> quy3 >> quy4;
    bophan.setDoanhSoTheoQuy(quy1, quy2, quy3, quy4);

    return is;
}

ostream& operator<<(ostream& os, DivSales& bophan) { 
    for(int i = 0; i < 4; i++) {
        os << "Quy " << i+1 << ": " << bophan.getDoanhSoTheoQuy(i) << endl;
    }
    os << "-------------------------------" << endl;
    return os;
}

int main() {
    DivSales danhSach[6];
    for(int i = 0; i < 6; i++) {
        cout << "Nhap doanh so bo phan " << i+1 << ": " << endl;
        cin >> danhSach[i];
    }

    cout << "Doanh so ban hang cua cong ty: " << endl;
    cout << "-------------------------------" << endl;
    for(int i = 0; i < 6; i++) {
        cout << "Bo phan " << i+1 << ": " << endl;
        cout << danhSach[i];
    }
    cout << "Doanh so ca nam cua cong ty: " << DivSales::getDoanhSoCaNam() << endl;

    return 0;
}