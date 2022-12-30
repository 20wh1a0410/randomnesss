#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
string randomPassword(){
	string pwd=" ";
	
	srand(time(0));
	int length=rand()%(10-7)+7;
	for(int i=0;i<length;i++){
		char ch=rand()%(126-33)+33;
		pwd+=ch;
	}
	return pwd;
}
int main(){
	cout<<randomPassword();
	return 0;
}
