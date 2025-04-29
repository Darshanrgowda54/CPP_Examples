#include <iostream>

using namespace std;

string printme(string& student)
{
    student = "Girish";
    return student;
}

int main()
{
    string name = "Darshan";
    string studentname = printme(name);
    std::cout<<studentname<<std::endl;
    cout << "Hello World!" << endl;
    return 0;
}
