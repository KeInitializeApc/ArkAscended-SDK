#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TaxidermyBase_Medium.EngramEntry_TaxidermyBase_Medium_C
// (None)

class UClass* UEngramEntry_TaxidermyBase_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TaxidermyBase_Medium_C");

	return Clss;
}


// EngramEntry_TaxidermyBase_Medium_C EngramEntry_TaxidermyBase_Medium.Default__EngramEntry_TaxidermyBase_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TaxidermyBase_Medium_C* UEngramEntry_TaxidermyBase_Medium_C::GetDefaultObj()
{
	static class UEngramEntry_TaxidermyBase_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TaxidermyBase_Medium_C*>(UEngramEntry_TaxidermyBase_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


