#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Pistol.EngramEntry_Pistol_C
// (None)

class UClass* UEngramEntry_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Pistol_C");

	return Clss;
}


// EngramEntry_Pistol_C EngramEntry_Pistol.Default__EngramEntry_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Pistol_C* UEngramEntry_Pistol_C::GetDefaultObj()
{
	static class UEngramEntry_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Pistol_C*>(UEngramEntry_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


