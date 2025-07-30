//Enum -> useful for lg proj
#include <iostream>
using namespace std;

enum day {mon, tue, wed, thurs, fri, sat, sun};
enum dept {cs=1, it, ece, ce, cse};

// #define mon 0;
// const int mon = 0;  we can define set of related constant using 'enum'

int main() {

  day d;
  d = tue;
  // mon++;  can't increment expression in enum data type

  //declare DT of dept & assign dept
  // dept dep=cs; //unused var dep

  cout << sat << endl;
  cout << d << endl;
  

  //enum decl inside main also working
  enum day2 {mon, tue=3, wed, thurs, fri=8, sat, sun=12};  //here if tue=2 then wed become 4
  
  day2 d2;
  d2 = thurs;
  cout << mon << endl;
  cout << d2 << endl;





  // Typedef:-----------
  // it is used for defining of our own data type or any idea to some data type so that we can make the program more readable.
  // So the purpose of typedef is to make the program more readable.
  typedef int marks;
 
  // int m1, m2; //instead of using int it is good to use marks for readability
  marks m1, m2;
  m1=90;
  m2=96;

  cout << m1 << " " << m2;

}


/*
//Typedef -solve readability issue
//to make var name meaningful, if not give name to var atleast DT tell 

int main() {
  int m1, m2, m3, r1, r2, r3;
}

//So, to name these 
typedef int marks;
typedef int rollno;

int main() {
  marks m1, m2, m3;
  rollno r1, r2, r3;
}

*/


