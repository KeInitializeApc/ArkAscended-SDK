#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodChair.EngramEntry_WoodChair_C
// (None)

class UClass* UEngramEntry_WoodChair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodChair_C");

	return Clss;
}


// EngramEntry_WoodChair_C EngramEntry_WoodChair.Default__EngramEntry_WoodChair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodChair_C* UEngramEntry_WoodChair_C::GetDefaultObj()
{
	static class UEngramEntry_WoodChair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodChair_C*>(UEngramEntry_WoodChair_C::StaticClass()->DefaultObject);

	return Default;
}

}


