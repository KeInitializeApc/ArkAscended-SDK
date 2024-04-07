#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Canoe.EngramEntry_Canoe_C
// (None)

class UClass* UEngramEntry_Canoe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Canoe_C");

	return Clss;
}


// EngramEntry_Canoe_C EngramEntry_Canoe.Default__EngramEntry_Canoe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Canoe_C* UEngramEntry_Canoe_C::GetDefaultObj()
{
	static class UEngramEntry_Canoe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Canoe_C*>(UEngramEntry_Canoe_C::StaticClass()->DefaultObject);

	return Default;
}

}


