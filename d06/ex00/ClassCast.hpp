/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassCast.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:25:38 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/07 16:25:40 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCAST_HPP
# define CLASSCAST_HPP

# include <ostream>

class ClassCast
{
private:
    char c;
    int i;
    double d;
    float f;

public:
    char        getC() const;
    int         getI() const;
    double      getD() const;
    float       getF() const;

    void        setC(char c);
    void        setI(int i);
    void        setD(double d);
    void        setF(float f);

    ClassCast(const ClassCast & cast);

    ClassCast();

    ClassCast& operator=(const ClassCast& cast);

    void    castChar(char * str, int);
    void    castInt(char *);
    void    castFloat(char*, int);
    void    castDouble(char *, int);



    ~ClassCast();

};

std::ostream &operator<<(std::ostream &os, const ClassCast &cast);

#endif