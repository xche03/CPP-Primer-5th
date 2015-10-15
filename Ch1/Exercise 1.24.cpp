#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item, cur_item;
	int cnt;
	if (std::cin >> cur_item) {//check if the reading is successfull.
		int cnt = 1;
		while (std::cin >> item) {
			if (item.isbn() == cur_item.isbn()) {
				++cnt;
			}
			else {
				std::cout << "For " << cur_item.isbn() << ", there are " << cnt << " transactions." << std::endl;
				cur_item = item;
				cnt = 1;
			}
		}//end while
		 //The last 
		std::cout << "For " << cur_item.isbn() << ", there are " << cnt << " transactions." << std::endl;
	}//end if
	system("PAUSE");
	return 0;
}