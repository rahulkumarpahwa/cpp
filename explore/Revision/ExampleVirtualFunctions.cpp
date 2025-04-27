#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {

        title = s;
        rating = r;
    }
    virtual void display() // virtual function 
    {
    }
};

class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, int vdl) : CWH(s, r)
    {

        videoLength = vdl;
    }
    void display()
    {
        cout << "the title of the video is " << this->title << endl;
        cout << "the ratings are " << this->rating << endl;
        cout << "the video length is " << this->videoLength << endl;
    }
};

class CWHText : public CWH
{
    int wordLength;

public:
    CWHText(string s, float r, int wdl) : CWH(s, r)
    {

        wordLength = wdl;
    }
    void display()
    {
        cout << "the title of the Text is " << this->title << endl;
        cout << "the ratings are " << this->rating << endl;
        cout << "the word length is " << this->wordLength << endl;
    }
};

int main()
{

    string title;
    float rating, videolength;
    int words;

    title = "Apple Tutorial";
    videolength = 56.45;
    rating = 7.6;

    CWHVideo applevideo(title, rating, videolength);
    // applevideo.display();

    title = "Apple Tutorial Text";
    rating = 7.6;
    words = 880;

    CWHText appletext(title, rating, words);
    // appletext.display();

    CWH *video, *text;

    video = &applevideo; 
    text = &appletext;

    video->display(); // virtual fxn so the derived class functions will be called.
    text->display(); // virtual fxn so the derived class functions will be called.

    return 0;
}