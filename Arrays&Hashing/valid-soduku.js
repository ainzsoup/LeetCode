/**
 * @param {character[][]} board
 * @return {boolean}
 */
let validRows = (board) => {
    for (e of board) {
        let row = e.filter(a => a != ".");
        let unique = new Set(row);
        if (row.length != unique.size)
        {
            console.log("invalid Row: ", row);
            return false;
        }
    }
    return true;
}

let validColumns = (board) => {
    for (let j = 0; j < 9; j++) {
        let column = [];
        for (let i = 0; i < 9; i++) {
            column.push(board[i][j]);
        }
        column = column.filter(e => e != ".");
        let unique = new Set(column);
        if (column.length != unique.size)
        {
            console.log("invalid column: ", column);
            return false;
        }
    }
    return true;
}

let validSquare = (board, x, y) => {
    let square = [];
    for (let j = y; j < y + 3; j++) {
        for (let i = x; i < x + 3; i++) {
            if (board[j][i] != ".")
                square.push(board[j][i]);
        }
    }
    let unique = new Set(square);
    if (square.length == unique.size)
        return true;
    console.log("invalid square: ", x, y);
    return false;
}


let validSquares = (board) => {
    return validSquare(board, 0, 0) && validSquare(board, 3, 0) && validSquare(board, 6, 0) && validSquare(board, 0, 3) && validSquare(board, 3, 3) && validSquare(board, 6, 3) && validSquare(board, 0, 6) && validSquare(board, 3, 6) && validSquare(board, 6, 6);
}

var isValidSudoku = function(board) {
    return validRows(board) && validColumns(board) &&  validSquares(board);
};
