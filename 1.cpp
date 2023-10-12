#include<iostream>
using namespace std;
int main(){
	int thang;
	long nam;
	cin>>thang>>nam;
	if(nam<0 && thang<1 && thang >12) cout<<" ";
	
	if(nam >0 && 1<= thang<=12){
	
	switch(thang){
		case 4 || 6 || 9 || 11:
		{
		cout<<"30";	
		} break;
		case 2:
			{
				if(nam%400==0 && nam%4==0 && nam%100 !=0) cout<<"29";
				else cout<<"28";
			} break;
	default:  
		{
				cout<<"31";
			
			} break;
	}}
return 0;	
}
