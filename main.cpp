#include <iostream>
#include <vector>

class Board {
    private:
        int length;
        std::vector<std::vector<int>> board;

    public:
        Board(int length);

        void initBoard();

        void showBoard();

        int getLength();
        void setLength(int length);

};

inline Board :: Board(int length) {
    this->length = length;
    this->initBoard();
}

inline int Board :: getLength() {
    return this->length;
}

inline void Board :: setLength(int length) {
    this->length = length;
}

inline void Board :: initBoard() {

}

inline void Board :: showBoard() {
    for(int i=0;i<this->length;i++) {
        for(int j=0;j<this->length;j++) {
            std::cout << this->board[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    Board* board = new Board(8);
    board->showBoard();
    return 0;
}