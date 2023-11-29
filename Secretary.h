#ifndef SECRETARY_H
#define SECRETARY_H

#include "person.h" //η κλάση Secretary χρησιμοποιεί αντικείμενα τύπου Person.

class Secretary { //δήλωση της κλάσης Secretary.
private:
    Person** people; //Δείκτης σε πίνακα από δείκτες σε αντικείμενα τύπου Person.
    int size; //μεγεθος πινακα

public:  // προσβάσιμα 
    Secretary(int s); // Ο κατασκευαστής της κλάσης Secretary που δέχεται ένα μέγεθος για τον πίνακα people.
    ~Secretary();  //Ο καταστροφέας της κλάσης Secretary.

    void addPerson(Person* person); //Προσθέτει ένα αντικείμενο τύπου Person στον πίνακα people. 
    bool findPerson(const std::string& name); //Αναζητά ένα άτομο με βάση το όνομα στον πίνακα people.

    //Δήλωση του υπερφορτωμένου τελεστή εξόδου για την εκτύπωση αντικειμένων τύπου Secretary.
    friend std::ostream& operator<<(std::ostream& os, const Secretary& secretary);

    //Δήλωση του copy constructor για την κλάση Secretary.
    Secretary(const Secretary& other);
    //Δήλωση του υπερφορτωμένου τελεστή ανάθεσης για την κλάση Secretary.
    Secretary& operator=(const Secretary& other);
};

#endif // SECRETARY_H
