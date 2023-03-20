#pragma once
#include "tasks.h"

#define RIGHT "completed successfully. Well DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {

	bool result = task01(20, 21, 22) == 32
		&& task01(19, 15, 23) == 30
		&& task01(16, 18, 20) == 27
		&& task01(1, 1, 1) == 3
		&& task01(2, 2, 2) == 3
		&& task01(1000, 1000, 1000) == 1500
		&& task01(5, 6, 5) == 9
		&& task01(0, 6, 5) == 0
		&& task01(5, 0, 5) == 0
		&& task01(5, 6, 0) == 0
		&& task01(-5, 6, 5) == 0
		&& task01(5, -6, 5) == 0
		&& task01(5, 6, -5) == 0;

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {

	bool result = task02(3602) == "1:00:02"
		&& task02(129700) == "12:01:40"
		&& task02(0) == "0:00:00"
		&& task02(1) == "0:00:01"
		&& task02(59) == "0:00:59"
		&& task02(60) == "0:01:00"
		&& task02(600) == "0:10:00"
		&& task02(3600) == "1:00:00"
		&& task02(86399) == "23:59:59"
		&& task02(-1) == "error"
		&& task02(-123) == "error";

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}