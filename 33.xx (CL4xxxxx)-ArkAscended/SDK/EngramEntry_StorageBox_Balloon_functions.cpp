#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StorageBox_Balloon.EngramEntry_StorageBox_Balloon_C
// (None)

class UClass* UEngramEntry_StorageBox_Balloon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StorageBox_Balloon_C");

	return Clss;
}


// EngramEntry_StorageBox_Balloon_C EngramEntry_StorageBox_Balloon.Default__EngramEntry_StorageBox_Balloon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StorageBox_Balloon_C* UEngramEntry_StorageBox_Balloon_C::GetDefaultObj()
{
	static class UEngramEntry_StorageBox_Balloon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StorageBox_Balloon_C*>(UEngramEntry_StorageBox_Balloon_C::StaticClass()->DefaultObject);

	return Default;
}

}


