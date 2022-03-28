//Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).

//Even Formula = (high - low) / 2 
//Odd Fromula = (high - low) / 2 + 1


#include <iostream> 


int odd(int high, int low)
{

    int formula; 
    if(high % 2 != 0 && low % 2 != 0)
    {
         formula = (high - low) /2 + 1;
        
    }
       return formula; 

}

int main()
{
    std::cout << "Please enter 2 values the high value first and the low one second: "; 
    int val1, val2; 

    std::cin >> val1 >> val2; 

    int odds = odd(val1, val2);

    std::cout << "The total odd numbers between value one and two is " << odds << std::endl; 
}
