#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_IceBox.EngramEntry_IceBox_C
// (None)

class UClass* UEngramEntry_IceBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_IceBox_C");

	return Clss;
}


// EngramEntry_IceBox_C EngramEntry_IceBox.Default__EngramEntry_IceBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_IceBox_C* UEngramEntry_IceBox_C::GetDefaultObj()
{
	static class UEngramEntry_IceBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_IceBox_C*>(UEngramEntry_IceBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


