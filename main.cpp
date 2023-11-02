#include <iostream>
#include <vector>


int getSum(std::vector<int> & numbers){
    int sum = 0; 
    for (int i = 0; i < numbers.size(); i++)
    {
        sum+= numbers[i];
    }
    return sum;
}
int getMin(std::vector<int> & numbers){
    int mn = INT32_MAX;
    for(auto & u : numbers){
        if(mn > u ) mn = u;
    } 
    return mn;
}

double getAverage(std::vector<int> & numbers){
    if(numbers.size() == 0) return 0 ; 
    int sum = getSum(numbers); 
    return 1.0 * sum / numbers.size();
}


int main(int argc, char **argv){

    std::vector<int> vector_example = {1,2,3,4,5,6,7,7,9,10} ; 
    std:: cout << getSum(vector_example) << std::endl; 
    std:: cout << getMin(vector_example) << std::endl; 
    std:: cout << getAverage(vector_example) << std::endl; 

    
}