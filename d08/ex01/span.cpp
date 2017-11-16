/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:54:03 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 19:54:05 by sprotsen         ###   ########.fr       */
/*                                                                            */
#include "span.hpp"

/* ************************************************************************** */


unsigned int Span::getN() const {
    return n;
}

const std::vector<int> &Span::getV1() const {
    return v1;
}

void Span::setV1(const std::vector<int> &v1) {
    Span::v1 = v1;
}

void Span::setN(unsigned int n) {
    Span::n = n;
}

Span::Span() : n(0) {}

Span::Span(unsigned int a ) : n(a) {}

Span::Span(Span const &ref) {
    *this = ref;
}

Span &Span::operator=(Span const &ref) {

    n = ref.getN();
    this->v1 = ref.v1;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int a) {
    if (v1.size() < n)
        v1.push_back(a);
    else
       throw std::exception();

}

int Span::shortestSpan() {
    if (n < 2)
        throw std::exception();
    std::vector<int>    tmp;
    tmp = v1;
    std::sort(tmp.begin(), tmp.end());

    int res = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < tmp.size(); i++)
    {
        if (Span::difference(tmp[i - 1], tmp[i]) < res)
            res = Span::difference(tmp[i - 1], tmp[i]);
    }
    return res;
}

int Span::longestSpan() {
    if (n < 2)
        throw std::exception();
    std::vector<int>    tmp;
    tmp = v1;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

int		Span::difference(int const a, int const b) {
    int		result;

    result = b - a;
    return ( result < 0 ? -result : result );
}


