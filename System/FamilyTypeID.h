#pragma once


namespace ECS {
	namespace util {
		namespace Internal {

			template<class T>
			class ECS_API FamilyTypeID
			{
			public:
				template<class U>
				static const TypeID Get()
				{
					static const TypeID STATIC_TYPE_ID{ s_count++ };
					return STATIC_TYPE_ID;
				}

				static const TypeID Get()
				{
					return s_count;
				}

			private:
				static TypeID s_count;
			};

		}
	}
} // namespace ECS::util::Internal