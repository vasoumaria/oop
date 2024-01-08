#include "course.h"

Course :: Course(const string& c, SemesterType s, int ects,const bool mand)
        : coursename(c), semester(s), ects(ects), mandatory(mand){
            cout << "Course created" << endl ;
        }

        Course::~Course(){
            cout << "Course deleted" << endl ;
        }

string Course::getCourseName() const {
    return coursename;
}

SemesterType Course::getSemester() const {
    return semester;
}

int Course::getEcts() const {
    return ects;
}

bool Course::getisMandatory() const {
    return mandatory;
}

void Course::moveCourseToSemester(SemesterType newSemester) {
    semester = newSemester;
    cout << "Course " << coursename << " moved to " << semester << " semester" << endl;
}

void Course::printCourseDetails() const{
    // Ορίζουμε έναν πίνακα με τα ονόματα των εξαμήνων
        const char* semesterNames[] = {
            "FALL1", "FALL2", "FALL3", "FALL4", "SPRING1", "SPRING2", "SPRING3", "SPRING4"
        };


    cout << "Course name: " << coursename << "\n"
    << "Course Semester: " << semesterNames[static_cast<int>(semester)]  << "\n"
    << "Course Ects: " << ects << "\n"
    << "Mandatory: " << (mandatory ? "yes" : "no") << endl; 
}

