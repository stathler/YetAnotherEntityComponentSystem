#pragma once

#include "IEntity.h"


template<class T>
class Entity : public<IEntity>
{
public:
	void operator delete(void*) = delete;
	void operator delete[](void*) = delete;

	virtual ~Entity() = default;

	virtual const EntityTypeId getEntityTypeID() const override {
		return STATIC_ENTITY_TYPE_ID;
	}

	static const EntityTypeID STATIC_ENTITY_TYPE_ID;
};

// constant initialization of entity type identifier
// FamilyTypeID::get() is called once for each different T and always return same value for same T
template<class E>
const EntityTypeID Entity<E>::STATIC_ENTITY_TYPE_ID = util::Internal::FamilyTypeID<IEntity>::Get<E>();
