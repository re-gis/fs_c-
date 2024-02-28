#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Student
{
	int id;
	string name;
	string school;
};

void writeInTheFile(Student student, string filename)
{
	ofstream file(filename, ios::app);
	if (file.is_open())
	{
		file << "Name: " << student.name << " , "
			 << "id: " << student.id << " , "
			 << "School: " << student.school << "."
			 << "\n";
		file.close();
		cout << "File written successfully..." << endl;
	}
	else
	{
		cout << "Unable to open file.\n";
	}
}

void readFile(string filename)
{
	ifstream file(filename);
	if (file.is_open())
	{
		string line;

		cout << "Student Data....\n";
		while (getline(file, line))
		{
			cout << line << endl;
		}

		file.close();
	}
	else
	{
		cout << "Unable to open file.\n";
	}
}

int main()
{
	Student student;
	cout << "Enter the student id: ";
	cin >> student.id;
	cin.ignore();
	cout << "Enter the student name: ";
	getline(cin, student.name);
	cout << "Enter the school: ";
	getline(cin, student.school);

	writeInTheFile(student, "data.csv");

	readFile("data.csv");

	return 0;
}
