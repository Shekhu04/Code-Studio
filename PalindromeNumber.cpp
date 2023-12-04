bool palindrome(int n)
{
    int rev = 0;
    int num = n;

    while(n > 0) {

        //extract last digits
        int digit = n%10;

        //Appending last digit
        rev = rev*10+digit;

        //Shrinking n by discarding the last digit
        n = n/10;
    }
    if (num == rev){
        return true;
    }
    else return false;
}
