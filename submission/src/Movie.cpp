#include "Movie.h"
#include<iostream>

//constructor
Movie::Movie(std::string name,std::string rating,int watched)
    :name(name),rating(rating),watched(watched){}
//copy constructor
Movie::Movie(const Movie &source)
    :Movie(source.name,source.rating,source.watched){}
//destructor
Movie::~Movie(){}
//display
void Movie::display()const{
  std::cout<<"Movie name: "<<name<<"\n"<<"Movie rating: "<<rating<<"\n"<<"Movie watched:"<<watched<<std::endl;}
