/*
 *        File: copy_file.cc
 *      Author: Gregory Sheets II
 *        Date: March 04, 2019
 * Description: Takes an input file and copies it exactly how it appears to 
 *              an output file.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

//function prototypes

void getCopy(ifstream &inStream, ofstream &outStream);

int main(int argc, char const *argv[]) {
    ifstream inStream;
    ofstream outStream;
    string inFileName, outFileName;
    cout << "Enter the input file name: ";
    cin >> inFileName;
    inStream.open(inFileName.c_str());
    //check for failure
    cout << "Enter the output file name: ";
    cin >> outFileName;
    outStream.open(outFileName.c_str());
    //check for failure
    getCopy(inStream, outStream);
    return 0;
}// main

void getCopy(ifstream &inStream, ofstream &outStream){
    char ch;
    inStream.get(ch);
    while(!inStream.eof()){
        outStream << ch;
        inStream.get(ch);
    }
    inStream.close();
    outStream.close();

}
