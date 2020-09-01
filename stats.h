#include <vector>
#include <iostream>

class Stats {
    double Average;
    double Max;
    double Min;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& );
        
    double FindAverage(const std::vector<double>&);
    double FindMax(const std::vector<double>&);
    double FindMin(const std::vector<double>&);
    
}
