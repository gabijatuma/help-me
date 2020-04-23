#ifndef TASKS_H_INCLUDED
#define TASKS_H_INCLUDED


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <time.h>
#include <string>
#include <chrono>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;
using namespace std::chrono;

struct student{
        string name, surname;
        double vid;

    };


class Student{
private:
    string name, surname;
    double vid;
public:
    void setName(string nam, string sur) //setter
    {
        name = nam;
        surname = sur;
    }
    void setVid(double V) //setter
    {
        vid = V;
    }
    double getVid()
    {
        return vid;
    }
};

//void readrandom(char ty, int studk);



void readfileL(char ty, int k);
void writefileL(list<Student>S, char type, int k);
void writetwoL(list<student>S, int k);
void writedeleteL(list<student>S, int k);


void readfileV(char ty, int k);
void writefile(vector<student>S, char type, int k);
void writetwoV(vector<student>S, int k);
void writedeleteV(vector<student>S, int k);


void readfilesL(char ty, int k);
//bool sortings (const Student& a, const Student& b);


void readfileD(char ty, int k);
void writefileD(deque<student>S, char type, int k);
void writetwoD(deque<student>S, int k);
void writedeleteD(deque<student>S, int k);

void create (int k, char type);
bool sorting (const student& a, const student& b);








#endif // TASKS_H_INCLUDED
