#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChitinPaste.EngramEntry_ChitinPaste_C
// (None)

class UClass* UEngramEntry_ChitinPaste_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChitinPaste_C");

	return Clss;
}


// EngramEntry_ChitinPaste_C EngramEntry_ChitinPaste.Default__EngramEntry_ChitinPaste_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChitinPaste_C* UEngramEntry_ChitinPaste_C::GetDefaultObj()
{
	static class UEngramEntry_ChitinPaste_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChitinPaste_C*>(UEngramEntry_ChitinPaste_C::StaticClass()->DefaultObject);

	return Default;
}

}


