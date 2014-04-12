/*
 * Name: Dan Jarvis
 * Class: Computer Foundations I
 * Data 04/08/14
 */

#include "zoo.h"

// These are the messages for all the animals that do not belong to the subclasses
void Zoo::has4Legs(){ cout << "don't have 4 legs." << endl; }
void Zoo::eats() { cout << "don't eat meat." << endl; }
void Zoo::hasFur(){ cout << "don't have fur." << endl; }
void Zoo::printName(){ };
void Zoo::setColor(string s){ color = s; }
string Zoo::getColor(){ return color; }

// The message for all the carnivores to use
void carnivores::eats(){ cout << "eat meat" << endl; }
void carnivores::setColor(string s){color = s;}
string carnivores::getColor(){ return color; }

// The message for all the 4 legged animals
void fourLegs::has4Legs(){ cout << "have four legs." << endl; }
void fourLegs::setColor(string s){color = s;}
string fourLegs::getColor(){ return color; }

// The message for all the animals that have fur
void fur::hasFur(){ cout << "have fur." << endl; }
void fur::setColor(string s){color = s;}
string fur::getColor(){ return color; }

// The constructors and name print outs for Ll the animals
lions::lions(){ name = "lions "; color = "Blonde"; }
void lions::printName(){ cout << name << " "; }
string lions::getColor(){ return color; }
void lions::setColor(string s){color = s;}

parrots::parrots(){ name = "parrots "; color = "green"; }
void parrots::printName(){ cout << name << " "; }
string parrots::getColor(){ return color; }
void parrots::setColor(string s){color = s;}

alligators::alligators(){ name = "alligators "; color = "green"; }
void alligators::printName(){ cout << name << " "; }
string alligators::getColor(){ return color; }
void alligators::setColor(string s){color = s;}

penguins::penguins(){ name = "penguins "; color = "black"; }
void penguins::printName(){ cout << name << " "; }
string penguins::getColor(){ return color; }
void penguins::setColor(string s){color = s;}

elephants::elephants(){ name = "elephants "; color = "grey"; }
void elephants::printName(){ cout << name << " "; }
string elephants::getColor(){ return color; }
void elephants::setColor(string s){color = s;}

cobras::cobras() { name = "cobras "; color = "brown"; }
void cobras::printName(){ cout << name << " "; }
string cobras::getColor(){ return color; }
void cobras::setColor(string s){color = s;}

zebras::zebras() { name = "zebras "; color = "Black and white"; }
void zebras::printName(){ cout << name << " "; }
string zebras::getColor(){ return color; }
void zebras::setColor(string s){color = s;}

hawks::hawks() { name = "hawks "; color = "brown"; }
void hawks::printName(){ cout << name << " "; }
string hawks::getColor(){ return color; }
void hawks::setColor(string s){color = s;}

turkeys::turkeys() { name = "turkeys "; color = "brown"; }
void turkeys::printName(){ cout << name << " "; }
string turkeys::getColor(){ return color; }
void turkeys::setColor(string s){color = s;}

rabbits::rabbits() { name = "rabbits"; color = "white"; }
void rabbits::printName(){ cout << name << " "; }
string rabbits::getColor(){ return color; }
void rabbits::setColor(string s){color = s;}

// The print out of info for each animal
// will either print the default message or custom one from a subclass
void Zoo::info(){
   printName();
   has4Legs();
   printName();
   eats(); 
   printName();
   hasFur();
}

void Zoo::setThem(string s){
   setColor(s);
}

string Zoo::getThem(){
   printName();
   return getColor();
}
