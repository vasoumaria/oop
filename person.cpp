#include "person.h"

int Person::count = 0; // Ορισμός του στατικού μέλους count
int Professor::n = 0;
Person::Person(const string& n, int a, const string& e, const string& g, const string& nat, int i)
    : name(n), age(a), email(e), gender(g), nationality(nat), id(i) {
    count++;
}


Person::~Person() {
    count--;  //καθε φορα που καταστρεφω ενα ατομο μειωνω τον μετρητή
    //cout << "Person deleted" << endl ;
}


string Person::getName() const {
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

string Person::getNationality() const {
    return nationality;
}

int Person::getId() const {
    return id;

}


// Ο υπερφορτωμένος τελεστής εξόδου για την εκτύπωση
// αντικειμένων τύπου Person. Εκτυπώνει το όνομα και την ηλικία του ατόμου.
std:: ostream& operator << (std:: ostream& os, const Person& Person) {
    os << "Name: " << Person.name << " "<< "\n"
        << "Age: " << Person.age<< "\n" 
        << "Email: " << Person.email << "\n"
        << "Gender: " << Person.gender << "\n"
        << "Nationality: " << Person.nationality << "\n"
        << "ID: " << Person.id << "\n" ;       
        //evala to age 2o 
    return os ;
}

//Επιστρέφει τον αριθμό των αντικειμένων Person που έχουν δημιουργηθεί.
int Person::getCount() {
    return count;
}
