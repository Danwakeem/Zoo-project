/*
 * Name: Dan Jarvis
 * Class: Computer Foundations I
 * Data 04/08/14
 */

#include <iostream>
using namespace std;

// decairation of Zoo class wich will contsin all animals
class Zoo {
   // This is my private color string
   private:
      string color;

   // All methods virtual so they can be overridden by sub classes
   // These will have default messages for animals that do not belong to a sub class
   public: virtual void has4Legs();
           virtual void eats();
           virtual void hasFur();
           virtual void printName();
           virtual void setColor(string);
           virtual string getColor();
           virtual void setThem(string);
           virtual string getThem();
	   virtual void info();
};

// Class for the carnivores to use. it will say they eat meat
class carnivores : virtual public Zoo {
   private: string color;
   public: void eats();
           virtual void setColor(string);
           virtual string getColor();
};

// Class for thr animals with 4 legs. it will say they have 4 legs
class fourLegs : virtual public Zoo {
   private: string color;
   public: void has4Legs();
           virtual void setColor(string);
           virtual string getColor();
};

// Class for the animals with fur. it eill say they have fur
class fur : virtual public Zoo{
   private: string color;
   public: void hasFur();
           virtual void setColor(string);
           virtual string getColor();
};

// Animal classes will just store their names and have a method to print those names
// The constructor will initilize the names
class lions : virtual public carnivores, virtual public fur, virtual public fourLegs {
   private: string name, color;
   public: lions();
	   void printName();
           void setColor(string);
           string getColor();
};

class parrots : virtual public Zoo {
   private: string name, color;
   public: parrots();
	   void printName();
           void setColor(string);
           string getColor();
};

class alligators : virtual public carnivores, virtual public fourLegs {
   private: string name, color;
   public: alligators();
	   void printName();
           void setColor(string);
           string getColor();
};

class penguins : virtual public Zoo {
   private: string name, color;
   public: penguins();
	   void printName();
           void setColor(string);
           string getColor();
};

class elephants : virtual fur, virtual public fourLegs{
   private: string name, color;
   public: elephants();
	   void printName();
           void setColor(string);
           string getColor();
};

class cobras : virtual public carnivores{
   private: string name, color;
   public: cobras();
	   void printName();
           void setColor(string);
           string getColor();
};

class zebras : virtual fur, virtual public fourLegs{
   private: string name, color;
   public: zebras();
	   void printName();
           void setColor(string);
           string getColor();
};

class hawks : virtual public Zoo {
   private: string name, color;
   public: hawks();
	   void printName();
           void setColor(string);
           string getColor();
};

class turkeys : virtual public Zoo {
   private: string name, color;
   public: turkeys();
	   void printName();
           void setColor(string);
           string getColor();
};

class rabbits : virtual fur, virtual public fourLegs{
   private: string name, color;
   public: rabbits();
	   void printName();
           void setColor(string);
           string getColor();
};
