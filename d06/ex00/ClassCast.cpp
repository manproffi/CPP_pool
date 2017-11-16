/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCast.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:25:25 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/07 16:25:26 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "ClassCast.hpp"
#include <iomanip>

char ClassCast::getC() const {
    return c;
}

void ClassCast::setC(char c) {
    ClassCast::c = c;
}

int ClassCast::getI() const {
    return i;
}

void ClassCast::setI(int i) {
    ClassCast::i = i;
}

double ClassCast::getD() const {
    return d;
}

void ClassCast::setD(double d) {
    ClassCast::d = d;
}

float ClassCast::getF() const {
    return f;
}

void ClassCast::setF(float f) {
    ClassCast::f = f;
}

ClassCast::ClassCast(const ClassCast &cast) {
    c = cast.getC();
    i = cast.getI();
    d = cast.getD();
    f = cast.getF();
}

ClassCast &ClassCast::operator=(const ClassCast &cast) {
    c = cast.getC();
    i = cast.getI();
    d = cast.getD();
    f = cast.getF();
    return *this;
}

ClassCast::ClassCast() : c(0), i(0), d(0.0), f(0.0f) {}

ClassCast::~ClassCast() {}

std::ostream &operator<<(std::ostream &os, const ClassCast &cast) {
    os << "c: " << cast.getC() << " i: " << cast.getI() << " d: " << cast.getD() << " f: " << cast.getF();
    return os;
}

void ClassCast::castChar(char *str, int a) {
    std::cout << "char: ";

    try
    {
        int num = std::stoi(str);
        if (num < 32 && num >= 0)
            std::cout << "NON PRINTABLE CHARACTERS" << std::endl;
        else if (num >= 32 && num < 128)
            std::cout  << "'" << static_cast<char>(a) << "'" << std::endl;
        else if (num >= 128 && num < 256)
            std::cout << "EXTENDED ASCII CHARACTERS" << std::endl;
        else
            std::cout << "impossible" << std::endl;
    }
    catch (std::exception)
    {
        if (!strcmp(str, ""))
            std::cout << "impossible" << std::endl;
        else if (strlen(str) > 1)
            std::cout << "impossible" << std::endl;
        else if (isprint(str[0]) && strlen(str) == 1)
            std::cout << "'" << str[0] << "'" << std::endl;
    }
}

void    ClassCast::castInt(char * str)
{
    std::cout << "int: ";
    try
    {
        int a = std::stoi(str);
            std::cout << a << std::endl;
    }
    catch (std::exception)
    {
        if (strlen(str) == 1)
        {
            std::cout << static_cast<int>(*str) << std::endl;
        }
        else
            std::cout << "impossible" << std::endl;
    }

}

void    ClassCast::castFloat(char *str, int b)
{
    std::cout << "float: ";
    try
    {
        float a = std::stof(str);
        std::cout << a;
        if (a == static_cast<float>(b))
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }
    catch (std::exception)
    {
        if (strlen(str) == 1)
        {
            std::cout << static_cast<float>(*str) << ".0f" << std::endl;
        }
        else
            std::cout << "impossible" << std::endl;
    }
}

void    ClassCast::castDouble(char * str, int b)
{
    std::cout << "double: ";

    try {
        double	a = std::stod(str);
        std::cout << a;
        if (a == static_cast<double>(b))
            std::cout << ".0";
        std::cout << std::endl;
    }
    catch (std::exception)
    {
        if (strlen(str) == 1)
        {
            std::cout << static_cast<double>(*str) << ".0" << std::endl;
        }
        else
            std::cout << "impossible" << std::endl;
    }
}
