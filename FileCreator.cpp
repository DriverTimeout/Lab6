#include "FileCreator.h"

FileCreator::FileCreator(string n)
{
	this->MyFile.open(n);
}

void FileCreator::WriteFile(string name, double a, double b, double c, double d, double e)
{
	this->MyFile << name << "," << a << "," << b << "," << c << "," << d << "," << e << endl;
}

void FileCreator::WriteHeader()
{
	this->MyFile << "Store, January, February, March, April, Total" << endl;
}

void FileCreator::CloseFile()
{
	this->MyFile.close();
}
