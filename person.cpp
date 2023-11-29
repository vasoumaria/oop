#include "person.h"

int Person::count = 0; // Ορισμός του στατικού μέλους count

Person::Person(const std::string& n, int a, const std::string& e, const std::string& g, const std::string& nat, int i)
    : name(n), age(a), email(e), gender(g), nationality(nat), id(i) {
    count++;
}


Person::~Person() {
    count--;  //καθε φορα που καταστρεφω ενα ατομο μειωνω τον μετριτή 
}


std::string Person::getName() const {
    return name;   //επιστρεφω το ονομα του 
}

int Person::getAge() const {
    return age;   // επιστρεφω τη ηλικια του 
} 

string Person::getemail() const {
    return email ;
}

string Person::getgender() const {
    return gender;
}

string Person::nnationality() const {
    return nationality;
}

int Person::getId() const {
    return id;
}


// Ο υπερφορτωμένος τελεστής εξόδου για την εκτύπωση
// αντικειμένων τύπου Person. Εκτυπώνει το όνομα και την ηλικία του ατόμου.
std:: ostream& operator << (std:: ostream& os, const Person& Person) {
    os << "Name: " << Person.name << " "<< "\n"
        << "Email: " << Person.email << "\n"
        << "Gender: " << Person.gender << "\n"
        << "Nationality: " << Person.nationality << "\n"
        << "ID: " << Person.id << "\n"
        << "Age: " << Person.age<< "\n" ;
    return os ;
}

//Επιστρέφει τον αριθμό των αντικειμένων Person που έχουν δημιουργηθεί.
int Person::getCount() {
    return count;
}
