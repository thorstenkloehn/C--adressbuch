#include "Kontakt.hpp"
#include <string>

Kontakt::Kontakt(std::string& vorname,std::string& nachname,std::string& telefonummer,std::string adresse) : vorname(vorname), nachname(nachname),telefonnummer(telefonnummer),adresse(adresse) {}
std::string Kontakt::getvorname() const { return vorname; }
std::string Kontakt::getnachname() const {return nachname;}
std::string Kontakt::gettelefonnummer() const {return telefonnummer;}
std::string Kontakt::getadresse() const {return adresse;}