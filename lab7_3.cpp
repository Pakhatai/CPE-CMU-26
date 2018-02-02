//status = "ONE-NIGHT-STAND";
#include<iostream>
using namespace std;
int main(){
	int old,tall,money;
	string status;
	cout<<"How old are you? :";
	cin>>old;
	
	if(old<=20){
	cout<<"How tall are you? :";
	cin>>tall;
	
	if(tall<160){
		status="UNFRIEND";
		}else if(tall<175){
		status="FRIEND";
		}else{
			cout<<"How much your property? :";
			cin>>money;
			if(money>69000000){
				status = "MARRIED";
			}else{ status = "ONE-NIGHT-STAND";}
		}
		
		
		}else if(old<30){
			cout<<"How much your property? :";
			cin>>money;
			if(money>10000000){
				status = "best friend";
			}else{
				status = "UNFRIEND";
			}
		}
		else{
			status = "UNFRIEND";
		}
		
		cout<<status; 
		return 0;
		
}
