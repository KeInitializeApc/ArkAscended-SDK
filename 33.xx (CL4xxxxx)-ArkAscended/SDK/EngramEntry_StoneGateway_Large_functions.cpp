#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneGateway_Large.EngramEntry_StoneGateway_Large_C
// (None)

class UClass* UEngramEntry_StoneGateway_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneGateway_Large_C");

	return Clss;
}


// EngramEntry_StoneGateway_Large_C EngramEntry_StoneGateway_Large.Default__EngramEntry_StoneGateway_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneGateway_Large_C* UEngramEntry_StoneGateway_Large_C::GetDefaultObj()
{
	static class UEngramEntry_StoneGateway_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneGateway_Large_C*>(UEngramEntry_StoneGateway_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


