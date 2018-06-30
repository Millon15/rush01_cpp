/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Time.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbrazas <vbrazas@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:51:38 by vbrazas           #+#    #+#             */
/*   Updated: 2018/06/30 22:08:27 by vbrazas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Time.hpp>

Time::Time( void )
{
	return ;
}
Time::Time( std::string a, int b ) : ACursesModule(a, b)
{
	return ;
}
Time::Time( const Time &toCopy )
{
	*this = toCopy;
}
Time::~Time( void )
{
	return ;
}

Time			&Time::operator=( const Time &toCopy )
{
	ACursesModule::operator=(toCopy);
	static_cast<void>(toCopy);

	return *this;
}


void			Time::putInfo( void ) const
{
	const std::string	t = saveExec("date '+%d/%m/%Y %H:%M:%S'");

	mvwprintw(this->_w, __size_y / 2 - 3, alignCenter(t), "%s", t.c_str());

	this->refresh();
}
