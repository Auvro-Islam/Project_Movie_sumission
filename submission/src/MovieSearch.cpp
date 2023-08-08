#include "MovieSearch.h"
#include "Movies.h"

MovieSearch::MovieSearch() {}

const Movie* MovieSearch::search_movie(const std::string& name, Movies& movies) const {
    for (Movie& movie : movies.get_movies()) { // Updated to non-const reference
        if (movie.get_name() == name) {
            return &movie;
        }
    }
    return nullptr;
}
