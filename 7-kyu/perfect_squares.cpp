long int findNextSquare(long int sq) {
    // Return the next square if sq if a perfect square, -1 otherwise
    if (sq == 0) return 1;
    for (long int i = 1; i < sq; i++){
        if (i*i == sq) return (i+1)*(i+1);
        if (i*i > sq) return -1;
    }
}