# UFO Word Guess 🎮👽

A beginner-friendly C++ console game where you must guess the secret word, one letter at a time. Each wrong guess brings the UFO closer to abducting your friend — can you save them in time?

Inspired by hangman, this game adds a fun twist with a UFO-themed visual and clear game logic using modular C++ functions. It's a great mini-project for beginners learning conditions, loops, vectors, and function structure.

## Features

- Text-based gameplay in the terminal
- ASCII art that changes with each incorrect guess
- Tracks both correct and incorrect letters
- Clean separation using header and source files

## How to Play

1. The codeword is predefined in the program.
2. Enter one letter per turn to guess.
3. Each correct guess reveals part of the word.
4. Each wrong guess moves the UFO closer.
5. You lose after 7 wrong guesses. Guess the word to win!

## How to Run

```bash
g++ ufo.cpp ufo_functions.cpp -o ufowordguess
./ufowordguess
or jus simply click the UfoWordGuess.exe
