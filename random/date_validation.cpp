#include <iostream>

using namespace std;

typedef unsigned char u8;
typedef unsigned short u16;

const long long int NON_LEAP_YEAR_FLAGS = 1151794505154789279;
const long long int LEAP_YEAR_FLAGS = 1151794505154789343;

enum Month
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

bool is_leap_year(u16 year)
{
    return ((year % 4 == 0) ? ((year % 100 == 0) ? ((year % 400 == 0) ? true : false) : true) : false);
}

bool is_valid_day_in_month(u8 day, Month month, bool is_leap_year)
{
    const long long int FLAGS = is_leap_year ? LEAP_YEAR_FLAGS : NON_LEAP_YEAR_FLAGS;
    return day <= ((FLAGS >> (5 * (month - JANUARY)) & 31));
}

bool is_valid_date(u8 day, Month month, u16 year)
{
    return month <= DECEMBER ? is_valid_day_in_month(day, month, is_leap_year(year)) : false;
}

int main()
{
    cout << is_valid_date(28, FEBRUARY, 2002) << endl;
    cout << is_valid_date(29, FEBRUARY, 2002) << endl;

    return 0;
}