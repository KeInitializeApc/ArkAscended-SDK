#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ElementRefined.PrimalItemResource_ElementRefined_C
// (None)

class UClass* UPrimalItemResource_ElementRefined_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ElementRefined_C");

	return Clss;
}


// PrimalItemResource_ElementRefined_C PrimalItemResource_ElementRefined.Default__PrimalItemResource_ElementRefined_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ElementRefined_C* UPrimalItemResource_ElementRefined_C::GetDefaultObj()
{
	static class UPrimalItemResource_ElementRefined_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ElementRefined_C*>(UPrimalItemResource_ElementRefined_C::StaticClass()->DefaultObject);

	return Default;
}

}


