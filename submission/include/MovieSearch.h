#ifndef MOVIESEARCH_H
#define MOVIESEARCH_H

#include <string>
#include "Movies.h"

class MovieSearch {
public:
    MovieSearch();
    const Movie* search_movie(const std::string& name, Movies& movies) const; // Updated: Accept non-const reference
};

#endif // MOVIESEARCH_H

