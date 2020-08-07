#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Person
{
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person(string firstName, string lastName, int identification)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson()
    {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }
};

class Student : public Person
{
    private:
        vector<int> testScores;
        char grade;

    public:
        int sum = 0;
        Student(string firstName, string lastName, int id, vector<int> scores): Person(firstName, lastName, id)
        {
            this->testScores = scores;
            for (int i = 0; i < testScores.size(); i++)
            {
                sum+=testScores[i];
            }
        }

        char calculate()
        {
            int sum = sum / testScores.size();

            if(sum < 40){
                grade = 'T';
            } else if(sum < 55){
                grade = 'D';
            } else if(sum < 70){
                grade = 'P';
            } else if(sum < 80){
                grade = 'A';
            } else if(sum < 90){
                grade = 'E';
            } else {
                grade = 'O';
            }

            return grade;
        }
};

int main()
{
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++)
    {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}