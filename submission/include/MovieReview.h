// MovieReview.h
#ifndef MOVIEREVIEW_H
#define MOVIEREVIEW_H

#include <string>

class MovieReview {
public:
    MovieReview();
    void write_review(const std::string& name, const std::string& review);
};

#endif // MOVIEREVIEW_H
