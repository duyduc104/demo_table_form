#include<iostream>
#include<string>
using namespace std;
class Date
{
private:
    /* data */int day;
    int month;
    int year;
    bool checkYear(int year){
        if(year %400 ==0) return true;
        else if(year %4 ==0 && year %100 != 0) return true;
        else return false;
    }
    int checkMonth(int month, int year){
        switch (month)
        {
        case 2: if(checkYear(year)) return 29;
        else return 28;
        case 4:
        case 6:
        case 9:
        case 11:
        return 30;
        default:
        return 31;
            break;
        }
    }
public:
    Date(int d, int m, int y){
        day =d;
        month =m;
        year =y;
    }
    void checkdate(int d, int m, int y){
        if(m<1||m>12) m=1;
        if(d<1 || d >31) d=1;
    }
    void printDate1(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;

    }
    void printDate2(){
        cout<<"ngay"<<" "<<day<<"thang"<<" "<<month<<"nam"<<" "<<year<<endl;
    }
    void printDate3(){
        cout<<day<<"thang"<<" "<<month<<"nam"<<" "<<year<<endl;
    }
};

int main(){
    Date d1(15,3,2021);
    d1.printDate1();
    d1.printDate2();
    d1.printDate3();

    Date d2(29,0,1999);
    d2.printDate1();
    d2.printDate2();
    d2.printDate3();

    return 0;

}





