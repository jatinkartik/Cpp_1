#include <iostream>

#include <fstream>

using namespace std;

int main()
{

   fstream my_file;
   

   if (!my_file)
   {

      cout << "File not created!";
   }

   else
   {

      cout << "File created successfully!";

      my_file << "Guru99";

      my_file.close();
   }

   return 0;
}