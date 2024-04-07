#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GhilliePants.EngramEntry_GhilliePants_C
// (None)

class UClass* UEngramEntry_GhilliePants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GhilliePants_C");

	return Clss;
}


// EngramEntry_GhilliePants_C EngramEntry_GhilliePants.Default__EngramEntry_GhilliePants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GhilliePants_C* UEngramEntry_GhilliePants_C::GetDefaultObj()
{
	static class UEngramEntry_GhilliePants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GhilliePants_C*>(UEngramEntry_GhilliePants_C::StaticClass()->DefaultObject);

	return Default;
}

}


