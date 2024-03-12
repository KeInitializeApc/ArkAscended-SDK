#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChitinGloves.EngramEntry_ChitinGloves_C
// (None)

class UClass* UEngramEntry_ChitinGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChitinGloves_C");

	return Clss;
}


// EngramEntry_ChitinGloves_C EngramEntry_ChitinGloves.Default__EngramEntry_ChitinGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChitinGloves_C* UEngramEntry_ChitinGloves_C::GetDefaultObj()
{
	static class UEngramEntry_ChitinGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChitinGloves_C*>(UEngramEntry_ChitinGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


