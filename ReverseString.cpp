// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

void reverseString1(std::string str1)
{
    std::reverse(str1.begin(), str1.end());
    std::cout<<"reverse string  = "<<str1<<"\n";
}

void reverseString2(std::string str1)
{
    std::string rStr = std::string(str1.rbegin(), str1.rend());
    std::cout<<"reverse string = "<<rStr<<"\n";
}

void reverseString3(std::string str1)
{
    int l = 0;
    int r = str1.size() -1;
    
    while(l < r)
    {
        std::swap(str1[l], str1[r]);
        l++;
        r--;
    }
    std::cout<<"reverse string = "<<str1<<"\n";
}

void reverseString4(std::string& str1, int l, int r)
{
    if(l > r)
    {
        return;
    }
     std::swap(str1[l], str1[r]);
     reverseString4(str1, l+1, r-1);
}

void reverseString5(std::string str)
{
    std::stack<char> stack1;
    int i = 0;
    while(str[i])
    {
        stack1.push(str[i]);
        i++;
    }
    str.clear();
    while(!stack1.empty())
    {
        str.push_back(stack1.top());
        stack1.pop();
    }
    std::cout<<"reverse string = "<<str<<"\n";
}

void reverseString6(std::string str)
{
    char arr[str.size()];
    std::strcpy(arr, str.c_str());
    
    char* arr2 = (char*)malloc(20);
    
    char* sptr = arr + 7;
    char* spt2 = arr2;
    
    while(*sptr != *arr)
    {
        *spt2 = *sptr;
        sptr --;
        spt2 ++;
    }
    *spt2 = *sptr;
    std::cout<<arr2<<"\n";
}

int main() {

    std::string str1 = "madhumati";
    reverseString1(str1);
    reverseString2(str1);
    reverseString3("str1");
    std::string str2 = "rstrdemo";
    reverseString4(str2, 0, 7);
    std::cout<<"reverse string by recursion = "<<str2<<"\n";
    reverseString5("shambhuraj");
    reverseString6("abcdpqre");
}
