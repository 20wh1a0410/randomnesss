#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
string rollDice(){
	int i,t,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;
	srand(time(0));
	for(i=1;i<=5;i++){
	t=(rand()%6)+1;
	if(t==1) c1++;
	else if(t==2) c2++;
	else if(t==3) c3++;
	else if(t==4) c4++;
	else if(t==5) c5++;
	else if(t==6) c6++;
	cout<<t<<endl;
}
if(c1==5||c2==5||c3==5||c4==5||c5==5||c6==5)
return "yahoo";
else
return "try again";
}
int main(){
	cout<<rollDice()<<endl;
	
	return 0;
}
