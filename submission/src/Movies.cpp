#include "Movies.h"
#include<iostream>

Movies::Movies(){}//no-args constructor

Movies::~Movies(){}//destructor
  bool Movies:: add_movie(std::string name,std::string rating,int watched)
  {
      for(Movie &movie: movies)
      {
          if(movie.get_name()==name)
            return false;
      }
      Movie temp(name,rating,watched);
      movies.push_back(temp);
      return true;
  }
bool Movies::increment_watched(std::string name)
{
      for(   Movie &movie:movies)
      {
          if(movie.get_name()==name)
            {movie.increment_watched();
            return true;}
      }
    return false;
}
void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "Sorry no movie to display" << std::endl;
    } else {
        std::cout << "\n=========================" << std::endl;

        for (const auto& movie : movies) {
            movie.display();
        }

        std::cout << "\n=========================" << std::endl;
    }

}
    std::vector<Movie>& Movies::get_movies() {
    return movies;
}

