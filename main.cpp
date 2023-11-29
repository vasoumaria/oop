
#include "Secretary.h"
using namespace std ;

int main() {
    // Δημιουργία αντικειμένων Person
    Person p1("John", 25, "vasoumarioam@gmail.com" ,"female" ,"greek" , 2200263); // Δημιουργία ενός αντικειμένου τύπου Person
    Person p2("Alice", 30 ,"teo@gmail.com" ,"male" ,"albano" ,1900266);

    // Εμφάνιση του αριθμού των αντικειμένων Person που έχουν δημιουργηθεί
    std::cout << "Number of people: " << Person::getCount() << std::endl;

    // Δημιουργία αντικειμένου Secretary
    Secretary secretary(5);

    // Προσθήκη αντικειμένων Person στον Secretary
    secretary.addPerson(&p1);
    secretary.addPerson(&p2);

    // Εμφάνιση του Secretary
    cout << "Secretary:" << std::endl;
    cout << secretary;

    // Έλεγχος αν υπάρχει ένα συγκεκριμένο πρόσωπο στον Secretary
    if (secretary.findPerson("Alice")) {
        cout << "Alice found in Secretary." << std::endl;
    } else {
        cout << "Alice not found in Secretary." << std::endl;
    }

    return 0;
}
