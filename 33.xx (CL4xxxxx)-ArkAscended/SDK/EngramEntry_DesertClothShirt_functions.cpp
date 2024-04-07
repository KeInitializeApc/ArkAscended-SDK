#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DesertClothShirt.EngramEntry_DesertClothShirt_C
// (None)

class UClass* UEngramEntry_DesertClothShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DesertClothShirt_C");

	return Clss;
}


// EngramEntry_DesertClothShirt_C EngramEntry_DesertClothShirt.Default__EngramEntry_DesertClothShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DesertClothShirt_C* UEngramEntry_DesertClothShirt_C::GetDefaultObj()
{
	static class UEngramEntry_DesertClothShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DesertClothShirt_C*>(UEngramEntry_DesertClothShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


