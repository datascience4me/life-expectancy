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

   LIFE_EXPECTANCY_METADATA(std::string code, std::string region, INCOME_CLASS inClass)
      : countryCode(std::move(code)),
        region(std::move(region)),
        incomeClass(inClass) {}
};


struct LIFE_EXPECTANCY_DATA
{
   std::string const countryName;
   std::string const countryCode;
   std::map<int, double> annualData;

   LIFE_EXPECTANCY_DATA(std::string name, std::string code, std::map<int, double> datum)
      : countryName(std::move(name)),
        countryCode(std::move(code)),
        annualData(std::move(datum)) {}
};


/*
 * Takes a filename and parses the resulting file for the data on life
 * expectancy. If the function returns true, the function parsed normal data.
 * If the function returns false, the function parsed metadata from the file.
 */
bool read_data(std::string const & filename,
               std::vector<LIFE_EXPECTANCY_DATA> & data,
               std::vector<LIFE_EXPECTANCY_METADATA> & metadata);

/*
 * Takes a vector of life expectancy data and filters out the members not in
 * the given region.
 */
bool filter_region(std::vector<LIFE_EXPECTANCY_DATA> & data,
                   std::string const & region);

/*
 * Takes a vector of life expectancy metadata and filters out the members not
 * in the given region.
 */
bool filter_region(std::vector<LIFE_EXPECTANCY_METADATA> & metadata,
                   std::string const & region);

/*
 * Takes a vector of life expectancy data and filters out members not in the income class.
 */
bool filter_income(std::vector<LIFE_EXPECTANCY_DATA> & data, INCOME_CLASS income);

/*
 * Takes a vector of life expectancy metadata and filters out members not in the income class.
 */
bool filter_income(std::vector<LIFE_EXPECTANCY_METADATA> & metadata, INCOME_CLASS income);

/*
 * Executes the utility main application on the filename.
 */
int utils_main(std::string const & filename);

#endif   // LIFE_EXPECT_UTILS_H
