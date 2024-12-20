#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie{
    private:
        std::string name;
        std::string rating;
        int watched;

    public:
        Movie(std::string name,std::string rating,int watched); // Constructor

        Movie(const Movie&& source); // Move Constructor

        ~Movie(); // Destrcutor

        void set_movie_name(std::string movie_name){
            name=movie_name;
        }

        std::string get_movie_name() const{
            return name;
        }

        void set_movie_rating(std::string movie_rating){
            rating=movie_rating;
        }

        std::string get_movie_rating() const{
            return rating;
        }

        void increment_watch(){
            watched++;
        }

        void display();

};

#endif 