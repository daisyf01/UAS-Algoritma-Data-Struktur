#include <iostream>
#include <queue>
using namespace std;

struct Lagu {
    string judul;
};

void tampilkanPlaylist(queue<Lagu> playlist, const string& namaPlaylist) {
    cout << "Playlist " << namaPlaylist << ":\n";
    int nomorLagu = 1;
    while (!playlist.empty()) {
        Lagu lagu = playlist.front();
        cout << nomorLagu << ". " << lagu.judul << endl;
        playlist.pop();
        nomorLagu++;
    }
    cout << endl;
}

int main() {

    queue<Lagu> playlistDaisy;
    playlistDaisy.push({"Eyes without Face"});
    playlistDaisy.push({"Playground Love"});
    playlistDaisy.push({"Let it Happen"});
    playlistDaisy.push({"Exit Music"});
    playlistDaisy.push({"Back to the Old House"});


    tampilkanPlaylist(playlistDaisy, "Daisy");

    return 0;
}
