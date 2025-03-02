#include "Kontakt.hpp"
#include <string>
#include <iostream>

Kontakt::Kontakt(std::string& vorname,std::string& nachname,std::string& telefonummer,std::string adresse) : vorname(vorname), nachname(nachname),telefonnummer(telefonnummer),adresse(adresse) {}
std::string Kontakt::getvorname() const { return vorname; }
std::string Kontakt::getnachname() const {return nachname;}
std::string Kontakt::gettelefonnummer() const {return telefonnummer;}
std::string Kontakt::getadresse() const {return adresse;}
void Kontakt::anzeigen() const {
    std::cout << "Vorname: " << vorname << std::endl;
    std::cout << "Nachname: " << nachname << std::endl;
    std::cout << "Telefonnummer: " << telefonnummer << std::endl;
    std::cout << "Adresse: " << adresse << std::endl;
}