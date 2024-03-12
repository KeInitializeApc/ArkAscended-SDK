#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Phiomia.EngramEntry_Saddle_Phiomia_C
// (None)

class UClass* UEngramEntry_Saddle_Phiomia_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Phiomia_C");

	return Clss;
}


// EngramEntry_Saddle_Phiomia_C EngramEntry_Saddle_Phiomia.Default__EngramEntry_Saddle_Phiomia_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Phiomia_C* UEngramEntry_Saddle_Phiomia_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Phiomia_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Phiomia_C*>(UEngramEntry_Saddle_Phiomia_C::StaticClass()->DefaultObject);

	return Default;
}

}


