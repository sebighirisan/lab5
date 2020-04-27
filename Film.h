//
// Created by a on 4/26/2020.
//

#ifndef LABB5_FILM_H
#define LABB5_FILM_H
#include <string>
#include <utility>

using namespace std;

class Film {
private:
    string trailer, titel, genre;
    int likes, jahr;
public:
    Film(string titel, string genre, int jahr, int likes, string trailer) {
        settitel(std::move(titel));
        setgenre(std::move(genre));
        setjahr(jahr);
        setlikes(likes);
        settrailer(std::move(trailer));
    };

    void settitel(string value) { titel = std::move(value); };

    [[nodiscard]] string gettitel() const { return titel; };


    void setgenre(string value) { genre = std::move(value); };

    string getgenre() { return genre; };


    void settrailer(string value) { trailer = std::move(value); };

    string gettrailer() { return trailer; };

    void setjahr(int value) { jahr = value; };

    [[nodiscard]] int getjahr() const { return jahr; };

    void setlikes(int value) { likes = value; };

    int getlikes() { return likes; };

    string anschreiben() {
        return "Der Film " + gettitel() + " wurde in den Jahr " + to_string(getjahr()) + "  publiziert" +
               " , hat folgendes Genre:" + getgenre() +
               " und hat so viele Likes: " + to_string(getlikes()) + "\n";
    };
};


#endif //LABB5_FILM_H
