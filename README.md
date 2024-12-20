# Movie Management System

A simple C++ program to manage a collection of movies. This system allows users to:
- Add a movie
- Increment the number of times a movie has been watched
- Display movie information

## Features:
- Store movie name, rating, and watch count.
- Add a movie if it doesn't already exist in the collection (checks based on movie name and rating).
- Increment the watch count of a movie.
- Display all movies in the collection.

## File Structure:
- `movie.h`: Header file defining the `Movie` class, which includes movie details and methods.
- `movies.h`: Header file defining the `Movies` class that manages a collection of `Movie` objects.
- `movie.cpp`: Source file for the `Movie` class implementations.
- `movies.cpp`: Source file for the `Movies` class implementations.
- `main.cpp`: The entry point of the program where movies are added and managed.

## Classes:
### Movie:
The `Movie` class represents a single movie, storing:
- **name** (string): The name of the movie.
- **rating** (string): The rating of the movie (e.g., "PG", "PG-13").
- **watched** (int): The number of times the movie has been watched.

Methods:
- `get_movie_name()`: Returns the movie's name.
- `get_movie_rating()`: Returns the movie's rating.
- `increment_watch()`: Increments the watch count by 1.
- `display()`: Displays the movie's details (name, rating, and watch count).

### Movies:
The `Movies` class manages a collection of `Movie` objects. It supports:
- Adding a movie (`add_movie`).
- Incrementing the watch count of a movie (`increment_watched`).
- Displaying all movies in the collection (`display`).

