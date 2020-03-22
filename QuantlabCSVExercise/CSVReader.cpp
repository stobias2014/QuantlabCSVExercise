//
//  CSVReader.cpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "CSVReader.hpp"
#include "InputShare.hpp"


CSVReader::CSVReader() {}

vector<InputShare> CSVReader::readCSV(ifstream& inputFile) {
    string line;
    string symbol, s_timeStamp, s_quantity, s_price;
    long int timeStamp;
    int quantity, price;
    vector<InputShare> shares;
    InputShare share;
    
    while(getline(inputFile, line)) {
        stringstream s(line);
        
        getline(s, s_timeStamp, ',' );
        timeStamp = stol(s_timeStamp);
        share.setTimeStamp(timeStamp);
        getline(s, symbol, ',');
        share.setSymbol(symbol);
        getline(s, s_quantity, ',');
        quantity = stoi(s_quantity);
        share.setQuantity(quantity);
        getline(s, s_price, ',');
        price = stoi(s_price);
        share.setPrice(price);
        
        shares.push_back(share);
    }
    
    return shares;
}

CSVReader::~CSVReader() {}

