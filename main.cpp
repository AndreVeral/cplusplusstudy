#include <iostream>
#include <cstdio>

int main(){
    int myFavoriteNumber;
    std::cout << "Enter your favorite number" << std::endl;

    std::cin >> myFavoriteNumber;

    std::cout << "Amazing, that's my favorite number too! " << std::endl;
    std::cout << "No, really! ";
    std::cout << myFavoriteNumber;
    std::cout << " is my favorite number!" << std::endl;
    system("pause");
    return 0;
}