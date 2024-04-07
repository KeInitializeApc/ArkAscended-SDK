#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeCeilingDoorGiant.EngramEntry_AdobeCeilingDoorGiant_C
// (None)

class UClass* UEngramEntry_AdobeCeilingDoorGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeCeilingDoorGiant_C");

	return Clss;
}


// EngramEntry_AdobeCeilingDoorGiant_C EngramEntry_AdobeCeilingDoorGiant.Default__EngramEntry_AdobeCeilingDoorGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeCeilingDoorGiant_C* UEngramEntry_AdobeCeilingDoorGiant_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeCeilingDoorGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeCeilingDoorGiant_C*>(UEngramEntry_AdobeCeilingDoorGiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


