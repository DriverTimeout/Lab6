#include <fstream> 
#include <iostream>
#include <string>
#include "FileCreator.h"
using namespace std;

int main()
{
    string FileName;
    string StoreName;
    double JanSales,FebSales,MarSales,AprSales, TotaSales;
    
    cout << "Enter file Name (.csv) ->>> ";
    cin >> FileName;
    FileCreator gust(FileName);
    gust.WriteHeader();
    for (int i = 0; i < 5; i++) {
        cout << "Store Name: ";
        cin >> StoreName;
        cout << "JanSales: ";
        cin >> JanSales;
        cout << "FebSales: ";
        cin >> FebSales;
        cout << "MarSales: ";
        cin >> MarSales;
        cout << "AprSales: ";
        cin >> AprSales;
        TotaSales = JanSales + FebSales + MarSales + AprSales;
        gust.WriteFile(StoreName, JanSales, FebSales, MarSales, AprSales , TotaSales);

    }
    gust.CloseFile();

}
