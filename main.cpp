#include "course.h"

int main() {
   

    // Δημιουργία αντικειμένων Person
    Person p0("Alex", 14, "alexismar@gmail.com", "male", "greek", 1900001);
    Student p1("Maria", 25, "vasoumarioam@gmail.com" ,"female" ,"greek" , 2200263, FALL2); // Δημιουργία ενός αντικειμένου τύπου Person
    Professor p2("Teo", 30 ,"teo@gmail.com" ,"male" ,"amerikan" ,1800266);

    // Εμφάνιση του αριθμού των αντικειμένων Person που έχουν δημιουργηθεί
    std::cout << "Number of people: " << Person::getCount() << std::endl;

    // Δημιουργία αντικειμένου Secretary
    Secretary secretary(5);

    // Προσθήκη αντικειμένων Person στον Secretary
    secretary.addPerson(&p0);
    secretary.addPerson(&p1);
    secretary.addPerson(&p2);



    // Εμφάνιση του Secretary
    cout << "Secretary:" << std::endl;
    cout << secretary;

    // Έλεγχος αν υπάρχει ένα συγκεκριμένο πρόσωπο στον Secretary
    if (secretary.findPerson("Alex")) {
        cout << "Alice found in Secretary." << std::endl;
    } else {
        cout << "Alice not found in Secretary." << std::endl;
    }

   /*ΕΡΓΑΣΙΑ 2 */

    //Add course to a student
    Course oopCourse("OOP", FALL4, 8, true);
    Course introCourse("Intro", FALL1, 8, true);
    Course AppliedMath("Applied Math", SPRING2, 6, false);

   
    
    oopCourse.printCourseDetails() ;

    return 0;
}
