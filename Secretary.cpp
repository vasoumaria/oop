#include "Secretary.h"

// Ο κατασκευαστής της κλάσης Secretary, που δέχεται ένα μέγεθος για 
// τον πίνακα people και δυναμικά δεσμεύει μνήμη για τον πίνακα.
Secretary::Secretary(int s) : size(s) {
    people = new Person*[size]; //Δεσμεύει μνήμη για έναν πίνακα δεικτών προς αντικείμενα τύπου Person.
    for (int i = 0; i < size; i++) { //Αρχικοποιεί κάθε στοιχείο 
        people[i] = nullptr; //του πίνακα people σε nullptr.
    }
}

Secretary::~Secretary() { //Ο καταστροφέας της κλάσης Secretary, 
    delete[] people; //που απελευθερώνει τη δεσμευμένη δυναμικά μνήμη για τον πίνακα people.
}

//προσθέτει ένα αντικείμενο τύπου Person στον πίνακα people.
void Secretary::addPerson(Person* person) {
    for (int i = 0; i < size; i++) {
        if (people[i] == nullptr) {
            people[i] = person;
            break;
        }
    }
}

//που αναζητά ένα άτομο με βάση το όνομα στον πίνακα people.
bool Secretary::findPerson(const std::string& name) {
    for (int i = 0; i < size; i++) {
        if (people[i] != nullptr && people[i]->getName() == name) {
            return true;
        }
    }
    return false;
}
//Ο υπερφορτωμένος τελεστής εξόδου για την εκτύπωση αντικειμένων τύπου Secretary.
std::ostream& operator<<(std::ostream& os, const Secretary& secretary) {
    for (int i = 0; i < secretary.size; i++) {
        if (secretary.people[i] != nullptr) {
            os << *(secretary.people[i]) << std::endl;
        }
    }
    return os;
}
//Ο copy constructor της κλάσης Secretary, που δημιουργεί
// ένα νέο αντικείμενο με βάση ένα υπάρχον αντικείμενο.
Secretary::Secretary(const Secretary& other) : size(other.size) {
    people = new Person*[size];
    for (int i = 0; i < size; i++) {
        if (other.people[i] != nullptr) {
            people[i] = new Person(*(other.people[i]));
        } else {
            people[i] = nullptr;
        }
    }
}
// Ο υπερφορτωμένος τελεστής ανάθεσης για την κλάση Secretary.
Secretary& Secretary::operator=(const Secretary& other) {
    if (this != &other) {  //Ελέγχει αν το αντικείμενο που αντιγράφεται 
        delete[] people;  //δεν είναι το ίδιο με το αντικείμενο που αντιγράφεται. 
                         //Σε διαφορετική περίπτωση, δεν χρειάζεται καμία ενέργεια.
        size = other.size;  // Αντιγράφει το μέγεθος
        people = new Person*[size];  //δεσμεύει νέα μνήμη για τον πίνακα people.

        for (int i = 0; i < size; i++) {    //Κάνει βαθιά αντιγραφή των αντικειμένων 
            if (other.people[i] != nullptr) { //από τον πίνακα other.people στον πίνακα people.
                people[i] = new Person(*(other.people[i]));
            } else {
                people[i] = nullptr;
            }
        }
    }
    return *this; //Επιστρέφει το αντικείμενο ανάθεσης για να επιτρέψει αλυσιδωτές αναθέσεις.
}
