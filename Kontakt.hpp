#ifndef KONTAKT_HPP
#define KONTAKT_HPP
#include <string>
class Kontakt {
private: 
   std::string vorname;
   std::string nachname;   
   std::string telefonnummer;
   std::string adresse;
   public:
   Kontakt(std::string& vorname,std::string& nachname,std::string& telefonummer,std::string adresse);
   std::string getvorname() const;
   std::string  getnachname() const;
   std::string gettelefonnummer() const;
   std::string  getadresse() const;
   void anzeigen() const;
   
};

#endif