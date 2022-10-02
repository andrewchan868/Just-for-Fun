#include<iostream>
#include<string>
using namespace std;

struct Questions
{
private:
	string ques;
	int ans;
	string options;
public:
	void question(string ques,string options)
	{
		cout << ques << endl;
		cout << options << endl;
	}

	void getAnswer()
	{
		int a = ans;
		cin >> ans;
	}
	void answer(int n)
	{
		if (ans == n) {
			cout << "Your answer is correct!!" << endl;
		}
		else {
			cout << "Your answer is incorrect" << endl;
		}
	}
};

int main()
{
	Questions q1; //add many number of objects if you want
	q1.question("What is the least number?", "1) 12, 2)34, 3)90");
	q1.getAnswer();
	q1.answer(1);

	Questions q2; //add many number of objects if you want
	q2.question("What is the next number of 6, 8, 20, 36, 70, 128?", "1)230, 2)234, 3)156");
	q2.getAnswer();
	q2.answer(2);

	Questions q3; //add many number of objects if you want
	q3.question("What is the next number of 10, 18, 35, 56, 99, 130", "1)187, 2)188, 3)199");
	q3.getAnswer();
	q3.answer(1);


	return 0;
}
