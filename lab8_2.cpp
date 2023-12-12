#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(float s){
    if(s > 90) return 'A';
    else if(75 < s && s <= 90) return 'B';
    else if(60 < s && s <= 75) return 'C';
    else if(45 < s && s <= 60) return 'D';
    else return 'F';
}

int main(){
    
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin, name[i]);

		cout << "Score of student " << i+1 << ": ";
        	cin >> score[i];

		i++;
	}
	
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
