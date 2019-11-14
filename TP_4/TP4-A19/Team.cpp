#include "Team.h"

Team::Team(std::string name)
{
	m_name = name;
	// A Completer
}

Team::Team(const Team & mdd)
{
	
	m_name = mdd.getName();
	// A Completer (constructeur de copie)
}

Team * Team::clone(void) const
{
	return new Team(*this);
	// A Completer (créer un nouvel objet identique a this)
}

const QImage & Team::getImage(void) const
{
	return m_image;
	// A Completer
}

QImage & Team::getImage(void)
{
	return m_image;
	// A Completer
}

std::string Team::getName(void) const
{
	return m_name;
	// A Completer
}

void Team::setName(std::string name)
{
	m_name = name;
	// A Completer
}

AbsTeamComponent& Team::addTeamComponent(const AbsTeamComponent & member)
{


	AbsTeamComponent* clone = member.clone();
	m_members.push_back(TeamComponentPtr(clone));
		// A Completer: Ajouter un nouvel element dans la liste et le clonant et
		// retrourner une reference a l'objet insere dans la liste
	return *clone ;
}

TeamComponentIterator Team::begin()
{
	return m_members.begin();
	// A Completer
}

TeamComponentIterator_const Team::cbegin() const
{
	return m_members.cbegin();
	// A Completer
}

TeamComponentIterator_const Team::cend() const
{
	return m_members.cend();
	// A Completer
}

TeamComponentIterator Team::end()
{
	return m_members.end();
	// A Completer
}

void Team::deleteTeamComponent(TeamComponentIterator_const child)
{
	m_members.erase(child);
	// A Completer: eliminer de la liste l'element indique par l'iterateur
}

void Team::deleteAllComponents(void)
{
	m_members.clear();
	// A Completer : vider la liste et les attributs membres
}
