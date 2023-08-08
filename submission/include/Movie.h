#ifndef MOVIE_H
#define MOVIE_H
#include<iostream>


class Movie
{
   private:
       std::string name;
       std::string rating;
       int watched;
   public:
    Movie(std::string name,std::string rating,int watched);
    //copy constructor
    Movie(const Movie &source);
    //Destructor
    ~Movie();
    void set_name(std::string name)
    {
        this->name=name;
    }
    std::string const get_name()
    {
        return name;
    } void set_rating(std::string rating)
    {
        this->rating=rating;
    }
    std::string const get_rating()
    {
        return name;
    } void set_watched(int watched)
    {
        this->watched=watched;
    }
    int get_watched()const{return watched;}

    void increment_watched(){++watched;}
    void display()const;
};

#endif // MOVIE_H
