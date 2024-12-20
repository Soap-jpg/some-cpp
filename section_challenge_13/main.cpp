#include <iostream>
#include "movies.h"

void increment_wacthed(Movies &movie,std::string name);
void add_movie(Movies &movie,std::string name,std::string rating,int watched);

void increment_wacthed(Movies &movie,std::string name){
    if (movie.increment_watched(name)){
        std::cout<<name<<" Watch incremnted"<<std::endl;
    }else{
        std::cout<<name<<" not found"<<std::endl;
    }
}

void add_movie(Movies &movie,std::string name,std::string rating,int watched){
    if (movie.add_movie(name,rating,watched)){
        std::cout<<name<<" added"<<std::endl;
    }else{
        std::cout<<name<<" is already added"<<std::endl;
    }
}

int main(){
    Movies my_movie;
    
    add_movie(my_movie,"Prisoner","PG16",1);
    add_movie(my_movie,"Manchester by the sea","PG16",1);
    add_movie(my_movie,"13 Hours","PG16",3);

    add_movie(my_movie,"Prisoner","PG16",1);

    my_movie.display();

    increment_wacthed(my_movie,"Prisoner");
    increment_wacthed(my_movie,"13 Hours");

    my_movie.display();

    return 0;
}

