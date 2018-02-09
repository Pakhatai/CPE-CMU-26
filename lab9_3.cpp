//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
	int count = 0 ;
	float mean,sum2=0,sum1=0,standard=0 ;
	string textline;
	ifstream score("C:\\Users\\LaB_303\\Desktop\\lab9-Pakhatai-master\\score.txt");
	while (getline(score,textline)){
		sum1+=atof(textline.c_str());
		sum2+=pow(atof(textline.c_str()),2);
		count++;
	}
mean=sum1/count;
cout<<"Number of data = "<<count<<endl;
cout<<"Mean = "<<mean<<endl;
cout<<"Standard deviation = "<<sqrt((sum2/count)-pow(mean,2))<<endl;
return 0;
}
