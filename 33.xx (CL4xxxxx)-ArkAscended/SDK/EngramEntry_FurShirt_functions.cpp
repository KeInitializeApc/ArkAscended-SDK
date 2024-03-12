#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FurShirt.EngramEntry_FurShirt_C
// (None)

class UClass* UEngramEntry_FurShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FurShirt_C");

	return Clss;
}


// EngramEntry_FurShirt_C EngramEntry_FurShirt.Default__EngramEntry_FurShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FurShirt_C* UEngramEntry_FurShirt_C::GetDefaultObj()
{
	static class UEngramEntry_FurShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FurShirt_C*>(UEngramEntry_FurShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


