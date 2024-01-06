#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ChitinOrKeratin.PrimalItemResource_ChitinOrKeratin_C
// (None)

class UClass* UPrimalItemResource_ChitinOrKeratin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ChitinOrKeratin_C");

	return Clss;
}


// PrimalItemResource_ChitinOrKeratin_C PrimalItemResource_ChitinOrKeratin.Default__PrimalItemResource_ChitinOrKeratin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ChitinOrKeratin_C* UPrimalItemResource_ChitinOrKeratin_C::GetDefaultObj()
{
	static class UPrimalItemResource_ChitinOrKeratin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ChitinOrKeratin_C*>(UPrimalItemResource_ChitinOrKeratin_C::StaticClass()->DefaultObject);

	return Default;
}

}


