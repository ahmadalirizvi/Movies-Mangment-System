**Movie Management System**
A C++ Object-Oriented Programming (OOP) project developed as a second-semester academic assignment to manage a collection of movies. The system supports adding, displaying, and searching movies by genre (SciFi, Animation, Action), director, title, or rating, using OOP principles like inheritance, polymorphism, and composition.

**Features**

**Movie Management:**
Add and store up to 50 movies with details (title, release date, rating, director).
Genre-Specific Functionality:
SciFi: Technology analysis, future scenario simulation.
Animation: Merchandise suggestions, family-friendly checks.
Action: Censorship assessment, stunt coordinator reports.

**Search Capabilities:**
Case-insensitive search by director name, title, or rating.
Polymorphic Behavior: Uses virtual functions (displayDetails, calculateScore, getGenre) for genre-specific operations.
Composition: Director class uses a Name object to manage first and last names.
Dynamic Date Calculations: Computes days since release for score calculations using helper functions (isLeapYear, getDaysInMonth).

**Project Structure**
movie.h, movie.cpp: Base class for movies with virtual functions and date calculations.
scifi.h, scifi.cpp: Derived class for SciFi movies.
animation.h, animation.cpp: Derived class for Animation movies.
action.h, action.cpp: Derived class for Action movies.
director.h, director.cpp: Manages director details with a Name object.
name.h, name.cpp: Encapsulates first and last names.
date.h, date.cpp: Handles release date operations.
system.h, system.cpp: Core system logic for menu-driven operations and searches.
main.cpp: Entry point to run the program.


**Prerequisites**

C++ compiler (e.g., g++ with C++11 or later)
Standard C++ libraries (<string>, <iostream>, <algorithm>, <cctype>)

**Installation and Setup**

Clone the repository:git clone https://github.com/ahmadalirizvi/Movies-Mangment-System
cd Movie-Management-System


Compile the project using the provided Makefile:make


Run the executable:./movie_management



**Usage**

Run the program to access a menu-driven interface.
Options:
Add Movie: Input movie details (title, release date, rating, director, genre-specific data).
Display Movies: View all movies or filter by genre (SciFi, Animation, Action).
Search Movies: Search by director, title, rating, or score.


Example:Enter choice: a
Enter movie title: Interstellar
Enter release day: 7
Enter release month: 11
Enter release year: 2014
Enter rating (0-10): 8.6
Enter director's first name: Christopher
Enter director's last name: Nolan
Enter director's experience (years): 20
Enter director's nationality: British
Enter genre (SciFi/Animation/Action): SciFi



OOP Concepts Demonstrated

Inheritance: SciFiMovie, AnimationMovie, ActionMovie inherit from Movie.
Polymorphism: Virtual functions (displayDetails, calculateScore, getGenre, getAsSciFiMovie, etc.) enable dynamic behavior.
Composition: Director contains a Name object; Movie contains Date and Director objects.
Encapsulation: Private members with public getters/setters (e.g., title, rating).
Modularity: Helper functions (toLowerCase, isLeapYear, getDaysInMonth) for reusable logic.

Dependencies

C++ Standard Library:
<string>: For std::string and std::getline.
<algorithm>: For std::transform in case-insensitive searches.
<cctype>: For ::tolower in toLowerCase.
<iostream>: For input/output operations.



License
This project is licensed under the MIT License. See the LICENSE file for details.
Acknowledgments

Developed as part of a second-semester OOP course.
Inspired by real-world movie database systems, focusing on OOP principles.
