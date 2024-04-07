#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TreeSapTap.EngramEntry_TreeSapTap_C
// (None)

class UClass* UEngramEntry_TreeSapTap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TreeSapTap_C");

	return Clss;
}


// EngramEntry_TreeSapTap_C EngramEntry_TreeSapTap.Default__EngramEntry_TreeSapTap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TreeSapTap_C* UEngramEntry_TreeSapTap_C::GetDefaultObj()
{
	static class UEngramEntry_TreeSapTap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TreeSapTap_C*>(UEngramEntry_TreeSapTap_C::StaticClass()->DefaultObject);

	return Default;
}

}


