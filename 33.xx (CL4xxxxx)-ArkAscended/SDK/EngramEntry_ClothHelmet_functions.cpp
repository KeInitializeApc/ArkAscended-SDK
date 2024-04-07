#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ClothHelmet.EngramEntry_ClothHelmet_C
// (None)

class UClass* UEngramEntry_ClothHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ClothHelmet_C");

	return Clss;
}


// EngramEntry_ClothHelmet_C EngramEntry_ClothHelmet.Default__EngramEntry_ClothHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ClothHelmet_C* UEngramEntry_ClothHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_ClothHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ClothHelmet_C*>(UEngramEntry_ClothHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


