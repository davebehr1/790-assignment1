
#include "StdAfx.h"
#include "Timetabling.h"

int main(int argc, char *argv[])
{
	Timetabling ttp;

	//if(argc != 2) printf("please provide the file name of the solution timetable (.sln):\n");
	//else ttp.evaluate(argv[1]);

	// a timetable's quality is reflected by two values: the number of
	//hard constraint violations (Distance to Feasibility), and the number of soft constraint violations

	// 	The Distance to Feasibility is the total of the following;

	// Conflicts: Two conflicting exams in the same period.

	// RoomOccupancy: More seating required in any individual period than that available.

	// PeriodUtilisation: More time required in any individual period than that available.

	// PeriodRelated: Ordering requirements not obeyed.

	// RoomRelated: Room requirements not obeyed

	//output:
	// one line should secribe each exam

	// 	The following information relating to an exam should be provided:

	// The timeslot number, the room number.
	// The timeslot number is an integer between 0 and 44 representing the timeslots allocated to the event.
	// The room is the room number assigned to the event. Remember, rooms are numbered in the order from the problem file, starting at zero.

	// early
	ttp.evaluate("./itc2007_dataset/exam_comp_set1.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set2.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set3.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set4.exam");
	// late
	ttp.evaluate("./itc2007_dataset/exam_comp_set5.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set6.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set7.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set8.exam");
	//hidden
	ttp.evaluate("./itc2007_dataset/exam_comp_set9.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set10.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set11.exam");
	ttp.evaluate("./itc2007_dataset/exam_comp_set12.exam");

	//ttp.evaluate("EdHEC92");
	//ttp.evaluate("Pur93");
	ttp.evaluate("St.Andrews83");
	//ttp.evaluate("sta-m-83-gxk");
	//ttp.evaluate("YorkMills83");
	//ttp.evaluate("TorontoE92");
	//ttp.evaluate("EarlHaig83");
	//ttp.evaluate("Trent92");
	//ttp.evaluate("LSE91");
	//ttp.evaluate("KingFahd93");
	//ttp.evaluate("Carleton92");
	//ttp.evaluate("TorontoAS92");
	//ttp.evaluate("Carleton91");
	//ttp.evaluate("yor-f-83-3-IIc");
	//ttp.evaluate("ear-f-83-3-IIc");

	return 0;
}