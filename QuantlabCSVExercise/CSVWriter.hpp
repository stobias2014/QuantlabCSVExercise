//
//  WriteFile.hpp
//  QuantlabCSVExercise
//
//  Created by Saul Tobias on 3/21/20.
//  Copyright © 2020 Saul Tobias. All rights reserved.
//

#ifndef CSVWriter_hpp
#define CSVWriter_hpp

#include "CalculatedShare.hpp"
#include <stdio.h>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class CSVWriter {
public:
    CSVWriter();
    int createFile(string fileName);
    int writeToFile(string fileName, vector<CalculatedShare> calculatedShares);
    ~CSVWriter();
};

#endif /* WriteFile_hpp */
