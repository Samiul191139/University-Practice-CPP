#include <iostream>
#include <string>
using namespace std;
void play(const string& videoFile) 
{
    cout << "Playing video file: " << videoFile << endl;
}
void play(const string& videoFile, const string& videoCodec) 
{
    cout << "Playing video file: " << videoFile << " with codec: " << videoCodec << endl;
}
void play(const string& videoFile, const string& videoCodec, const string& fileFormat) 
{
    cout << "Playing video file: " << videoFile << " with codec: " << videoCodec
         << " in format: " << fileFormat << endl;
}

int main() 
{
    play("music.mp3");
    play("video.mp4");
    play("audio.wav", "MP3");
    play("movie.mkv", "H.264");
    play("song.ogg", "Vorbis", "OGG");
    play("movie.webm", "VP9", "WEBM");
    return 0;
}