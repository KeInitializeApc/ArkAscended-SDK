#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DecorBox.EngramEntry_DecorBox_C
// (None)

class UClass* UEngramEntry_DecorBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DecorBox_C");

	return Clss;
}


// EngramEntry_DecorBox_C EngramEntry_DecorBox.Default__EngramEntry_DecorBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DecorBox_C* UEngramEntry_DecorBox_C::GetDefaultObj()
{
	static class UEngramEntry_DecorBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DecorBox_C*>(UEngramEntry_DecorBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


