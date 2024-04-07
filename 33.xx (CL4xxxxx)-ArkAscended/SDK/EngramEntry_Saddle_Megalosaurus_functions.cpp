#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Megalosaurus.EngramEntry_Saddle_Megalosaurus_C
// (None)

class UClass* UEngramEntry_Saddle_Megalosaurus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Megalosaurus_C");

	return Clss;
}


// EngramEntry_Saddle_Megalosaurus_C EngramEntry_Saddle_Megalosaurus.Default__EngramEntry_Saddle_Megalosaurus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Megalosaurus_C* UEngramEntry_Saddle_Megalosaurus_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Megalosaurus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Megalosaurus_C*>(UEngramEntry_Saddle_Megalosaurus_C::StaticClass()->DefaultObject);

	return Default;
}

}


