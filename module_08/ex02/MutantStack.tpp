/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:40:27 by rvrignon          #+#    #+#             */
/*   Updated: 2023/01/31 15:55:25 by rvrignon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {
    return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &other) {
    *this = other;
    return ;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other) {
    *this = &other;
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {
    return ;
}