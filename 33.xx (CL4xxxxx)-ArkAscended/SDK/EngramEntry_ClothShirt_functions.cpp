#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ClothShirt.EngramEntry_ClothShirt_C
// (None)

class UClass* UEngramEntry_ClothShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ClothShirt_C");

	return Clss;
}


// EngramEntry_ClothShirt_C EngramEntry_ClothShirt.Default__EngramEntry_ClothShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ClothShirt_C* UEngramEntry_ClothShirt_C::GetDefaultObj()
{
	static class UEngramEntry_ClothShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ClothShirt_C*>(UEngramEntry_ClothShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


