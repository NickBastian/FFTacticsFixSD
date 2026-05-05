# FFTacticsFix
A plugin that aims to provide additional options and fix issues with Final Fantasy Tactics: The Ivalice Chronicles on PC.

## Features
- [x] Remove grain filter
- [x] Play animated cutscene videos in place of the in-game cutscenes
- [x] Increased rendering resolution
- [x] Ultrawide support
- [ ] Increase framerate
      
## Installation
[Download](https://github.com/cipherxof/FFTacticsFix/releases) and extract the zip to the root of your game directory.
 
<img width="905" height="352" alt="image" src="https://github.com/user-attachments/assets/6b576ce9-44c6-4a45-821a-d6674286312d" />

## Configuration

scripts/FFTacticsFix.ini

```ini
[Settings]
RenderScale = 4 # 4 is the default. 10 is 4k
PreferMovies = 1 # Play movies instead of cutscenes
DisableFilter = 1 # Disable the grain filter
SteamDeck = 1 # Enable full 16:10 support for Steam Deck (1280x800). Set to 0 to disable.
```

*Ultrawide users must launch their game in borderless windowed mode with your preferred ultrawide resolution. Changing resolutions after launch will not work*

## Steam Deck / Linux

Use the following launch options:

```bash
WINEDLLOVERRIDES="wininet,winhttp=n,b" %command%
```

### Steam Deck 16:10 (Full Screen)

To get full 16:10 rendering on Steam Deck (1280x800):

1. In `scripts/FFTacticsFix.ini`, set `SteamDeck = 1`
2. Launch the game in **borderless windowed mode** at **1280x800**
3. Use the launch options above

With `SteamDeck = 1` the plugin will:
- Render to the full 16:10 screen (no pillarboxing)
- Correctly scale the FBO to 1920x1200 (or proportional RenderScale)
- Adjust the camera center and world-to-screen projection for 16:10
- Remove the UI overlay that would otherwise add bars
 
## Before/After (Filter Removed/Increased Resolution/Ultrawide)

![ultrawide](https://github.com/user-attachments/assets/4ff92e18-cf6e-4ef3-84ad-164fa4f05638)

