#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DesertClothPants.EngramEntry_DesertClothPants_C
// (None)

class UClass* UEngramEntry_DesertClothPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DesertClothPants_C");

	return Clss;
}


// EngramEntry_DesertClothPants_C EngramEntry_DesertClothPants.Default__EngramEntry_DesertClothPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DesertClothPants_C* UEngramEntry_DesertClothPants_C::GetDefaultObj()
{
	static class UEngramEntry_DesertClothPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DesertClothPants_C*>(UEngramEntry_DesertClothPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


