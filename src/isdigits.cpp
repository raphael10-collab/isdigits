//  https://smolkit.com/blog/posts/how-to-url-decode-in-cpp/

#include <string>
#include <algorithm>
#include <iostream>


// https://stackoverflow.com/questions/8888748/how-to-check-if-given-c-string-or-char-contains-only-digits
bool IsOnlyDigits(const std::string &str)
{
    return std::all_of(str.begin(), str.end(), ::isdigit);
}


int main ()
{

    std::string s1 = "123456789";
    if (IsOnlyDigits(s1))
    {
        std::cout << "Only digits" << std::endl;
    }
    else
    {
        std::cout << "Alpha Numerical" << std::endl;
    }

    std::cout << std::endl;

    std::string s2 = "1c34a67v89";
    if (IsOnlyDigits(s2))
    {
        std::cout << "Only digits" << std::endl;
    }
    else
    {
        std::cout << "Alpha Numerical" << std::endl;
    }


    return 0;

}
