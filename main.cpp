#include <iostream>

int main(){
    int myFavoriteNumber;
    std::cout << "Enter your favorite number" << std::endl;

    std::cin >> myFavoriteNumber;

    std::cout << "Amazing, that's my favorite number too! " << std::endl;
    std::cout << "No, really! ";
    std::cout << myFavoriteNumber;
    std::cout << " is my favorite number!";

    return 0;
}