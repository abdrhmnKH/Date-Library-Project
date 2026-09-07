//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud
#include <iostream>
#include "clsDate.h"

using namespace std;

int main()

{
    clsDate Date1;

    cout << "Today's Date (System) = " << Date1.DateToString() << endl;

    //----------------

    clsDate Date2("15/3/1995");

    cout << "Date2 = " << Date2.DateToString() << endl;

    //----------------

    clsDate Date3(1, 1, 2024);

    cout << "Date3 = " << Date3.DateToString() << endl;

    //----------------

    cout << "\nIs 2024 a leap year? " << clsDate::isLeapYear(2024) << endl;
    cout << "Is 2023 a leap year? " << Date2.isLeapYear() << endl;

    //----------------

    cout << "\nNumber Of Days In 2024 : " << clsDate::NumberOfDaysInAYear(2024) << endl;
    cout << "Number Of Hours In 2024 : " << Date3.NumberOfHoursInAYear() << endl;
    cout << "Number Of Minutes In 2024 : " << Date3.NumberOfMinutesInAYear() << endl;
    cout << "Number Of Seconds In 2024 : " << Date3.NumberOfSecondsInAYear() << endl;

    //----------------

    cout << "\nNumber Of Days In Month(2,2024) : "
        << clsDate::NumberOfDaysInAMonth(2, 2024) << endl;
    cout << "Number Of Days In Month (Date3) : " << Date3.NumberOfDaysInAMonth() << endl;

    //----------------

    cout << "\nDay Of Week Order (Date3) : " << Date3.DayOfWeekOrder() << endl;
    cout << "Day Short Name (Date3) : " << Date3.DayShortName() << endl;
    cout << "Month Short Name (Date3) : " << Date3.MonthShortName() << endl;

    //----------------

    cout << "\nDays From Begining Of The Year (Date3) : "
        << Date3.NumberOfDaysFromTheBeginingOfTheYear() << endl;

    //----------------

    Date3.PrintMonthCalendar();

    //----------------

    clsDate Date4 = Date3.DateAddDays(40);
    cout << "\nDate3 + 40 Days = " << Date4.DateToString() << endl;

    //----------------

    clsDate Date5 = clsDate::GetDateFromDayOrderInYear(100, 2024);
    cout << "Date From Day Order 100 In 2024 = " << Date5.DateToString() << endl;

    //----------------

    cout << "\nIs Date2 Before Date3? " << Date2.IsDate1BeforeDate2(Date3) << endl;
    cout << "Is Date2 Equal Date3? " << Date2.IsDate1EqualDate2(Date3) << endl;
    cout << "Is Date2 After Date3? " << Date2.IsDate1AfterDate2(Date3) << endl;
    cout << "Compare Date2 With Date3 : " << Date2.CompareDates(Date3) << endl;

    //----------------

    cout << "\nIs Date3 Last Day In Month? " << Date3.IsLastDayInMonth() << endl;
    cout << "Is Date3's Month Last Month In Year? " << Date3.IsLastMonthInYear() << endl;

    //----------------

    clsDate Date6 = Date3.IncreaseDateByOneDay();
    cout << "\nDate3 + 1 Day = " << Date6.DateToString() << endl;

    //----------------

    clsDate Date7("1/1/2024"), Date8("10/1/2024");
    Date7.SwapDates(Date8);
    cout << "\nAfter Swap -> Date7 = " << Date7.DateToString()
        << " , Date8 = " << Date8.DateToString() << endl;

    //----------------

    clsDate Date9("1/1/2024"), Date10("10/1/2024");
    cout << "\nDifference In Days Between Date9 And Date10 : "
        << Date9.GetDifferenceInDays(Date10) << endl;

    //----------------

    cout << "\nDate3 + 1 Week = " << Date3.IncreaseDateByOneWeek().DateToString() << endl;
    cout << "Date3 + 3 Weeks = " << Date3.IncreaseDateByXWeeks(3).DateToString() << endl;
    cout << "Date3 + 1 Month = " << Date3.IncreaseDateByOneMonth().DateToString() << endl;
    cout << "Date3 + 45 Days = " << Date3.IncreaseDateByXDays(45).DateToString() << endl;
    cout << "Date3 + 5 Months = " << Date3.IncreaseDateByXMonths(5).DateToString() << endl;
    cout << "Date3 + 1 Year = " << Date3.IncreaseDateByOneYear().DateToString() << endl;
    cout << "Date3 + 3 Years = " << Date3.IncreaseDateByXYears(3).DateToString() << endl;

    //----------------

    cout << "\nDate3 - 1 Day = " << Date3.DecreaseDateByOneDay().DateToString() << endl;
    cout << "Date3 - 1 Week = " << Date3.DecreaseDateByOneWeek().DateToString() << endl;
    cout << "Date3 - 2 Weeks = " << Date3.DecreaseDateByXWeeks(2).DateToString() << endl;
    cout << "Date3 - 1 Month = " << Date3.DecreaseDateByOneMonth().DateToString() << endl;
    cout << "Date3 - 20 Days = " << Date3.DecreaseDateByXDays(20).DateToString() << endl;
    cout << "Date3 - 4 Months = " << Date3.DecreaseDateByXMonths(4).DateToString() << endl;
    cout << "Date3 - 1 Year = " << Date3.DecreaseDateByOneYear().DateToString() << endl;
    cout << "Date3 - 2 Years = " << Date3.DecreaseDateByXYears(2).DateToString() << endl;

    //----------------

    cout << "\nIs Date3 End Of Week? " << Date3.IsEndOfWeek() << endl;
    cout << "Is Date3 Week End? " << Date3.IsWeekEnd() << endl;
    cout << "Is Date3 Business Day? " << Date3.IsBusinessDay() << endl;

    //----------------

    cout << "\nDays Until End Of Week (Date3) : " << Date3.DaysUntilTheEndOfWeek() << endl;
    cout << "Days Until End Of Month (Date3) : " << Date3.DaysUntilTheEndOfMonth() << endl;
    cout << "Days Until End Of Year (Date3) : " << Date3.DaysUntilTheEndOfYear() << endl;

    //----------------

    clsDate VacFrom("1/6/2024"), VacTo("15/6/2024");
    cout << "\nVacation Days Between " << VacFrom.DateToString()
        << " And " << VacTo.DateToString() << " = "
        << VacFrom.CalculateVacationDays(VacTo) << endl;

    clsDate ReturnDate = VacFrom.CalculateVacationReturnDate(10);
    cout << "Vacation Return Date (10 Days From " << VacFrom.DateToString()
        << ") = " << ReturnDate.DateToString() << endl;

    //----------------

    cout << "\nIs Date3 A Valid Date? " << Date3.IsValidDate() << endl;

    clsDate InvalidDate("31/2/2024");
    cout << "Is 31/2/2024 A Valid Date? " << InvalidDate.IsValidDate() << endl;

    //----------------

    cout << "\nPrint Using Print() : ";
    Date3.Print();

    system("pause>0");
    return 0;
};