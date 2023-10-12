#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<2) cout<<"0";
	int dem=0;
	for(int i=0;i<= sqrt(n);i++){
		if(n%i==0) dem++;
	}
	if(dem==0) cout<<"1"<<endl;
	else cout<<"0"<<endl;
	return 0;
}
