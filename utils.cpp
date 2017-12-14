/*
 * file: utils.cpp
 * purpose:
 */

#include <string>
#include <fcntl.h>
#include <fstream>
#include <sstream>
#include "utils.h"

namespace
{
const std::string baseFilePathStr = "./data";
}


void splitString(std::string const & str, std::string const & separatorCharacter, std::vector<std::string> & mySplitString);


int utils_main(std::string const & filename)
{
   // open files, parse into the data
   std::vector<LIFE_EXPECTANCY_METADATA> metadata;
   std::vector<LIFE_EXPECTANCY_DATA> data;

   if (read_data(filename, data, metadata))
   {
      // the file was full of regular data format
   }
   else
   {
      // the file was full of metadata
   }

   // find total number of entities
   // total number of countries

   // for each region, find their country count

   // for each income category, find country count

   // ask for region name
   // list countries in that region

   // ask for income category
   // list countries in that category

   // repeatedly ask for countries names or country codes

   return 0;
}


bool read_data(std::string const & filename,
               std::vector<LIFE_EXPECTANCY_DATA> & data,
               std::vector<LIFE_EXPECTANCY_METADATA> & metadata)
{
   std::ifstream inputFile;
   inputFile.open(baseFilePathStr + "/" + filename);
   if (!inputFile)
   {
      // file open failed
      exit(1);
   }

   bool isDataFile(0 < filename.find("metadata"));

   std::string line;
   int lineNumber(0);

   // while there is still a line in the file
   while (inputFile)
   {
      std::getline(inputFile, line);
      // if the line number isn't zero, we aren't on the header line
      if (0 != lineNumber)
      {
         std::string separator = ",";
         std::vector<std::string> splitLine;
         splitString(line, separator, splitLine);

         if (isDataFile)
         {
            // take the split string and encode it as data
            std::map<int, double> lifeExpectancyAnnualData;
            int idx(0);
            for (auto iter = splitLine.begin() + 2; iter != splitLine.end(); iter++)
            {
               // if this entry is not empty string
               if (!(*iter).empty())
               {
                  // add the data to the map
                  lifeExpectancyAnnualData.insert(std::pair<int, double>(1960 + idx, strtod((*iter).c_str(), nullptr)));
               }
               idx++;
            }

            LIFE_EXPECTANCY_DATA dataItem(splitLine[0], splitLine[1], lifeExpectancyAnnualData);
            data.push_back(dataItem);
         }
         else
         {
            // *metadata.txt
            INCOME_CLASS incomeClass(INCOME_CLASS::DEFAULT);
            // which income class?
            if (0 < splitLine[2].find("Low "))
            {
               incomeClass = INCOME_CLASS::LOW;
            }
            else if (0 < splitLine[2].find("Lower"))
            {
               incomeClass = INCOME_CLASS::LOWER_MIDDLE;
            }
            else if (0 < splitLine[2].find("Upper"))
            {
               incomeClass = INCOME_CLASS::UPPER_MIDDLE;
            }
            else if (0 < splitLine[2].find("High"))
            {
               incomeClass = INCOME_CLASS::HIGH;
            }

            LIFE_EXPECTANCY_METADATA dataItem(splitLine[0], splitLine[1], incomeClass);
            metadata.push_back(dataItem);
         }
      }
      lineNumber++;
   }

   inputFile.close();

   return !isDataFile;
}


void splitString(std::string const & str, std::string const & separatorCharacter, std::vector<std::string> & mySplitString)
{
   std::stringstream myStream(str);
   std::string memberUnderConstruction;
   std::string currentChar;

   while (myStream >> currentChar)
   {
      if (separatorCharacter == currentChar)
      {
         mySplitString.push_back(memberUnderConstruction);
         memberUnderConstruction.clear();
      }
      else
      {
         memberUnderConstruction += currentChar;
      }
   }
}
