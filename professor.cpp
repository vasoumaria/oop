#include "person.h"
#include "course.h"

Professor :: Professor(const string& name, int age, const string& email, const string& gender, const string& nationality, int id)
    : Person(name, age, email, gender, nationality, id) {
        cout  << "Professor created" << std :: endl;
        n = 0;
    }

Professor ::~Professor() {
        cout << "Professor deleted" << std :: endl;
}

/*
void Professor::assignCourseToProfessor(Course *coursename){

    assignedCourses.push_back(coursename);
    cout << "Professor " << getName() << "assigned to teach: " << coursename->getCourseName() << "." << endl ;

}
*/


/*
void Professor::gradeStudent(Student *student, Course *coursename, int grade) {

    for ()

        cout << "Professor " << getName() << "graded student " << student->getName() << 
        "for course " << coursename->getCourseName() << "with grade: " << grade << endl ;

}
*/

