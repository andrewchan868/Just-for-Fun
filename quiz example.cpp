#include <iostream>
using namespace std;

struct Answers {
	string Answer_i[3];
};

struct Question{
	string Question_i;
	Answers A1;
};

int main() {

	int input = 0;
	int Correct=0;
	int inCorrect = 0;
	string questionSource[3] = {"1. Handsome Boy (Pick 1 - 3)","2. Richest (Pick 1 - 3)","3. Tallest (Pick 1 - 3)"};
	string answersSource[3][3] = { {"Andrew","SS","Tom"}, {"Andrew","SS","Tom"},{"Andrew","SS","Tom"} };
	int Answerscheck[3] = {1,2,3};
	Question Qi[3];
	for (int i = 0; i < 3; i++) {
		Qi[i].Question_i = questionSource[i];
		cout << Qi[i].Question_i << endl;


		for (int j = 0; j < 3; j++) {
				Qi[i].A1.Answer_i[j] = answersSource[i][j];
				cout << Qi[i].A1.Answer_i[j] << "		";
			}
		
		cout << endl;

			cout << "Answer : ";
			cin >> input;


			if (input == Answerscheck[i]) {
				cout << "Correct!" << endl;
				Correct++;
			}
			else {
				cout << "inCorrect!" << endl;
				inCorrect++;
			}
			cout << endl;
	}

	cout << endl; cout << endl;
	cout << "Total correct answers : " << Correct<<endl;
	cout << "Total Incorrect answers : " << inCorrect<<endl;

	

	return 0;
}
