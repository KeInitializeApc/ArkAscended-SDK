#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StorageBox_Huge.EngramEntry_StorageBox_Huge_C
// (None)

class UClass* UEngramEntry_StorageBox_Huge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StorageBox_Huge_C");

	return Clss;
}


// EngramEntry_StorageBox_Huge_C EngramEntry_StorageBox_Huge.Default__EngramEntry_StorageBox_Huge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StorageBox_Huge_C* UEngramEntry_StorageBox_Huge_C::GetDefaultObj()
{
	static class UEngramEntry_StorageBox_Huge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StorageBox_Huge_C*>(UEngramEntry_StorageBox_Huge_C::StaticClass()->DefaultObject);

	return Default;
}

}


