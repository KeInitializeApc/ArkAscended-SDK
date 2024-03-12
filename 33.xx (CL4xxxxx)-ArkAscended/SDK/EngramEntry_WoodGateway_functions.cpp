#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodGateway.EngramEntry_WoodGateway_C
// (None)

class UClass* UEngramEntry_WoodGateway_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodGateway_C");

	return Clss;
}


// EngramEntry_WoodGateway_C EngramEntry_WoodGateway.Default__EngramEntry_WoodGateway_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodGateway_C* UEngramEntry_WoodGateway_C::GetDefaultObj()
{
	static class UEngramEntry_WoodGateway_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodGateway_C*>(UEngramEntry_WoodGateway_C::StaticClass()->DefaultObject);

	return Default;
}

}


