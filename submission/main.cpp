#include <iostream>
#include"Movies.h"
#include "MovieSearch.h"
#include "MovieReview.h"

using namespace std;
void increment_watched(Movies &movies,std::string name);
void add_movie(Movies &movies,std::string name,std::string rating,int watched);
void increment_watched(Movies &movies,std::string name){
if(movies.increment_watched(name))
    {
        std::cout<<name<<"watched incremented"<<std::endl;
    }else{
    std::cout<<name<<"not found"<<std::endl;}
}
void add_movie(Movies &movies,std::string name,std::string rating,int watched)
{
    if(movies.add_movie(name,rating,watched))
    {
        std::cout<<name<<" added"<<"\n";
    }
    else{std::cout<<name<<" already exists"<<"\n";}
}


int main() {
    Movies my_movies;
    MovieSearch movie_search;
    MovieReview movie_review;
    char choice;


    do {
        cout << "What do you want to do?\n"
             << "1. Add a new movie\n"
             << "2. Increment the watch count of a movie\n"
             << "3. Search for a movie and get information\n"
             << "4. Write a review for a movie\n"
             << "5. Display all movies\n"
             << "6. Exit\n"
             << "Enter your choice (1/2/3/4/5/6): ";


        cin >> choice;

        switch (choice) {
            case '1': {
                 string name, rating;
                int watched;
                cout << "Enter the movie name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter the movie rating: ";
                getline(cin, rating);
                cout << "Enter the number of times watched: ";
                cin >> watched;
                add_movie(my_movies, name, rating, watched);
                cout << "\n=========================" <<endl;
                break;
            }
            case '2': {

                string name;
                cout << "Enter the movie name to increment watch count: ";
                cin.ignore();
                getline(cin, name);
                increment_watched(my_movies, name);
                cout << "\n=========================" <<endl;
                break;
            }
            case '3': {
                string search_name;
                cout << "Enter the movie name to search: ";
                cin.ignore();
                getline(cin, search_name);
                const Movie* found_movie = movie_search.search_movie(search_name, my_movies);

                if (found_movie) {
                    found_movie->display();
                } else {
                    cout << "Movie not found.\n";
                }
                cout << "\n=========================" <<endl;
                break;
            }
            case '4': {
                string review_name, user_review;
                cout << "Enter the movie name to write a review for: ";
                cin.ignore();
                getline(cin, review_name);
                cout << "Write your review: ";
                getline(cin, user_review);
                movie_review.write_review(review_name, user_review);

                break;
            }
            case '5': {
                my_movies.display();
                break;
            }
            case '6': {
                cout << "Exiting...\n";
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != '6');

    return 0;
}

