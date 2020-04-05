// Age Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstring>
using namespace std;


int main()
{
  
	int date, mon, year;
	int now_date, now_mon, now_year;
	int result_date, result_mon, result_year;

    std::cout << "Enter your date of Birth (DD :: MM :: YYYY)" << std::endl;

	std::cin >> date;
	std::cin >> mon;
	std::cin >> year;
	
	
	std::string month;
	std::string now_month;

	switch (mon)
	{
	case 1:
		month = "January";
		break;
	case 2:
		month = "Februray";
		break;
	case 3:
		month = "March";
		break;
	case 4:
		month = "April";
		break;
	case 5:
		month = "May";
		break;
	case 6:
		month = "June";
		break;
	case 7:
		month = "July";
		break;
	case 8:
		month = "August";
		break;
	case 9:
		month = "September";
		break;
	case 10:
		month = "October";
		break;
	case 11:
		month = "November";
		break;
	case 12:
		month = "December";
		break;

	}

	std::cout << "Your Date of Birth is : "<< date << " " << month << " " << year << std::endl;

	std::cout << "Enter the present Date (DD :: MM :: YYYY) " << std::endl ;

	std::cin >> now_date >> now_mon>>now_year;

	switch (now_mon)
	{
	case 1:
		now_month = "January";
		break;
	case 2:
		now_month = "Februray";
		break;
	case 3:
		now_month = "March";
		break;
	case 4:
		now_month = "April";
		break;
	case 5:
		now_month = "May";
		break;
	case 6:
		now_month = "June";
		break;
	case 7:
		now_month = "July";
		break;
	case 8:
		now_month = "August";
		break;
	case 9:
		now_month = "September";
		break;
	case 10:
		now_month = "October";
		break;
	case 11:
		now_month = "November";
		break;
	case 12:
		now_month = "December";
		break;

	}

	std::cout << "Present Date is : " << now_date << " " << now_month << " " << now_year << std::endl ;


	result_year = now_year - year;
	result_mon = now_mon - mon;

	if (result_mon <= 0)
	{
		result_year = result_year - 1;
		result_mon = result_mon + 12;
	}

	result_date = now_date - date;
	
	if (result_date <= 0)
	{
		
		if (now_mon == 1 || now_mon == 3 || now_mon == 5 || now_mon == 7 || now_mon == 8 || now_mon == 10 || now_mon == 12)
		{
			result_date = result_date + 31;
		}
		if (now_mon == 4 || now_mon == 6 || now_mon == 9 || now_mon == 11)
		{
			result_date = result_date + 30;
		}
		if (now_mon == 2)
		{
			result_date = result_date + 28;
		}
		result_mon = result_mon - 1;
	}
	


	
	std::cout <<"You are "<< result_date <<" Days " << result_mon <<" Month and "<<result_year <<" Years Old "<<std::endl;









}
