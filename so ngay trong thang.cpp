#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int month;
	int year;
	cin>>month>>year;
	if(year>0 && month>=1 && month<=12){
		switch(month){
			case 1: {
				cout<<"31";
				break;
			}
			case 2: {
				if(year%400==0 && year%4==0 && year%100 !=0) cout<<"29";
				else cout<<"28";
				break;
			}
			case 3: {
				cout<<"31";
				break;
			}
			case 4: {
				cout<<"30";				break;
			}
			case 5: {
				cout<<"31";
				break;
			}
			case 6: {
				cout<<"30";
				break;
			}
			case 7: {
				cout<<"31";
				break;
			}
			case 8:{
				cout<<"31";
				break;
			}
			case 9:{
				cout<<"30";
				break;
			}
			case 10:{
				cout<<"31";
				break;
			}
			case 11:{
				cout<<"30";
				break;
			}
			case 12:{
				cout<<"31";
				break;
			}
			default:{
				if(year<0 && month>12 && month<1 ){
				}
				break;
			}
		}
	}
	else {
	}
	return 0;
}
