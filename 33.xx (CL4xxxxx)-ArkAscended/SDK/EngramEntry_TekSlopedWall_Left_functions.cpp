#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekSlopedWall_Left.EngramEntry_TekSlopedWall_Left_C
// (None)

class UClass* UEngramEntry_TekSlopedWall_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekSlopedWall_Left_C");

	return Clss;
}


// EngramEntry_TekSlopedWall_Left_C EngramEntry_TekSlopedWall_Left.Default__EngramEntry_TekSlopedWall_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekSlopedWall_Left_C* UEngramEntry_TekSlopedWall_Left_C::GetDefaultObj()
{
	static class UEngramEntry_TekSlopedWall_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekSlopedWall_Left_C*>(UEngramEntry_TekSlopedWall_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


