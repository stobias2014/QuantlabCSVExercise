//
//  WriteFile.cpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#include "CSVWriter.hpp"
#include "CalculatedShare.hpp"
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

CSVWriter::CSVWriter() {}

int CSVWriter::createFile(string fileName) {
    ofstream outFile(fileName);
    
    //outFile.open(fileName);
    
    if(outFile.fail()) {
        cerr << "Failed to open file for writing in create file" << endl;
        return 1;
    }
    
    outFile.close();
    
    return 0;
    
}

int CSVWriter::writeToFile(string fileName, vector<CalculatedShare> calculatedShares) {
    ofstream outFile;
    string line;
    
    outFile.open(fileName, ios_base::app);
    
    if(outFile.fail()) {
        cerr << "Failed to open file for writing " << endl;
        return 1;
    }
    
    for(CalculatedShare share : calculatedShares) {
        line = share.getSymbol() + "," + to_string(share.getMaxTimeStamp()) + "," + to_string(share.getTotalVolume()) + "," + to_string(share.getMaxTradePrice()) + "," + to_string(share.getWeighedAvgPrice()) + "\n" ;
        
        outFile << line;
    }
    
    outFile.close();
    
    return 0;
}

CSVWriter::~CSVWriter() {}
