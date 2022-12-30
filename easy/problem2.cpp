#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int rollDieFor6(){
	int t,cnt=0;
	srand(time(0));
	for (int i=1;i<=10;i++){
		t=rand()%6+1;
		cout<<t<<endl;
		if(t==6)
		cnt++;
	}
	return cnt;
}
int main(){
	cout<<rollDieFor6();
	return 0;
}
