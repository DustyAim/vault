char getGrade(int a, int b, int c) {
    int mark = (a + b + c)/3/10;
    return (mark<6) ? 'F' : (mark == 6) ? 'D' : (mark == 7) ? 'C' : (mark == 8) ? 'B' : (mark <= 10) ? 'A' : ' ';
}