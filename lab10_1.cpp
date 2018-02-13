// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<cstdlib>
#include<iostream>
#include<ctime>
using namespace std;

int main(){
	cout<<"Press Enter 3 times to reveal your future.";
	cin.get();
	cin.get();
	cin.get();
	
	srand(time(0));
	int x = rand()%9;
	string get,grade [9]= {"A","B+","B","C+","C","D+","D","F","W"};
	switch(x){
	case 0 :
		get = grade[0];
		break;
	case 1 :
		get = grade[1];
		break;
	case 2 :
		get = grade[20];
		break;
	case 3 :
		get = grade[3];
		break;
	case 4 :
		get = grade[4];
		break;
	case 5 :
		get = grade[5];
		break;
	case 6 :
		get = grade[6];
		break;
	case 7  :
		get = grade[7];
		break;
	case 8 :
		get = grade[8];
		break;

	
}
	
	cout<<"You will get "<<get<<"in this 261102.";
	
	return 0;
}



