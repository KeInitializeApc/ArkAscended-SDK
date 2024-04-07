#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalSpikeWall.EngramEntry_MetalSpikeWall_C
// (None)

class UClass* UEngramEntry_MetalSpikeWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalSpikeWall_C");

	return Clss;
}


// EngramEntry_MetalSpikeWall_C EngramEntry_MetalSpikeWall.Default__EngramEntry_MetalSpikeWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalSpikeWall_C* UEngramEntry_MetalSpikeWall_C::GetDefaultObj()
{
	static class UEngramEntry_MetalSpikeWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalSpikeWall_C*>(UEngramEntry_MetalSpikeWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


