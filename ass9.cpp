/*8. Enter mark obtained      by a student in a subject and print the respective grade using else-if ladder statement. Consider      the following grading system:
Score out of 100 Marks                                                          Grade 

90 & above up to 100                                                             O 

80 & above but less than 90                                                   E 

70 & above but less than 80                                                   A 

60 & above but less than 70                                                   B 

50 & above but less than 60                                                   C 

40 & above but less than 50                                                   D 

Less than 40 or Absent in Exam                                             U*/

#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if(marks >= 90 && marks <= 100)
        cout << "Grade O";

    else if(marks >= 80)
        cout << "Grade E";

    else if(marks >= 70)
        cout << "Grade A";

    else if(marks >= 60)
        cout << "Grade B";

    else if(marks >= 50)
        cout << "Grade C";

    else if(marks >= 40)
        cout << "Grade D";

    else if(marks >= 0)
        cout << "Grade U";

    else
        cout << "Invalid Marks";

    return 0;
}

