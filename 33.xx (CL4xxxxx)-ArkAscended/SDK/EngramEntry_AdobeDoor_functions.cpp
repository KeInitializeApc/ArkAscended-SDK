#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeDoor.EngramEntry_AdobeDoor_C
// (None)

class UClass* UEngramEntry_AdobeDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeDoor_C");

	return Clss;
}


// EngramEntry_AdobeDoor_C EngramEntry_AdobeDoor.Default__EngramEntry_AdobeDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeDoor_C* UEngramEntry_AdobeDoor_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeDoor_C*>(UEngramEntry_AdobeDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


