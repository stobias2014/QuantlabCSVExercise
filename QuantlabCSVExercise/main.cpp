//
//  main.cpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/20/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include "InputShare.hpp"
#include "CSVReader.hpp"
#include "ShareCalculator.hpp"
#include "CalculatedShare.hpp"
#include "StockSymbolDB.hpp"
#include "CSVWriter.hpp"

using namespace std;

int main() {
    
    CSVReader csvReader;
    StockSymbolDB stockSymbolDB;
    ShareCalculator shareCalculator;
    CalculatedShare calculatedShare;
    CSVWriter csvWriter;
    
    //consider use of filesystem library to generalize
    //string outFilePath = "/Users/saultobias/Desktop/output.csv";
    //string inFilePath = "/Users/saultobias/Documents/input.csv";
    
    set<string> shareSymbols;
    vector<InputShare> shares;
    vector<CalculatedShare> calculatedShares;
    
    ifstream inputFile;
    inputFile.open("input.csv");
    
    if(!inputFile.is_open()) {
        cerr << "File was not able to be opened " << endl;
        return 1;
    }
    
    shares = csvReader.readCSV(inputFile);
    
    sort(shares.begin(), shares.end(), [](InputShare& lhs, InputShare& rhs) {
        return lhs.getSymbol() < rhs.getSymbol();
    });
    
    
    //place share symbols in a set
    for(InputShare share : shares) {
        stockSymbolDB.add(share.getSymbol());
    }
    
    shareSymbols = stockSymbolDB.getSymbols();
    
    //find data to use for output csv
    for(string shareSymbol: shareSymbols) {
        string currentShareSymbol = shareSymbol;
        vector<InputShare> currentShares;
        int maxPrice, totalVolume;
        int weighedAvgPrice;
        long int maxTimeStamp;
        for(InputShare share : shares) {
            if(share.getSymbol() == currentShareSymbol) {
                currentShares.push_back(share);
            }
        }
        
        //calculate data to be used for calculated share
        maxPrice = shareCalculator.findMaxTradePrice(currentShares);
        
        totalVolume = shareCalculator.findTotalVolume(currentShares);
        weighedAvgPrice = shareCalculator.findWeighedAveragePrice(currentShares);
        maxTimeStamp = shareCalculator.findMaxTimeStamp(currentShares);
        
        //set data for calculated share
        calculatedShare.setSymbol(shareSymbol);
        calculatedShare.setTotalVolume(totalVolume);
        calculatedShare.setMaxTradePrice(maxPrice);
        
        calculatedShare.setWeighedAvgPrice(weighedAvgPrice);
        calculatedShare.setMaxTimeStamp(maxTimeStamp);
            
        calculatedShares.push_back(calculatedShare);
    }
    
    csvWriter.createFile("output.csv");
    csvWriter.writeToFile("output.csv", calculatedShares);
    
    return EXIT_SUCCESS;

}
