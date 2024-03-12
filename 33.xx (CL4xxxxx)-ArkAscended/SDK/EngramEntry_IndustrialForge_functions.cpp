#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_IndustrialForge.EngramEntry_IndustrialForge_C
// (None)

class UClass* UEngramEntry_IndustrialForge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_IndustrialForge_C");

	return Clss;
}


// EngramEntry_IndustrialForge_C EngramEntry_IndustrialForge.Default__EngramEntry_IndustrialForge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_IndustrialForge_C* UEngramEntry_IndustrialForge_C::GetDefaultObj()
{
	static class UEngramEntry_IndustrialForge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_IndustrialForge_C*>(UEngramEntry_IndustrialForge_C::StaticClass()->DefaultObject);

	return Default;
}

}


