#include <vector>
#include <iostream>
#include <math.h>

class Stats {
    public: 
    
    double Average;
    double Max;
    double Min;
    
    
    Stats(){
        Average = nan("null");
        Max = nan("null");
        Min = nan("null");
    }
    
};


namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& );
        
    double FindAverage(const std::vector<double>&);
    double FindMax(const std::vector<double>&);
    double FindMin(const std::vector<double>&);
    
}
