#ifndef _DATE_H_INCLUDED
#define _DATE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Date{
  int day,month,year;
public:
  Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
  }
  Date(){
    Date(8,1,1999);
  }
  friend istream &operator>>(istream& is, Date& dt){
    char slash;
    is >> dt.day >> slash >> dt.month >> slash >> dt.year;
    return is;
  }
  friend ostream &operator<<(ostream& os, Date& dt){
    if(dt.day < 10) os << 0;
    os << dt.day << "/";
    if(dt.month < 10) os << 0;
    os << dt.month << "/" << dt.year;
    return os;
  }
  friend bool operator <(Date& dt1,Date& dt2){
    return ((dt1.year < dt2.year) || (dt1.year==dt2.year && dt1.month < dt2.month) || (dt1.year==dt2.year && dt1.month==dt2.month && dt1.day<dt2.day));
  }
  ~Date(){}
  string toString(){
    return to_string(day) + '/' + to_string(month) + '/' + to_string(year);
  }
};

#endif
