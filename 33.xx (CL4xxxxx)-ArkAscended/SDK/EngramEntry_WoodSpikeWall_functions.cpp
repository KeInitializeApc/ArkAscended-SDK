#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodSpikeWall.EngramEntry_WoodSpikeWall_C
// (None)

class UClass* UEngramEntry_WoodSpikeWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodSpikeWall_C");

	return Clss;
}


// EngramEntry_WoodSpikeWall_C EngramEntry_WoodSpikeWall.Default__EngramEntry_WoodSpikeWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodSpikeWall_C* UEngramEntry_WoodSpikeWall_C::GetDefaultObj()
{
	static class UEngramEntry_WoodSpikeWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodSpikeWall_C*>(UEngramEntry_WoodSpikeWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


