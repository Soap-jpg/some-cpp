#include <iostream>
#include "movie.h"

Movie::Movie(std::string name,std::string rating,int watched)
    :name{name},rating{rating},watched{watched}{
    }

Movie::Movie(const Movie&& source)
    :name{source.name},rating{source.rating},watched{source.watched}{
    }

Movie::~Movie(){
}

void Movie::display(){
    std::cout<<name<<","<<rating<<","<<watched<<std::endl;
}

int ok(){
    
    return 0;
}

