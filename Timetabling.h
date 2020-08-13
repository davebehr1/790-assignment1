// Timetabling.h: interface for the Timetabling class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TIMETABLING_H__8E872F76_74AF_4B87_A77B_298B56A3662E__INCLUDED_)
#define AFX_TIMETABLING_H__8E872F76_74AF_4B87_A77B_298B56A3662E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//#######################################
//Timetabling problem, include Timetable as the solution of it
#include "StudentList.h"
#include "EventList.h" // Added by ClassView
#include <time.h>
#include <math.h>
#include <stdlib.h>

const int max_events = 1024;
const long double conflicted = 400000000.00;

class Timetabling
{

public:
	void processData();
	void readTimetable(const char *name);
	void readStudents(const char *name);
	void readEvents(const char *name);
	void readSlot(const char *name);

	Timetabling();
	virtual ~Timetabling();

	void readTimetable();

	void evaluate(const char *name);
	long double calculate();
	long double canSchedule(int pi, int ei);
	long double eventInPeriodNumber(int pi, int n2);

private:
	FILE *fp;

	EventList *constraint[max_events];

	eventelement *event;

	int numStudents;
	int numEvents;
	int numSlots;

	StudentList student;
	int *events;
	long double penalty;
};

#endif // !defined(AFX_TIMETABLING_H__8E872F76_74AF_4B87_A77B_298B56A3662E__INCLUDED_)
