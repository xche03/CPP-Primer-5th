/*Exercise 2.40: Write your own version of the Sales_data class.*/
#include <string>
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};