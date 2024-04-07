#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Orange_2_Terracotta.PrimalItemDye_Orange_2_Terracotta_C
// (None)

class UClass* UPrimalItemDye_Orange_2_Terracotta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Orange_2_Terracotta_C");

	return Clss;
}


// PrimalItemDye_Orange_2_Terracotta_C PrimalItemDye_Orange_2_Terracotta.Default__PrimalItemDye_Orange_2_Terracotta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Orange_2_Terracotta_C* UPrimalItemDye_Orange_2_Terracotta_C::GetDefaultObj()
{
	static class UPrimalItemDye_Orange_2_Terracotta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Orange_2_Terracotta_C*>(UPrimalItemDye_Orange_2_Terracotta_C::StaticClass()->DefaultObject);

	return Default;
}

}


