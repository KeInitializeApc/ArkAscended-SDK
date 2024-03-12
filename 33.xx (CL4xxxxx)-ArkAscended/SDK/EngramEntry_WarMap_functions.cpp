#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WarMap.EngramEntry_WarMap_C
// (None)

class UClass* UEngramEntry_WarMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WarMap_C");

	return Clss;
}


// EngramEntry_WarMap_C EngramEntry_WarMap.Default__EngramEntry_WarMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WarMap_C* UEngramEntry_WarMap_C::GetDefaultObj()
{
	static class UEngramEntry_WarMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WarMap_C*>(UEngramEntry_WarMap_C::StaticClass()->DefaultObject);

	return Default;
}

}


