#pragma once

/*
	Entity is tied to a concept, i.e Game Objects (player, bullet,  car) or GUI widgets (window, textbox, button)

	"The entity is a general purpose object. Usually, it only consists of a unique id. 
	They "tag every coarse gameobject as a separate item". Implementations typically use a plain integer for this"

	-> An Entity is a collection of components

	See: https://en.wikipedia.org/wiki/Entity_component_system
*/

class IEntity
{
public:
	IEntity() = default;
	virtual ~IEntity() = default;

	virtual const EntityTypeId getEntityTypeID() const = 0;
	inline const EntityId getEntityID() const { return this->m_id };

private:
	EntityId m_Id;
};

