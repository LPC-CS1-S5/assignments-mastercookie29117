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

  average1 = score1 + score2 / 2;
  average2 = score3 + score4 / 2;
  average3 = score5 + score6 / 2;
  average4 = score7 + score8 / 2;
  average5 = score9 + score10 / 2;
  average6 = score11 + score12 /2;
  average7 = score13 + score14 /2; 
  average8 = score15 + score16 /2;
  average9 = score17 + score18 /2;
  average10 = score19 + score20 /2;



  //Write each students records.
  outputFile << "James"<< name1;
  outputFile << "Orlando" << name2;
  outputFile << "Tim"<< name3;
  outputFile << "Maxim" << name4;
  outputFile << "Will" << name5;
  outputFile << "Jason" << name6;
  outputFile << "David" << name7;
  outputFile << "Bill" << name8;
  outputFile << "Carmen" << name9;
  outputFile << "Chris" << name10;

  outputFile << "100" << score1 << "100" << score2;

  outputFile << "95" << score3 << "90" << score4;

  outputFile << "100" << score5 << "90" << score6; 

  outputFile << "100" << score7 << "90" << score8;

  outputFile << "100" << score9 << "100" << score10;

  outputFile << "100" << score11 << "90" << score12;

  outputFile << "90" << score13 << "90"<< score14;

  outputFile << "100" << score15 << "95" << score16;

  outputFile << "100" << score17 << "100" << score18;

  outputFile << "100" << score19 << "90" << score20; 

  cout << "Here is " << name1 << " and his scores and averages: " << score1 << " " << score2 << " " << average1 << endl;

  cout << "Here is " << name2 << " and his scores and averages: " << score3 << " " << score4 << " " << average2 << endl;

  cout << "Here is " << name3 << " and his scores and averages: " << score5 << " " << score6 << " " << average3 << endl;

  cout << "Here is " << name4 << " and his scores and averages: " << score7 << " " << score8 << " " << average4 << endl;

  cout << "Here is " << name5 << " and his scores and averages: " << score9 << " " << score10 << " " << average5 << endl;

  cout << "Here is " << name6 << " and his scores and averages: " << score11 << " " << score12 << " " << average6 << endl;

  cout << "Here is " << name7 << " and his scores and averages: " << score13 << " " << score14 << " " << average7 << endl;

  cout << "Here is " << name8 << " and his scores and averages: " << score15 << " " << score16 << " " << average8 << endl;

  cout << "Here is " << name9 << " and his scores and averages: " << score17 << " " << score18 << " " << average9 << endl;

  cout << "Here is " << name10 << " and his scores and averages: " << score19 << " " << score20 << " " << average10 << endl;

  if(score > 80; score = 80)
    cout<< "These students had an average score of 80" << endl;
  else 
    break
  outputFile.close();
  cout << "Data written to students.txt\n"; 
  return 0








}
