#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Handcuffs.EngramEntry_Handcuffs_C
// (None)

class UClass* UEngramEntry_Handcuffs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Handcuffs_C");

	return Clss;
}


// EngramEntry_Handcuffs_C EngramEntry_Handcuffs.Default__EngramEntry_Handcuffs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Handcuffs_C* UEngramEntry_Handcuffs_C::GetDefaultObj()
{
	static class UEngramEntry_Handcuffs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Handcuffs_C*>(UEngramEntry_Handcuffs_C::StaticClass()->DefaultObject);

	return Default;
}

}


