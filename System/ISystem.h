#pragma once

/*
	"Each System runs continously and perform global actions on every Entity that posseses a Component of the same aspect
	as the System" 

	See: https://en.wikipedia.org/wiki/Entity_component_system

	ECS aim to achieve loose coupling and to distribute the different concerns and task between Entity, Component and systems.
	-	Entities main purpose is to provide a unique identifier to the system.
	-	Components are container objects that does not possess any complex logic (think of plain old data objects). 
		Each type of component can be attached to an entity to provide some sort of property

	component and systems communicate through an Event-Manager 
*/

class ISystem
{
public:

private:

};