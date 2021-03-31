#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int maim()
{
  ofstream outputFile;
  outputFile.open("students.txt")
  int name1, name2, name3, name4, name5, name6, name7, name8,name9, name10;
  double score1, score2, score3, score4, score5, score6, score7, score8, score9, score10,score11, score12, score13, score14, score15, score16, score17, score18, score19, score20;


  //Write each students records.
  outputFile << "James"<< name1;
  outputFile << "Orlando" << name2;
  outputFile << "Tim"<< name3;
  outputFile << "Maxim" << name4;
  outputFile << "Will" << name5;
  outputFile << "Jason" << name6;
  outputFile << "David" << name7;
  outputFile << "Bill"<< name8;
  outputFile << "Carmen" << name9;
  outputFile << "Chris" << name10;

  outputFile << "100" << score1 << "100" << score2;

  outputFile << "95" << score3 << "90" << score4;

  outputFile << "100" << score5 << "90" << score6; 

  outputFile

}
