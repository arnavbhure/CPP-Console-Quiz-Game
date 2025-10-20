# C++ Console Quiz Game

Welcome to the C++ Console Quiz Game! This is a simple and interactive terminal-based quiz game where you can test your knowledge on a variety of topics, from sports and anime to general knowledge and brain teasers.



## 🌟 Features

-   **Multiple Topics:** Choose from 10 different categories, including Sports, Anime, Bollywood, and more!
-   **Sub-Categories:** The Sports topic is further divided into 10 sub-categories like Cricket, Football, and Chess.
-   **Randomized Questions:** Get a random set of 5 questions each time you play to keep things interesting.
-   **Instant Scoring:** Receive immediate feedback on your answers and see your score update in real-time.
-   **Simple Console Interface:** Easy to navigate and play directly in your terminal.

## 🛠️ How to Compile and Run

This project is written in standard C++. You'll need a C++ compiler like G++ to run it.

1.  **Clone the repository:**
    ```sh
    git clone [https://github.com/YourUsername/CPP-Console-Quiz-Game.git](https://github.com/YourUsername/CPP-Console-Quiz-Game.git)
    cd CPP-Console-Quiz-Game
    ```

2.  **Compile the code:**
    Open your terminal and run the following command to compile the `main.cpp` file.
    ```sh
    g++ main.cpp -o quiz_game -std=c++11
    ```
    *(Note: `-std=c++11` is needed for features like `<thread>` and `<chrono>`).*

3.  **Run the executable:**
    -   On Windows:
        ```sh
        quiz_game.exe
        ```
    -   On macOS/Linux:
        ```sh
        ./quiz_game
        ```

## 📁 File Structure

The game loads questions and answers from external `.txt` files. **You must have these files in the same directory as the executable for the game to work.**

The format for each file is:
-   Line 1: Full Question (including options A, B, C, D)
-   Line 2: The correct character answer (e.g., A, B, C, or D)
-   Line 3: Next Full Question
-   Line 4: Next correct answer
-   ... and so on.

**Required Files:**
- `cricket.txt`
- `football.txt`
- `badminton.txt`
- `tabletennis.txt`
- `basketball.txt`
- `volleyball.txt`
- `chess.txt`
- `gym.txt`
- `tennis.txt`
- `kabaddi.txt`
- `onlinegames.txt`
- `anime.txt`
- `webseries.txt`
- `generalknowledge.txt`
- `bollywood.txt`
- `cartoons.txt`
- `hollywood.txt`
- `brainteaser.txt`
- `influencer.txt`

## 🕹️ How to Play

1.  Run the game.
2.  You will be presented with a list of main topics. Enter the number corresponding to your choice.
3.  If you choose "Sports," you will be asked to select a sub-category.
4.  The screen will clear, and you will be presented with 5 random questions, one by one.
5.  Enter your answer (A, B, C, or D) for each question.
6.  Your final score will be displayed at the end.

## 🤝 How to Contribute

Want to add more questions or topics?
1.  Create a new `.txt` file for your topic (e.g., `science.txt`).
2.  Follow the question/answer format described above.
3.  Modify the `main.cpp` file to add your new topic to the menu.
4.  Feel free to fork the repository, make your changes, and submit a pull request!

---
Programmed by ArnavBhure
