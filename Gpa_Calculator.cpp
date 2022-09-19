#include <iostream>
using namespace std;
  
int main()
{
    char grade;
    int num_credits, total_num_credits = 0;
    double total_grade_points = 0;
    do{
    cout << "No. of credits of ur course (0 to stop)";
    cin>> num_credits;
    cout << "Letter grade (A, B, C ,D or F):";
    if (num_credits == 0){
        break;
    }
        
    cin >>grade;
    total_num_credits += num_credits;

    switch (grade)
    {
    case 'A':
        total_grade_points += num_credits * 4;
        break;
    case 'B':
        total_grade_points += num_credits * 3;
        break;
    case 'C':
        total_grade_points += num_credits * 2;
        break;
    case 'D':
        total_grade_points += num_credits * 1;
        break;
    case 'F':
        total_grade_points += num_credits * 0;
        break;

    default:
        break;
    }
    }while(num_credits != 0);

    cout << total_grade_points/ total_num_credits;

    return 0;
}
