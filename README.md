# Labyrinth Generator project


Welcome to the labyrinth Generator project. This project provides a C program for generating and solving a labyrinth using SDL2. The generation algorithm used in this project is randomized DFS (depth-first search). This algorithm uses a recursive depth-first traversal to randomly generate a labyrinth by removing the walls between visited cells randomly. This creates winding paths and ensures that all cells in the labyrinth are accessible.

                                                                                 
L = 11, pix = 40

<img src=https://user-images.githubusercontent.com/77071173/109236764-8ac4fa80-77d0-11eb-9065-042e897ca1ee.gif alt="image" style="display:block; margin:auto">
                                                                                                              



L = 23, pix = 30
                                                                                                                          
![labyrinthe giiff](https://user-images.githubusercontent.com/77071173/109235614-4d5f6d80-77ce-11eb-9efe-9607143bb23d.gif)

L = 119, pix = 3 

![labyrinthe giff](https://user-images.githubusercontent.com/77071173/109233751-b513b980-77ca-11eb-996f-737070a723fc.gif)


## Dependencies

In order to use this program, you will need to have the following packages installed:

- SDL2
- SDL2_image
- SDL2_ttf

## Usage

To run the program, compile the source code with a C compiler and run the executable file. The program will generate a random labyrinth and allow the user to navigate through it using the arrow keys.



## File Structure

The `fonctions.h` header file contains function prototypes and global variables used throughout the program. The functions included in this file are:

- `connect_cell`: Connects two cells in the labyrinth by removing the wall between them.
- `Initialisation_creation`: Initializes the program and creates the window and renderer. Returns a boolean value indicating if the program is running.
- `newSDL_Rect`: Creates and returns a new SDL_Rect structure with the specified parameters.
- `rand_vois`: Returns a random neighboring cell of the specified cell.
- `Quiter_detruire`: Frees resources and quits the program.
- `setup`: Initializes variables and sets up the labyrinth.
- `processInput`: Processes user input.
- `rand_vois_nonvi`: Returns a random unvisited neighboring cell of the specified cell.
- `render`: Renders the labyrinth to the window.
- `Labyrinthe`: Generates the labyrinth using the recursive backtracking algorithm.
- `verifier`: Returns a boolean value indicating if the specified cell has been visited.

## Additional Notes

The program uses the SDL2 library to create a window and handle user input. It also uses the SDL2_image and SDL2_ttf libraries to load and display images and text. The `fonctions.h` header file contains function prototypes and global variables used throughout the program. The `main` function initializes the program, processes user input, and contains the main game loop that updates and renders the labyrinth.

                                                                      

         
