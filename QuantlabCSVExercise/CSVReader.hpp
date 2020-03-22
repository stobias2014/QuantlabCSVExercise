//
//  CSVReader.hpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#ifndef CSVReader_hpp
#define CSVReader_hpp

#include <fstream>
#include <vector>
#include "InputShare.hpp"

using namespace std;

class CSVReader {
    
public:
    CSVReader();
    vector<InputShare> readCSV(ifstream& inputFile);
    ~CSVReader();
};

#endif /* CSVReader_hpp */
