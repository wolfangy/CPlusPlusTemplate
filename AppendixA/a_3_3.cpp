#include <iostream>
#include <vector>
#include <iterator>
#include <string>

#include "a_3_3_unit1.hpp"

using namespace std;

class Date {
public:
	Date()
		:_date{}
	{}
	Date(string const date) 
		:_date{date}
	{}

private:
	string _date;
};

int main()
{
	/*vector<Date> e;
	copy(istream_iterator<Date>(cin),
		istream_iterator<Date>(),
		back_inserter(e));*/

	system("pause");
	return 0;
}