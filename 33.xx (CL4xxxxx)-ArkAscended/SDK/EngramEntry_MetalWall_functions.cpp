#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalWall.EngramEntry_MetalWall_C
// (None)

class UClass* UEngramEntry_MetalWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalWall_C");

	return Clss;
}


// EngramEntry_MetalWall_C EngramEntry_MetalWall.Default__EngramEntry_MetalWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalWall_C* UEngramEntry_MetalWall_C::GetDefaultObj()
{
	static class UEngramEntry_MetalWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalWall_C*>(UEngramEntry_MetalWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


