#include "person.h"
#include "course.h"
//#include "semestertype.h"

//Constructor for Student class
Student ::Student(const std::string& name, int age, const std::string& email, const std::string& gender, const std::string& nationality, int id, SemesterType semester)
    : Person(name, age, email, gender, nationality, id) {
            cout << "Student created" << std::endl;
    }

//Destructor for Student class
Student ::~Student() {
        cout << "Student deleted" << std::endl;
}



void Student :: printNewStudent() const {
        cout << "Student created" << std :: endl;
}


//total ects count initializer 
int Student::totalEctsCount = 0;

int Student::getTotalEcts() {
    return totalEctsCount;
}

/*
void Student::enrollStudentToCourse(Course *coursname) {

        enrolledCourses.push_back(coursname);

        cout <<"Student " << getName() << "enrolled to course " << coursname->getCourseName() << "." << endl ;
          

}
*/
