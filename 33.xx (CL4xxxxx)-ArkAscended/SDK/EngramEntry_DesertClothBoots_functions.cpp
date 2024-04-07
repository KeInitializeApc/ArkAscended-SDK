#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DesertClothBoots.EngramEntry_DesertClothBoots_C
// (None)

class UClass* UEngramEntry_DesertClothBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DesertClothBoots_C");

	return Clss;
}


// EngramEntry_DesertClothBoots_C EngramEntry_DesertClothBoots.Default__EngramEntry_DesertClothBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DesertClothBoots_C* UEngramEntry_DesertClothBoots_C::GetDefaultObj()
{
	static class UEngramEntry_DesertClothBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DesertClothBoots_C*>(UEngramEntry_DesertClothBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


