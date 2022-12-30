#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
string randomLicensePlate(){
	string plate=" ";
	srand(time(0));
	int l=rand()%2+6;
	//cout<<l;
	if(l==6){
	for(int i=0;i<3;i++){
		int r=rand()%52;
		char ch=(r<26)?'A':'a';
		plate+=(char)(ch+r%26);
	}
	for(int i=3;i<l;i++){
		char ch=rand()%(57-48)+48;
		plate+=ch;
	}
}
else if(l==7){
	for(int i=0;i<4;i++){
		char ch=rand()%(57-48)+48;
		plate+=ch;
	}
	for(int i=4;i<l;i++){
			int r=rand()%52;
		char ch=(r<26)?'A':'a';
		plate+=(char)(ch+r%26);
	}
}
return plate;
}
int main(){
	cout<<randomLicensePlate();
	return 0;
}
