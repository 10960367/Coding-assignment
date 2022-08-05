#include <iostream>
#include <cmath>

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number){
    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            return false;
        }

    }
    return true;

}

int main()
{
    cout << "This Program produces the SUM of all Prime Numbers less than the number you provide" << endl;
    cout << "**** ******* ******** *** *** ** *** ***** ******* **** **** *** ****** *** *******" << endl;

    cout << "Please provide your Number" << endl;
    int userNum;
    cin >> userNum;
    cout << "Please you provided " << userNum << " as your number" << endl;

    cout << "Therefore this are all your prime numbers less than " << userNum <<endl;

    int sum;
    for(int i = 2; i <  userNum; i ++){
        if(isPrime(i)){
            cout<< i << endl;
            sum = sum + i;
        };
    }
    cout << "And this is the sum also: " << sum << endl;

    return 0;
}

