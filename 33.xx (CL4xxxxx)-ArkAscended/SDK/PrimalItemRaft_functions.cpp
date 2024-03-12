#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemRaft.PrimalItemRaft_C
// (None)

class UClass* UPrimalItemRaft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemRaft_C");

	return Clss;
}


// PrimalItemRaft_C PrimalItemRaft.Default__PrimalItemRaft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemRaft_C* UPrimalItemRaft_C::GetDefaultObj()
{
	static class UPrimalItemRaft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemRaft_C*>(UPrimalItemRaft_C::StaticClass()->DefaultObject);

	return Default;
}

}


