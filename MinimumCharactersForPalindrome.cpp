int minCharsforPalindrome(string str) {

    int i=0,j=str.length()-1;

    int c=0;

 int k=j;

    while(i<=j)

    {

        if(str[i]==str[j])

         {

             i++;

             j--;

         }

         else {

             i=0;

             k--;

             j=k;

             c++;

         }

         

    }

    return c;

 

    

}
