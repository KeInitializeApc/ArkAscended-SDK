#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneGateway.EngramEntry_StoneGateway_C
// (None)

class UClass* UEngramEntry_StoneGateway_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneGateway_C");

	return Clss;
}


// EngramEntry_StoneGateway_C EngramEntry_StoneGateway.Default__EngramEntry_StoneGateway_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneGateway_C* UEngramEntry_StoneGateway_C::GetDefaultObj()
{
	static class UEngramEntry_StoneGateway_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneGateway_C*>(UEngramEntry_StoneGateway_C::StaticClass()->DefaultObject);

	return Default;
}

}


