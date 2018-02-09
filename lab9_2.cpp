//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

ifstream cheerbook;
cheerbook.open("C:\\Users\\LaB_303\\Desktop\\lab9-Pakhatai-master\\cheerbook.txt");
string textline,textline2;
while(getline(cheerbook,textline)){
	textline2+=(textline+"\n");
}


ofstream cheerbook_copy;
cheerbook_copy.open("C:\\Users\\LaB_303\\Desktop\\lab9-Pakhatai-master\\cheerbook_copy.txt");
cheerbook_copy << "-------------------- SOTUS ---------------------\n";
cheerbook_copy << textline2;
cheerbook_copy << "-------------------- SOTUS ---------------------\n";
cheerbook_copy.close();

return 0;
}

