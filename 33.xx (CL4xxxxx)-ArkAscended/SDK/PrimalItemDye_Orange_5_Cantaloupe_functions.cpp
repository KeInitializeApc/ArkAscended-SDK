#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Orange_5_Cantaloupe.PrimalItemDye_Orange_5_Cantaloupe_C
// (None)

class UClass* UPrimalItemDye_Orange_5_Cantaloupe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Orange_5_Cantaloupe_C");

	return Clss;
}


// PrimalItemDye_Orange_5_Cantaloupe_C PrimalItemDye_Orange_5_Cantaloupe.Default__PrimalItemDye_Orange_5_Cantaloupe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Orange_5_Cantaloupe_C* UPrimalItemDye_Orange_5_Cantaloupe_C::GetDefaultObj()
{
	static class UPrimalItemDye_Orange_5_Cantaloupe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Orange_5_Cantaloupe_C*>(UPrimalItemDye_Orange_5_Cantaloupe_C::StaticClass()->DefaultObject);

	return Default;
}

}


