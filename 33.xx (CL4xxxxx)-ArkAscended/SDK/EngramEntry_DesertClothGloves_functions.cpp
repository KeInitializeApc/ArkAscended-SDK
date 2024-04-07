#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DesertClothGloves.EngramEntry_DesertClothGloves_C
// (None)

class UClass* UEngramEntry_DesertClothGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DesertClothGloves_C");

	return Clss;
}


// EngramEntry_DesertClothGloves_C EngramEntry_DesertClothGloves.Default__EngramEntry_DesertClothGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DesertClothGloves_C* UEngramEntry_DesertClothGloves_C::GetDefaultObj()
{
	static class UEngramEntry_DesertClothGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DesertClothGloves_C*>(UEngramEntry_DesertClothGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


