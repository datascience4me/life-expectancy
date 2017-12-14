/*
 * file: main.cpp
 * purpose: Entry point for the life-expectancy executable. Run the program
 *          with the appropriate command line select to run the portion requested.
 */

#include <string>
#include <getopt.h>
#include <cstdlib>


void printUsageAndExit()
{
   // print usage and exit
}


int main(int argc, char ** argv)
{
   int nextOption = 0;
   std::string programName(argv[0]);

   constexpr char * const short_options = "hf:a:";
   constexpr struct option long_options[] = {
      { "help",     0, nullptr, 'h' },
      { "file",     1, nullptr, 'f' },
      { "app",      1, nullptr, 'a' },
      { nullptr,    0, nullptr, 0   }
   };

   std::string filename;
   std::string application;

   do
   {
      nextOption = getopt_long(argc, argv, short_options, long_options, nullptr);
      switch (nextOption)
      {
         case 'h':   // -h or --help
            printUsageAndExit();
            break;
         case 'f':   // -f or --file
            filename = optarg;
            break;
         case 'a':   // -a or --app
            application = optarg;
            break;
         case '?':   // invalid option
            printUsageAndExit();
            break;
         case -1:    // went through all provided options
            break;
         default:    // something unexpected
            abort();
      }
   }
   while (-1 != nextOption);


   return 0;
}