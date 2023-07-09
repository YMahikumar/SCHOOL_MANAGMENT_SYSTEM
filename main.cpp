#include <bits/stdc++.h>
#include "human.cpp"
#include "student.cpp"
#include "student_directory.cpp"
#include "staff.cpp"
#include "staff_directory.cpp"
using namespace std;


int main()
{
    AdmissionSystem admission;
    admission.addStudent();
    admission.displayStudents();
    admission.student_grades();
    admission.edit_details();
    admission.displayStudents();
    admission.student_deletion();
    admission.displayStudents();

    staff_directory staff;
    staff.new_joining();
    staff.displayStaff();
    staff.edit_details();
    staff.displayStaff();
    staff.remove_staff();
    staff.displayStaff();
}