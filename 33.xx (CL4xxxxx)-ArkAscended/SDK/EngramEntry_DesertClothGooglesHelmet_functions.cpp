#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DesertClothGooglesHelmet.EngramEntry_DesertClothGooglesHelmet_C
// (None)

class UClass* UEngramEntry_DesertClothGooglesHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DesertClothGooglesHelmet_C");

	return Clss;
}


// EngramEntry_DesertClothGooglesHelmet_C EngramEntry_DesertClothGooglesHelmet.Default__EngramEntry_DesertClothGooglesHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DesertClothGooglesHelmet_C* UEngramEntry_DesertClothGooglesHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_DesertClothGooglesHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DesertClothGooglesHelmet_C*>(UEngramEntry_DesertClothGooglesHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


