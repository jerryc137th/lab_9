#include<iostream>
#include<string>
using namespace std;

int main(){
	char grade;
	int i=0,a;
	int count[5]={};
	cout<<"Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		i++;
		cout<<"Student "<<"["<<i<<"]: ";
		cin>>grade;
		if(grade =='0')break;
		(grade=='A')? count[0]++:(grade=='B')? count[1]++:(grade=='C')? count[2]++:(grade=='D')? count[3]++:(grade=='F')? count[4]++:a=i;
		if(a==i){
			a--;
			i--;
			cout<<"Wrong input. Please input again."<<endl;
		}
	}while(true);
	cout << "In total "<<(i-1)<<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<endl;
	return 0;
}
