#include <iostream>

int main() {
  std::cout << "How was your day?" << std::endl;

  std::string response;
  std::getline(std::cin, response);

  std::cout << "You said that your day was " << response << "." << std::endl;

  return 0;
}
