#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ShardRefined.PrimalItemResource_ShardRefined_C
// (None)

class UClass* UPrimalItemResource_ShardRefined_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ShardRefined_C");

	return Clss;
}


// PrimalItemResource_ShardRefined_C PrimalItemResource_ShardRefined.Default__PrimalItemResource_ShardRefined_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ShardRefined_C* UPrimalItemResource_ShardRefined_C::GetDefaultObj()
{
	static class UPrimalItemResource_ShardRefined_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ShardRefined_C*>(UPrimalItemResource_ShardRefined_C::StaticClass()->DefaultObject);

	return Default;
}

}


