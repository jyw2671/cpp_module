/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:43:39 by yjung             #+#    #+#             */
/*   Updated: 2022/01/28 12:11:04 by yjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER__HPP
# define SCALARCONVERTER__HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <iomanip>

# define TYPE_CHAR 1
# define TYPE_INT 2
# define TYPE_FLOAT 3
# define TYPE_DOUBLE 4
# define TYPE_FLOAT_IMPOSSIBLE 5
# define TYPE_DOUBLE_IMPOSSIBLE 6

class ScalarConverter {

	private:
		std::string value;
		int value_size;
		int type;
		double d;
		float f;
		int i;
		char c;
		int	 precision;
		std::stringstream doubleStr;
		std::stringstream floatStr;
		std::stringstream intStr;
		std::stringstream charStr;
		ScalarConverter() {}

	public:
		ScalarConverter(char *arg);
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &);
		ScalarConverter& operator=(ScalarConverter const &);

		std::string const & getValue() const;
		int getType() const;
		double getDouble() const;
		float getFloat() const;
		int getInt() const;
		char getChar() const;
		int getPrecision() const;
		std::stringstream const &getDoubleStr() const;
		std::stringstream const &getFloatStr() const;
		std::stringstream const &getIntStr() const;
		std::stringstream const &getCharStr() const;

		void convert(ScalarConverter&);
		void parse();
		void typeBranch();
		void charConverter();
		void intConverter();
		void floatConverter();
		void doubleConverter();

		void setCharStream();

		class ArgumentException : public std::exception {
			public :
				virtual const char* what() const throw() {
					return ("Error : argument.");
				}
		};
};

std::ostream& operator<<(std::ostream &out, ScalarConverter& s);

#endif
