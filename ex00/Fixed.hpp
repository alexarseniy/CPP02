/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <olarseni@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:44:22 by olarseni          #+#    #+#             */
/*   Updated: 2025/11/16 15:25:43 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(Fixed &cpy);
		Fixed &operator=(Fixed &src);
		~Fixed();
		int		getRawBits(void);
		void	setRawBits(int const raw);
};

#endif
