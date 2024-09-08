bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }
    if (x != 0 && x % 10 == 0) {
        return false;
    }

    int param = x;
    int reverse = 0;

    while(x > reverse ) {
        reversed = reversed * 10 + x % 10;
        x = x / 10;
    }

    return x == reversed || x == reverse / 10;
}