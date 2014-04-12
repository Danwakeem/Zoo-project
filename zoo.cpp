/*
 * Name: Dan Jarvis
 * Class: Computer Foundations I
 * Data 04/08/14
 */

#include "zoo.h"

int main(){
   // array fir thr animals
   Zoo *a[15];

   // filling the array with all the animals
   a[0] = new lions();
   a[1] = new parrots();
   a[2] = new alligators();
   a[3] = new penguins();
   a[4] = new elephants();
   a[5] = new cobras();
   a[6] = new zebras();
   a[7] = new hawks();
   a[8] = new turkeys();
   a[9] = new rabbits();

   // Welcome message
   cout << endl;
   cout << "************************************************" << endl;
   cout << "* Welcome to Uncle Dan's famous small town Zoo *" << endl;
   cout << "**************** We <3 animals *****************" << endl;
   cout << "************************************************" << endl;
   cout << endl;

   // Print info for each animal in the array
   for(int i = 0; i < 10; i++){
      a[i]->info();
   }

   // Extra space
   cout << endl;

   // Print out the color of the animals to show you I know how to use getters
   cout << "***************************************" << endl;
   cout << "*These are the animals original colors*" << endl;
   cout << "***************************************" << endl;
   for(int i = 0; i < 10; i++){
      cout << a[i]->getThem() << endl;
   }

   // Extra space
   cout << endl;

   // Change the color of the animals to show I know how to use setters
   string defaultColorForAll = "Blonde";
   for(int i = 0; i < 10; i++){
      a[i]->setThem(defaultColorForAll);
   }

   // Printing out the new colors
   cout << "**********************************" << endl;
   cout << "*These are the animals new colors*" << endl;
   cout << "**********************************" << endl;
   for(int i = 0; i < 10; i++){
      cout << a[i]->getThem() << endl;
   }
  
   // Extra space
   cout << endl;

   // Exit program
   return 0;
}
