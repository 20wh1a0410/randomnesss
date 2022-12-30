#include<iostream>
#include<cstdlib>
#include<time.h>
//#include<string.h>
using namespace std;
string getUserMove(string s){
	cin>>s;
	return s;
}
string getComputerMove(){
	srand(time(0));
	int move=rand()%3;
	if(move==0)
	return "rock";
	else if(move==1)
	return "paper";
	else return "scissor";
}
int getResult(string u,string c){
	if((u=="rock"&&c=="scissor")||(u=="paper"&&c=="rock")||(u=="scissors"&&c=="paper"))
	return 1;
	else if(u==c)
	return 0;
	else return -1;
}
int main(){
	string str,u,c;
	int wins=0,draws=0,losses=0;
	u=getUserMove(str);
	for (int i = 0; i < 10; ++i) {
	c=getComputerMove();
	//cout<<getUserMove(str)<<endl;
	cout<<getComputerMove()<<endl;
	//cout<<getResult(u,c)<<endl;
		if (getResult(u,c)==1)
			wins += 1;
			else if(getResult(u,c)==0)
			draws++;
			else
			losses++;
	}
	cout<<wins<<endl<<draws<<endl<<losses;
	return 0;
}
