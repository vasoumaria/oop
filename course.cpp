#include "course.h"

Course :: Course(const string& c, SemesterType s, int ectspoints,const bool mand)
        : coursename(coursename), semester(semester), ects(ects), mandatory(mandatory){
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
    cout << "Course name: " << coursename << "\n"
    << "Course Semester: " << semester << "\n"
    << "Course Ects: " << ects << "\n"
    << "Mandatory: " << (mandatory ? "yes" : "no") << endl; 
}

