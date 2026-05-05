#include <wtypes.h>

struct GameConfig
{
	bool PreferMovies = false;
	bool DisableFilter = false;
	int RenderScale = 4;
	bool SteamDeck = false; // Enable 16:10 aspect ratio support for Steam Deck (1280x800)
};

extern GameConfig Config;