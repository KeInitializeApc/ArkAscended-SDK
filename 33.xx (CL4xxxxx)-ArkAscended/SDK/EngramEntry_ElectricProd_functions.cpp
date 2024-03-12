#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ElectricProd.EngramEntry_ElectricProd_C
// (None)

class UClass* UEngramEntry_ElectricProd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ElectricProd_C");

	return Clss;
}


// EngramEntry_ElectricProd_C EngramEntry_ElectricProd.Default__EngramEntry_ElectricProd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ElectricProd_C* UEngramEntry_ElectricProd_C::GetDefaultObj()
{
	static class UEngramEntry_ElectricProd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ElectricProd_C*>(UEngramEntry_ElectricProd_C::StaticClass()->DefaultObject);

	return Default;
}

}


