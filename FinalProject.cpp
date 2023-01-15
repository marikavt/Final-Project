

#include <iostream>

using namespace std;

class AbstractLecturer{
    
       string FirstName;
       string LastName;
       string Subject;
       public:
       AbstractLecturer(string FirstName,string LastName,string Subject){
           this->FirstName = FirstName;
           this->LastName = LastName;
           this->Subject = Subject;
       }
       string getFirstName(){
           return FirstName;
       }
       
       void setFirstName(string FirstName){
           this->FirstName = FirstName;
       }
       
       string getLastName(){
           return LastName;
       }
       
       void setLastName(string LastName){
           this->LastName = LastName;
       }
       
       string getSubject(){
           return Subject;
       }
       
       void setSubject(string Subject){
           this->Subject = Subject;
       }
       
       void lectureteaching(){
           cout<< "leqtori atarebs leqcias"<< endl;
       }
};


class SkillWillLecturer:public AbstractLecturer{
    
        string Chapter;
        string Level;
        public:
        SkillWillLecturer(string FirstName,string LastName,string Subject):AbstractLecturer(FirstName,LastName,Subject){
            
        }
        void lectureteaching(string classname,string lecturedate){
            cout <<getFirstName() << " "<< getLastName() << endl;
        }
};

class AbstractStudent{
      string FirstName;
      string LastName;
      int Age;
      string Subject;
      public:
      AbstractStudent(string FirstName, string LastName, int Age, string Subject){
      this->FirstName = FirstName;
      this->LastName= LastName;
      this->Age = Age;
      this->Subject = Subject;
          
      }
      
      string getFirstName(){
          return FirstName;
      }
      
      void setFirstName(string FirstName){
          this->FirstName = FirstName;
      }
      
      string getLastName(){
           return LastName;
      }
      
      void setLastName(string LastName){
           this->LastName = LastName;
       }
       
       string getSubject(){
           return Subject;
       }
       
       void setSubject(string Subject){
           this->Subject = Subject;
       }
       
       int getAge(){
           return Age;
       }
       
       void setAge(int Age){
           this->Age = Age;
       }
       void attendingclass(){
           cout << "stundenti eswreba leqcias"<< endl;
       }
};

class SkillWillStudent:public AbstractStudent{
    
      string Section;
      string Course;
      int QuizzScore = 0;
      public:
      SkillWillStudent (string FirstName, string LastName, int Age, string Subject): AbstractStudent(FirstName, LastName, Age, Subject) {
          
      }
      void attendingclass(string studentname,string studentlastname, string course ){
       cout << studentname << " " << studentlastname << "  is attending class"<<endl;  
      }
          
          void update(int QuizzScore ,int newscore){
              int finalscore = 0;
              finalscore = QuizzScore + newscore;
              cout << finalscore<< endl;
              this->QuizzScore = finalscore;
          }
          int getquizscore(){
              return QuizzScore;
          }
};

class AbstractSubject{
  
      string Name;
      int CourseDuration;
      string StartingDate;
      public:
      AbstractSubject(string Name, int CourseDuration, string StartingDate) {
          this->Name = Name;
          this->CourseDuration = CourseDuration;
          this->StartingDate = StartingDate;
      }
      
      string getName(){
          return Name;
      }
      
      void setName(string Name){
          this->Name = Name;
      }
      
      int getCourseDuration(){
          return CourseDuration;
      }
      
      void setCourseDuration(int CourseDuration){
          this->CourseDuration = CourseDuration;
      }
      
      string getStartingDate(){
          return StartingDate;
      }
      
      void setStartingDate(int StartingDate){
          this->StartingDate = StartingDate;
      }
};

class SkillWillSubject :public AbstractSubject{
    public:
       string LastLectureName;
       SkillWillSubject (string Name, int CourseDuration, string StartingDate): AbstractSubject(Name, CourseDuration, StartingDate) {
           
       }
        
       
};







int main()
{
  SkillWillSubject web("Web",15,"20.01.2023");
  SkillWillLecturer lecturer("nino", "lejava" ,"web");
  lecturer.lectureteaching(web.getName() ,web.getStartingDate());
  SkillWillStudent stundet("nodar", "dumbadze" ,18 , "backend");
  stundet.attendingclass(stundet.getFirstName() , stundet.getLastName(), web.getName());
  stundet.update(stundet.getquizscore(),1000);
  
  
  
  return 0;
};

