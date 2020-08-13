timetable: EventList.o ExamEvaluate.o StdAfx.o StudentList.o Timetabling.o
		g++ EventList.o ExamEvaluate.o StdAfx.o StudentList.o Timetabling.o -o timetable

EventList.o: EventList.cpp
	g++ -c EventList.cpp

ExamEvaluate.o: ExamEvaluate.cpp
	g++ -c ExamEvaluate.cpp

StdAfx.o: StdAfx.cpp
	g++ -c StdAfx.cpp

StudentList.o: StudentList.cpp
	g++ -c StudentList.cpp

Timetabling.o: Timetabling.cpp
	g++ -c Timetabling.cpp

clean:
	g++ *.o timetable




