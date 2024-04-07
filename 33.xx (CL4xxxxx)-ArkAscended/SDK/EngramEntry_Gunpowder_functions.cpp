#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Gunpowder.EngramEntry_Gunpowder_C
// (None)

class UClass* UEngramEntry_Gunpowder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Gunpowder_C");

	return Clss;
}


// EngramEntry_Gunpowder_C EngramEntry_Gunpowder.Default__EngramEntry_Gunpowder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Gunpowder_C* UEngramEntry_Gunpowder_C::GetDefaultObj()
{
	static class UEngramEntry_Gunpowder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Gunpowder_C*>(UEngramEntry_Gunpowder_C::StaticClass()->DefaultObject);

	return Default;
}

}


