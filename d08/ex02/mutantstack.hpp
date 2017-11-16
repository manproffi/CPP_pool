/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprotsen <sprotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:36:45 by sprotsen          #+#    #+#             */
/*   Updated: 2017/11/09 22:36:47 by sprotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>


template<typename T>
class MutantStack : public std::stack<T>
{

public:

    MutantStack<T>() : std::stack<T>() { }

    ~MutantStack<T>() {}

    MutantStack<T>(MutantStack<T> const & src) : std::stack<T>(src) {}



    class iterator : public std::iterator<std::input_iterator_tag, int>
    {
    private:
        iterator& operator=(iterator const & ref)
        {
            (void)ref;
            return *this;
        }
    public:
        int* ptr;

        iterator() : std::iterator<std::input_iterator_tag, T>() {};
        ~iterator() {}

        
        iterator(int* x) :ptr(x) {}

        iterator(const iterator& ref) : ptr(ref.ptr) {}

        iterator& operator++() {++ptr;return *this;}

        iterator operator++(int) {iterator tmp(*this); operator++(); return tmp;}


        iterator& operator--() {--ptr;return *this;}

        iterator operator--(int) {iterator tmp(*this); operator--(); return tmp;}

        bool operator==(const iterator& ref) const {return ptr==ref.ptr;}

        bool operator!=(const iterator& ref) const {return ptr!=ref.ptr;}

        int& operator*() {return *ptr;}
    };

    MutantStack<T>::iterator             begin()
    {
        T		*start = &(this->top());

        start -= (this->size() - 1);
        iterator	it;
        it.ptr = start;
        return it;
    }

    MutantStack<T>::iterator	        end()
    {
        T		*end = &(this->top()) + 1;
        iterator	it;

        it.ptr = end;
        return it;
    }

};

#endif
