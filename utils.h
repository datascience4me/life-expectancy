/*
 * file: utils.h
 * purpose:
 */

#ifndef LIFE_EXPECT_UTILS_H
#define LIFE_EXPECT_UTILS_H

#include <map>
#include <utility>
#include <vector>


enum class INCOME_CLASS
{
   DEFAULT        = 0u,
   LOWER_MIDDLE   = 1u,
   UPPER_MIDDLE   = 2u,
   HIGH           = 3u,
   LOW            = 4u,
};


struct LIFE_EXPECTANCY_METADATA
{
   std::string const countryCode;
   std::string const region;
   INCOME_CLASS const incomeClass;
};


struct LIFE_EXPECTANCY_DATA
{
   std::string const countryName;
   std::string const countryCode;
   std::map<int, double> annualData;
};


/*
 * Takes a filename and parses the resulting file for the data on life
 * expectancy. If the function returns true, the function parsed normal data.
 * If the function returns false, the function parsed metadata from the file.
 */
bool read_data(std::string & const filename,
               LIFE_EXPECTANCY_DATA & const data,
               LIFE_EXPECTANCY_METADATA & const metadata);

/*
 * Takes a vector of life expectancy data and filters out the members not in
 * the given region.
 */
bool filter_region(std::vector<LIFE_EXPECTANCY_DATA> & const data,
                   std::string const & const region);

/*
 * Takes a vector of life expectancy metadata and filters out the members not
 * in the given region.
 */
bool filter_region(std::vector<LIFE_EXPECTANCY_METADATA> & const metadata,
                   std::string const & const region);

/*
 * Takes a vector of life expectancy data and filters out members not in the income class.
 */
bool filter_income(std::vector<LIFE_EXPECTANCY_DATA> & const data, INCOME_CLASS income);

/*
 * Takes a vector of life expectancy metadata and filters out members not in the income class.
 */
bool filter_income(std::vector<LIFE_EXPECTANCY_METADATA> & const metadata, INCOME_CLASS income);

/*
 * Executes the utility main application on the filename.
 */
int utils_main(std::string const & const filename);

#endif   // LIFE_EXPECT_UTILS_H
