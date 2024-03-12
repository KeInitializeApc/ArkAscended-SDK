#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_RareMushroom.PrimalItemResource_RareMushroom_C
// (None)

class UClass* UPrimalItemResource_RareMushroom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_RareMushroom_C");

	return Clss;
}


// PrimalItemResource_RareMushroom_C PrimalItemResource_RareMushroom.Default__PrimalItemResource_RareMushroom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_RareMushroom_C* UPrimalItemResource_RareMushroom_C::GetDefaultObj()
{
	static class UPrimalItemResource_RareMushroom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_RareMushroom_C*>(UPrimalItemResource_RareMushroom_C::StaticClass()->DefaultObject);

	return Default;
}

}


