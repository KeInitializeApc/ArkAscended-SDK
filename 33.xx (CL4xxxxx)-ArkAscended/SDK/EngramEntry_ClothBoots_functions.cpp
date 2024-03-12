#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ClothBoots.EngramEntry_ClothBoots_C
// (None)

class UClass* UEngramEntry_ClothBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ClothBoots_C");

	return Clss;
}


// EngramEntry_ClothBoots_C EngramEntry_ClothBoots.Default__EngramEntry_ClothBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ClothBoots_C* UEngramEntry_ClothBoots_C::GetDefaultObj()
{
	static class UEngramEntry_ClothBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ClothBoots_C*>(UEngramEntry_ClothBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


