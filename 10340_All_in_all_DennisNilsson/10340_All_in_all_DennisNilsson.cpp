// 10340_All_in_all_DennisNilsson.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	std::string s, t;
	while (std::cin>>s>>t)
	{
		int index = 0;
		for (int i = 0; i < t.size(); i++)
		{
			if (s[index] == t[i])
			{
				index++;
			}
		}
		if (index == s.size())
		{
			std::cout << "Yes" << std::endl;
		}
		else
		{
			std::cout << "No" << std::endl;
		}
	}
    return 0;
}

