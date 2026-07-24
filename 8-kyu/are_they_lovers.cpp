bool lovefunc(int f1, int f2) {
    if ((f1%2==0 && f2%2!=0) || (f2%2==0 && f1%2!=0))
        return true;
    else
        return false;
}