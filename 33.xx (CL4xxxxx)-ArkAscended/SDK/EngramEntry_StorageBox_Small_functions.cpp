#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StorageBox_Small.EngramEntry_StorageBox_Small_C
// (None)

class UClass* UEngramEntry_StorageBox_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StorageBox_Small_C");

	return Clss;
}


// EngramEntry_StorageBox_Small_C EngramEntry_StorageBox_Small.Default__EngramEntry_StorageBox_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StorageBox_Small_C* UEngramEntry_StorageBox_Small_C::GetDefaultObj()
{
	static class UEngramEntry_StorageBox_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StorageBox_Small_C*>(UEngramEntry_StorageBox_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


