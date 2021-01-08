#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	string h;
	float x,i=0,k,j=0,m=0,e;
	ifstream s;
	s.open("score.txt");
	while(getline(s,h)){
		x = stof(h.c_str());
		k = pow(x,2);
		j+=k;
		m+=x;
		i++;
	}
	s.close();
	e = sqrt((j/i)-pow((m/i),2));
	cout << "Number of data = "<<i<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<(m/i)<<endl;
    cout << "Standard deviation = "<<e<<endl;
	return 0;
}