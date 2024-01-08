#ifndef PERSON_H
#define PERSON_H

#include "semestertype.h"


using namespace std ;

class Person {
    private: //Τα μέλη που ακολουθούν αυτήν τη λέξη-κλειδί είναι ιδιωτικά και δεν είναι προσβάσιμα από άλλες κλάσεις ή συναρτήσεις.
        string name; // Δύο ιδιωτικά μέλη της κλάσης Pers
        int age;          // που αντιπροσωπεύουν το όνομα και την ηλικία του ατόμου.
        string email ;
        string gender ;
        string nationality ;
        int id ; 
        static int count; // Δήλωση του στατικού μέλους count
                    //μετρήσει πόσα αντικείμενα τύπου Person έχουν δημιουργηθεί.

    public: //Τα μέλη που ακολουθούν αυτήν τη λέξη-κλειδί είναι προσβάσιμα από τον κώδικα έξω από την κλάση.
        Person(const string& name, int a, const string& e, const string& g, const string& nat, int id); //Ο κατασκευαστής της κλάσης Person, που δέχεται ένα όνομα και μια ηλικία.
        ~Person(); // Ο καταστροφέας της κλάσης Person, που εκτελείται όταν ένα αντικείμενο καταστραφεί.

        string getName() const; //συναρτήσεις μέλη που επιστρέφουν 
        int getAge() const;  //το όνομα και την ηλικία αντίστοιχα.
        string getemail() const ;
        string getgender() const;
        string getNationality() const;
        int getId() const;
        //SemesterType semester() const;

        //Δήλωση του υπερφορτωμένου τελεστή εξόδου για την εκτύπωση αντικειμένων τύπου Person.
        friend ostream& operator<<(ostream& os, const Person& person);

        //  Δήλωση της στατικής συνάρτησης getCount που επιστρέφει τον
        //  αριθμό των αντικειμένων Person που έχουν δημιουργηθεί.
        static int getCount(); // Δήλωση της στατικής συνάρτησης getCount

        // function to calculate ects for a student
        static int getTotalEcts();
};


class Student : public Person {
    private:
        SemesterType semester ;
        //vector <Course*> enrolledCourses ; //courses enrolled by a student in+6-*9 a semester
    public:
        Student(const string& name, int age, const string& email, const string& gender, const string& nationality, int id, SemesterType semester) ;
        ~Student () ;

        static int totalEctsCount ;
        void printNewStudent() const ;

        //function to enroll student to a course
        //void enrollStudentToCourse(Course *coursename);
};

class Professor : public Person {
    private:
        //vector <Course*> assignedCourses ; //courses assigned to the professor for the current semester
        static int n;
    public:
        Professor(const string& name, int age, const string& email, const string& gender, const string& nationality, int id) ;

        ~Professor () ;

        //assign a course to the professor in the current semester
        //void assignCourseToProfessor(Course *coursename);

        //function to grade student at the end of the semester
        //void gradeStudent(Student *student, Course *coursename, int grade);

        
};

#endif // PERSON_H