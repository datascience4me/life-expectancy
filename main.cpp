/*
 * file: main.cpp
 * purpose: Entry point for the life-expectancy executable. Run the program
 *          with the appropriate command line select to run the portion requested.
 */

#include <cstdlib>
#include <getopt.h>
#include <iostream>
#include "utils.h"


namespace
{
const std::string programName = "life-expectancy";
}


void printUsageAndExit()
{
   const std::string usageStr =
      "usage: " + programName + "[options] [-a|--app] application [-f|--file] filename\n" +
      "-a, --app application  : Determines which of the applications to run\n" +
      "-f, --file filename    : Gives the filename of the data textfile\n" +
      "-h, --help             : Prints this usage message and exits\n";

   std::cout << usageStr << std::endl;

   exit(0);
}


int main(int argc, char ** argv)
{
   const char * const short_options = "hf:a:";
   const struct option long_options[] = {
      { "help",     0, nullptr, 'h' },
      { "file",     1, nullptr, 'f' },
      { "app",      1, nullptr, 'a' },
      { nullptr,    0, nullptr, 0   }
   };

   int nextOption = 0;
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

   if ("util" == application)
   {
      utils_main(filename);
   }

   return 0;
}