# WaveSimulator (SFML)

A C++/SFML sandbox project (built with CMake) that renders a window and moves a player object around while experimenting with **record / replay** of movement.

Despite the name, this is **not a wave-physics simulator** — it’s an SFML gameplay/engine practice project.

## What it does

- Creates an `sf::RenderWindow` (800×600) with a fixed framerate.
- Renders a textured rectangle player.
- Lets you:
  - **Record** positions (press **E** to start recording)
  - **Replay** recorded positions (press **R** to replay)
  - Shows a red indicator while recording.

## Controls

- `E` — start recording (clears previous recording)
- `R` — replay last recording
- `Esc` — close window

## Project layout

- `src/main.cpp` — main loop (`update` + `render`).
- `src/Game.h`, `src/game.cpp` — window setup, event polling, and update/render loop.
- `src/Player.h`, `src/Player.cpp` — player object, recording buffer, replay logic.
- `include/` + `lib/` — vendored SFML headers + libs.

## Build (Windows)

### Prerequisites

- CMake
- A C++17 compiler (MSVC recommended)

### Configure + build

From the repo root:

```powershell
cmake -S . -B build
cmake --build build --config Debug
```

Executable output is configured to:

- `build/bin/WaveSimulator.exe`

## Run

```powershell
./build/bin/WaveSimulator.exe
```

### Asset note

`Player.cpp` loads a texture from:

- `resources/image.jpg`

Make sure that file exists relative to the working directory when you run the program, otherwise the texture load will fail.

## TODO

- Persist recordings to disk (JSON/CSV) and load them back.
- Add proper time-based replay (currently it replays a sequence of stored positions).
- Rename project to better match its purpose.
