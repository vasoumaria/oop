#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

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
    string nnationality() const;
    int getId() const;


    //Δήλωση του υπερφορτωμένου τελεστή εξόδου για την εκτύπωση αντικειμένων τύπου Person.
    friend std::ostream& operator<<(std::ostream& os, const Person& person);

    //  Δήλωση της στατικής συνάρτησης getCount που επιστρέφει τον
    //  αριθμό των αντικειμένων Person που έχουν δημιουργηθεί.
    static int getCount(); // Δήλωση της στατικής συνάρτησης getCount
};

#endif // PERSON_H
