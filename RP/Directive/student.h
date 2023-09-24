#ifindef STUDENT_H
#define STUDENT_H

 #include<string>
 
 class Student{
 private:
 std::string name;
 int age;
 
 public:
 Student();
 Student(std::string name,int age);
 void setName(std::string name);
 std::string getName() const;
 void setAge(int age);
 int getAge() const;
 void displayInfo() const;
 };
 
 #endif //STUDENT_H
