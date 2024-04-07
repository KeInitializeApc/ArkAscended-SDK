#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalSlopedWall_Left.EngramEntry_MetalSlopedWall_Left_C
// (None)

class UClass* UEngramEntry_MetalSlopedWall_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalSlopedWall_Left_C");

	return Clss;
}


// EngramEntry_MetalSlopedWall_Left_C EngramEntry_MetalSlopedWall_Left.Default__EngramEntry_MetalSlopedWall_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalSlopedWall_Left_C* UEngramEntry_MetalSlopedWall_Left_C::GetDefaultObj()
{
	static class UEngramEntry_MetalSlopedWall_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalSlopedWall_Left_C*>(UEngramEntry_MetalSlopedWall_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


