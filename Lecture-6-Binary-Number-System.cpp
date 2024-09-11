#include <iostream>
#include <string> // Required for std::string and std::stoi
using namespace std;

// Number System
// 1. Binary Number System
// 2. Octal Number System
// 3. Decimal Number System
// 4. Hexadecimal Number System

// Here we are going to talk about binary to decimal & vice versa

// For decimal to binary
// keep dividing the number by 2 and keep adding the remainder to the binary number
int decToBin(int decNum)
{
    int ans = 0;
    int pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans += rem * pow;
        pow *= 10;
    }

    return ans;
}

// For binary to decimal
// (2^0) + (2^1) + (2^2) + (2^3) + (2^4) + (2^5) + (2^6) + (2^7)
int binToDec(int binNum)
{
    int check = binNum;
    while (check > 0)
    {
        if ((check % 10) > 1)
        {
            return -1;
        }
        check /= 10;
    }

    int ans = 0;
    int pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;
        pow *= 2;
        binNum /= 10;
    }

    return ans;
}

// Tow's complement :-
// in a binary number MSB tell's wether it is -ve (1) or +ve (0)
int twosComplement(int binNum)
{
    int check = binNum;
    while (check > 0)
    {
        if ((check % 10) > 1)
        {
            return -1;
        }
        check /= 10;
    }

    string onesComp = "";
    int binNumCopy = binNum;

    if (binNum >= 0)
    {
        cout << "Here MSB : " << 0 << endl;
        while (binNumCopy > 0)
        {
            int rem = binNumCopy % 10;

            if (rem == 0)
            {
                onesComp = "1" + onesComp;
            }
            else if (rem == 1)
            {
                onesComp = "0" + onesComp;
            }
            binNumCopy /= 10;
        }
        onesComp = "1" + onesComp; // adding 1 at MSB
    }
    else
    {
        cout << "Here MSB : " << 1 << endl;
        while (binNumCopy > 0)
        {
            int rem = binNumCopy % 10;

            if (rem == 0)
            {
                onesComp = "1" + onesComp;
            }
            else if (rem == 1)
            {
                onesComp = "0" + onesComp;
            }
            binNumCopy /= 10;
        }
        onesComp = "0" + onesComp; // adding 0 at MSB
    }

    int numOnesComp = stoi(onesComp);
    string twosComp = "";
    int carry = 1;

    while (numOnesComp > 0)
    {
        int rem = numOnesComp % 10;
        if (rem == 0 && carry == 1)
        {
            twosComp = ("1" + twosComp);
            carry = 0;
        }
        else if (rem == 0 && carry == 0)
        {
            twosComp = ("0" + twosComp);
        }
        else if (rem == 1 && carry == 0)
        {
            twosComp = ("1" + twosComp);
        }
        else if (rem == 1 && carry == 1)
        {
            twosComp = ("0" + twosComp);
            carry = 1;
        }
        numOnesComp /= 10;
    }

    int ans = stoi(twosComp);
    return ans;
}

// Tow's complement to decimal :-
int twosCompToDec(int twosComp)
{
    int MSB;
    int pow = 1;
    int binNum = twosComp;
    while (twosComp > 0)
    {
        MSB = twosComp % 10;
        twosComp /= 10;
        pow *= 10;
    }
    cout << "MSB " << MSB << endl;
    // cout << "pow " << pow << endl;
    binNum = twosComplement(binNum % pow) % pow;

    if (MSB == 0)
    {
        binNum = -binNum;
    }
    return binNum;
}

int main()
{

    int binNum = 10110;
    // cin >> binNum;
    int twosComp = twosComplement(binNum);
    int twosCompToBin = twosCompToDec(twosComp);
    cout
        << "binNum Got : " << binNum << endl;
    cout << "towsComp is : " << twosComp << endl;
    cout << "twosCompToBinNum : " << twosCompToBin << endl;

    return 0;
}