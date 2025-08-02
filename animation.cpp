#include "animation.h"
#include <iostream>
using namespace std;

AnimationMovie::AnimationMovie(string t, int d, int m, int y, double r, int as, int ag, bool im) : Movie(t, d, m, y, r), animationStyle(as), ageGroup(ag), isMusical(im) {
    if (animationStyle < 1 || animationStyle > 3) {
        animationStyle = 1;
    }
    if (ageGroup != 5 && ageGroup != 7 && ageGroup != 18) {
        ageGroup = 5;
    }
}
AnimationMovie::~AnimationMovie() {}
void AnimationMovie::displayDetails() const {
    cout << "Genre: Animation, Title: " << getTitle() << ", Release Date: ";
    getReleaseDate().displayDate();
    cout << ", Rating: " << getRating();
    if (getDirector()) {
        cout << ", Director: ";
        getDirector()->displayDirector();
    }
    cout << ", Animation Style: " << animationStyle << ", Age Group: " << ageGroup << ", Is Musical: " << (isMusical ? "Yes" : "No") << endl;
}

double AnimationMovie::calculateScore() const {
    return fmod(getRating() * getDaysSinceRelease() * (ageGroup / animationStyle), 10.0);
}

string AnimationMovie::getGenre() const { 
    return "Animation"; 
}
void AnimationMovie::suggestMerchandise() const {  
    if (animationStyle == 2 || animationStyle == 3) {
        cout << "Merchandise: Cool" << endl;
    } else {
        cout << "Merchandise: Not cool" << endl;
    }
}
bool AnimationMovie::isFamilyFriendly() const {
    return (ageGroup == 18 && isMusical) || ((ageGroup == 5 || ageGroup == 7) && !isMusical) || animationStyle == 3;
}
void AnimationMovie::setAnimationStyle(int as) {
    if (as >= 1 && as <= 3) {
        animationStyle = as;
    }
}
void AnimationMovie::setAgeGroup(int ag) {
    if (ag == 5 || ag == 7 || ag == 18) {
        ageGroup = ag;
    }
}
void AnimationMovie::setIsMusical(bool im) {
    isMusical = im;
}
int AnimationMovie::getAnimationStyle() const {
    return animationStyle;
}
int AnimationMovie::getAgeGroup() const {
    return ageGroup;
}
bool AnimationMovie::getIsMusical() const {
    return isMusical;
}
AnimationMovie* AnimationMovie::getAsAnimationMovie() {
    return this;
}