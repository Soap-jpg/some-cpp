#include <iostream>
#include "movies.h"

Movies::Movies(){
}

Movies::~Movies(){
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (const auto& movie : movies) {
        if (movie.get_movie_name()==name && movie.get_movie_rating() == rating) {  
            return false;          
        }
    }
    movies.push_back(Movie(name, rating, watched));
    return true;
}

bool Movies::increment_watched(std::string name){
    for ( auto& movie : movies) {
        if (movie.get_movie_name() == name) {  
            movie.increment_watch();
            return true;          
        }
    }
    return false;
}        

void Movies::display(){
    for ( auto& movie : movies){
        movie.display();
    }
}

