#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodWall.EngramEntry_WoodWall_C
// (None)

class UClass* UEngramEntry_WoodWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodWall_C");

	return Clss;
}


// EngramEntry_WoodWall_C EngramEntry_WoodWall.Default__EngramEntry_WoodWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodWall_C* UEngramEntry_WoodWall_C::GetDefaultObj()
{
	static class UEngramEntry_WoodWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodWall_C*>(UEngramEntry_WoodWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


