/****************************************************************************
**
** Classe TeamMember
** Author: p482457
** Date: 25-oct-2019
**
****************************************************************************/

#include "TeamMember.h"

// Define class static members
TeamComponentContainer TeamMember::m_emptyContainer;

TeamMember::TeamMember(std::string name, const QImage & photo)
{
	m_name = name;
	m_image = photo;
	// A Completer
}

TeamMember::TeamMember(const TeamMember & mdd)
{
	m_name = mdd.getName();
	m_image = mdd.getImage();
	// A Completer: constructeur de copie
}

TeamMember * TeamMember::clone(void) const
{
	return new TeamMember(*this);
	// A Completer (créer un nouvel objet identique a this)
}

const QImage & TeamMember::getImage(void) const
{
	return m_image;
	// A Completer
}

QImage & TeamMember::getImage(void)
{
	return m_image;
	// A Completer
}

std::string TeamMember::getName(void) const
{
	return m_name;
	// A Completer
}

void TeamMember::setName(std::string name)
{
	m_name = name;
	// A Completer
}

AbsTeamComponent& TeamMember::addTeamComponent(const AbsTeamComponent&)
{
    // Truc pour que le code compile. Rien à changer
	return *(*(m_emptyContainer.begin()));
}

TeamComponentIterator TeamMember::begin()
{

	return m_emptyContainer.begin();
	// A Completer
}

TeamComponentIterator_const TeamMember::cbegin() const
{
	return m_emptyContainer.cbegin();
	// A Completer
}

TeamComponentIterator_const TeamMember::cend() const
{
	return m_emptyContainer.cend();
	// A Completer
}

TeamComponentIterator TeamMember::end()
{
	return m_emptyContainer.end();
	// A Completer
}

void TeamMember::deleteTeamComponent(TeamComponentIterator_const)
{
	// Rien a faire, un membre ne peut pas avoir d'enfants 
}

