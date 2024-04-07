#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AggroTranqDart.EngramEntry_AggroTranqDart_C
// (None)

class UClass* UEngramEntry_AggroTranqDart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AggroTranqDart_C");

	return Clss;
}


// EngramEntry_AggroTranqDart_C EngramEntry_AggroTranqDart.Default__EngramEntry_AggroTranqDart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AggroTranqDart_C* UEngramEntry_AggroTranqDart_C::GetDefaultObj()
{
	static class UEngramEntry_AggroTranqDart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AggroTranqDart_C*>(UEngramEntry_AggroTranqDart_C::StaticClass()->DefaultObject);

	return Default;
}

}


