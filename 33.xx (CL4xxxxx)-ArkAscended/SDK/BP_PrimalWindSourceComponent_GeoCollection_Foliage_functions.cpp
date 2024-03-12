#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PrimalWindSourceComponent_GeoCollection_Foliage.BP_PrimalWindSourceComponent_GeoCollection_Foliage_C
// (None)

class UClass* UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PrimalWindSourceComponent_GeoCollection_Foliage_C");

	return Clss;
}


// BP_PrimalWindSourceComponent_GeoCollection_Foliage_C BP_PrimalWindSourceComponent_GeoCollection_Foliage.Default__BP_PrimalWindSourceComponent_GeoCollection_Foliage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C* UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C::GetDefaultObj()
{
	static class UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C*>(UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C::StaticClass()->DefaultObject);

	return Default;
}

}


