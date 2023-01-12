

#include <iostream>

using namespace std;

class AbstractLecturer{
    public:
       string FirstName;
       string LastName;
       string Subject;
};

class SkillWillLecturer:AbstractLecturer{
    public:
        string Chapter;
        string Level;
};

class AbstractStudent{
    public:
      string FirstName;
      string LastName;
      int Age;
      string Subject;
};

class SkillWillStudent:AbstractStudent{
    public:
      string Section;
      string Course;
      int QuizzScore;
};

class AbstractSubject{
  public:
      string Name;
      int CourseDuration;
      int StartingDate;
};

class SkillWillSubject{
    public:
       string LastLectureName;
};





int main()
{
  
}
