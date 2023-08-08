// MovieReview.cpp
#include "MovieReview.h"
#include <iostream>
#include <map>

MovieReview::MovieReview() {}

void MovieReview::write_review(const std::string& name, const std::string& review) {
    std::cout << "Review for movie '" << name << "':\n";
    std::cout << review << "\n";
    std::cout << "\n=========================" <<std::endl;
}
