//
//  StockSymbolDB.cpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#include "StockSymbolDB.hpp"
#include <string>
#include <set>

using namespace std;

StockSymbolDB::StockSymbolDB() {}

void StockSymbolDB::setSymbols(set<string> m_symbols) {
    symbols = m_symbols;
}

set<string> StockSymbolDB::getSymbols() {
    return symbols;
}

void StockSymbolDB::add(string symbol) {
    symbols.insert(symbol);
}

StockSymbolDB::~StockSymbolDB() {}






