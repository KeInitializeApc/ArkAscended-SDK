#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StorageBox_Large.EngramEntry_StorageBox_Large_C
// (None)

class UClass* UEngramEntry_StorageBox_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StorageBox_Large_C");

	return Clss;
}


// EngramEntry_StorageBox_Large_C EngramEntry_StorageBox_Large.Default__EngramEntry_StorageBox_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StorageBox_Large_C* UEngramEntry_StorageBox_Large_C::GetDefaultObj()
{
	static class UEngramEntry_StorageBox_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StorageBox_Large_C*>(UEngramEntry_StorageBox_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


