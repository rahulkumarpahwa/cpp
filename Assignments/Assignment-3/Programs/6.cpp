// 3. Multiple Inheritance
// A. Sports-Academics-StudentPerformance
#include <iostream>
#include <string>

class Sports
{
protected:
    std::string sportName;
    int score;

public:
    Sports(std::string sportName, int score) : sportName(sportName), score(score) {}

    void displaySportsDetails() const
    {
        std::cout << "Sport: " << sportName << std::endl;
        std::cout << "Score: " << score << std::endl;
    }
};

class Academics
{
protected:
    std::string subject;
    int marks;

public:
    Academics(std::string subject, int marks) : subject(subject), marks(marks) {}

    void displayAcademicsDetails() const
    {
        std::cout << "Subject: " << subject << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

class StudentPerformance : public Sports, public Academics
{
private:
    int totalPerformance;

public:
    StudentPerformance(std::string sportName, int score, std::string subject, int marks)
        : Sports(sportName, score), Academics(subject, marks), totalPerformance(score + marks) {}

    void displayDetails() const
    {
        displaySportsDetails();
        displayAcademicsDetails();
        std::cout << "Total Performance: " << totalPerformance << std::endl;
    }
};

int main()
{
    StudentPerformance student("Football", 90, "Math", 85);
    student.displayDetails();
    return 0;
}
