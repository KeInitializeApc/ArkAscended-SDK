#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ClothGloves.EngramEntry_ClothGloves_C
// (None)

class UClass* UEngramEntry_ClothGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ClothGloves_C");

	return Clss;
}


// EngramEntry_ClothGloves_C EngramEntry_ClothGloves.Default__EngramEntry_ClothGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ClothGloves_C* UEngramEntry_ClothGloves_C::GetDefaultObj()
{
	static class UEngramEntry_ClothGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ClothGloves_C*>(UEngramEntry_ClothGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


