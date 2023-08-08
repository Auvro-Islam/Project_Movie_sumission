#ifndef MOVIES_H
#define MOVIES_H

#include <vector>
#include <string>
#include "Movie.h"

class Movies {
    std::vector<Movie> movies;

public:
    Movies();
    ~Movies();
    bool add_movie(const std::string name, const std::string rating, int watched);
    bool increment_watched(const std::string name);
    void display() const;
   std::vector<Movie>& get_movies();
};

#endif // MOVIES_H
