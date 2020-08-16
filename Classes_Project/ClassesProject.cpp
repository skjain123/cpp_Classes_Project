#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

string input = "";

class Media {
 public:
  string title;
  double year;
  
  void getTitle() {cout << "Title: " << title << endl;}
  void getYear() {cout << "Year:" << year << endl;}
};

class videoGame: public Media {
 public:
  string publisher;
  int rating;

  void getPub() {cout << "Publisher: " << publisher << endl;}
  void getRating() {cout << "Rating: " << rating << endl;}
};

class Music: public Media {
 public:
  string artist;
  int duration;
  string publisher;

  void getArtist() {cout << "Artist: " << artist << endl;}
  void getDuration() {cout << "Duration: " << duration << endl;}
  void getPublisher() {cout << "Publisher: " << publisher << endl;}
};

class Movie: public Media {
 public:
  string director;
  int duration;
  string rating;

  void getDirector() {cout << "Director: " << director << endl;}
  void getDuration() {cout << "Duration: " << duration << endl;}
  void getRating() {cout << "Rating: " << rating << endl;}
};

vector<videoGame> vg;
vector<Music> mu;
vector<Movie> mo;

void SEARCH() {}
void ADD() {
  //variables
  string input;

  //what want to add
  getline(cin, input);
  transform(input.begin(), input.end(), input.begin(), ::toupper);
  while (input != "VIDEO GAME" && input != "MUSIC" && input != "MOVIE") {
    cout << "what type of media do you want to add?" << endl;
    cout << "Options: Video Game, Music, and Movie." << endl;
    getline(cin, input);
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    if (input == "VIDEO GAME") {
      vg.push_back(videoGame());
    } else if (input == "MUSIC") {
      mu.push_back(Music());
    } else if (input == "MOVIE") {
      mo.push_back(Movie());
    } else {
      cout << "I don't know what you mean!" << endl;
    }
  }
  //based on answer add to specific vectors
  //set the values
  //done
}

int main() {
  cout << "Commands: add, search, exit/quit." << endl;
  
  while (true) {
    cin >> input;
    
    if (input == "ADD" || input == "add") {
      ADD();
    } else if (input == "SEARCH" || input == "search") {
      //search
    } else if (input == "exit" || input == "quit") {
      exit(0);
    } else {
      cout << "I don't know what you mean..." << endl;
      cout << "Commands: add, search, exit/quit." << endl;
    }
    
    cout << endl;
  }
  
  return 0;
}
