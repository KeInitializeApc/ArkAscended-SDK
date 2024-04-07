#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ClothPants.EngramEntry_ClothPants_C
// (None)

class UClass* UEngramEntry_ClothPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ClothPants_C");

	return Clss;
}


// EngramEntry_ClothPants_C EngramEntry_ClothPants.Default__EngramEntry_ClothPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ClothPants_C* UEngramEntry_ClothPants_C::GetDefaultObj()
{
	static class UEngramEntry_ClothPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ClothPants_C*>(UEngramEntry_ClothPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


