#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChitinShirt.EngramEntry_ChitinShirt_C
// (None)

class UClass* UEngramEntry_ChitinShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChitinShirt_C");

	return Clss;
}


// EngramEntry_ChitinShirt_C EngramEntry_ChitinShirt.Default__EngramEntry_ChitinShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChitinShirt_C* UEngramEntry_ChitinShirt_C::GetDefaultObj()
{
	static class UEngramEntry_ChitinShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChitinShirt_C*>(UEngramEntry_ChitinShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


