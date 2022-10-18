#include <iostream>

int main() {
    int people, correctAns;
    std::cout<<"Please enter the numbers in the following way 'people correctAnswers'"<<std::endl;
    std::cin >> people>>correctAns;
    if(people>=1&&correctAns<=1000){
        std::string answers[people];
        std::cout << "Please enter the answers for each person"<<std::endl;
        for(int i=0;i<people;i++){
            std::cin>>answers[i];
        }
        std::cout << correctAns;
    }
    else {
        if(people<1){
            std::cout << "The value of people should greater than or equal to one"<<std::endl;
        }
        else {
            std::cout << "The value of number of questions solved should be less than or equal to 1000" << std::endl;
        }
    }
    return 0;
}
