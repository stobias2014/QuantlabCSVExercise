//
//  StockSymbolDB.hpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#ifndef StockSymbolDB_hpp
#define StockSymbolDB_hpp

#include <stdio.h>
#include <iostream>
#include <set>
#include <string>

using namespace std;

class StockSymbolDB {
private:
    set<string> symbols;
public:
    StockSymbolDB();
    void setSymbols(set<string> m_symbols);
    set<string> getSymbols();
    void add(string symbol);
    ~StockSymbolDB();
};

#endif /* StockSymbolDB_hpp */
