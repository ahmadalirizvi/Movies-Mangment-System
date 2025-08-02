#ifndef ANIMATION_H
#define ANIMATION_H
#include "movie.h"

class AnimationMovie : public Movie {
private:
    int animationStyle;
    int ageGroup;
    bool isMusical;
public:
    AnimationMovie(string t = "", int d = 1, int m = 1, int y = 2000, double r = 0.0, int as = 1, int ag = 5, bool im = false);
    ~AnimationMovie() override;
    void displayDetails() const override;
    double calculateScore() const override;
    string getGenre() const override;
    void suggestMerchandise() const;
    bool isFamilyFriendly() const;
    AnimationMovie* getAsAnimationMovie() override;
    void setAnimationStyle(int as);
    void setAgeGroup(int ag);
    void setIsMusical(bool im);
    int getAnimationStyle() const;
    int getAgeGroup() const;
    bool getIsMusical() const;
};
#endif