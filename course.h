#ifndef COURSE_H
#define COURSE_H

#include "secretary.h"

class Course {
    private:
        string coursename ;
        int ects ;
        SemesterType semester ;
        bool mandatory ;
    
    public:
        Course(const string& coursename, SemesterType semester, int ects, const bool mandatory) ;
        
        ~Course() ;

        string getCourseName() const ;
        int getEcts() const ;
        SemesterType getSemester() const ;
        bool getisMandatory() const ;
        
        //overloading the << operator to print objects of type Course
        friend ostream& operator << (ostream& os, const Course& c) ;

        //function to move a course to a different semester
        void moveCourseToSemester(SemesterType newSemester) ;
        
        //function to print course details
        void printCourseDetails() const ;

};

#endif