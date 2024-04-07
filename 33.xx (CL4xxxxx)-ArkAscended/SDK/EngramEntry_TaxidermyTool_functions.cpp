#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TaxidermyTool.EngramEntry_TaxidermyTool_C
// (None)

class UClass* UEngramEntry_TaxidermyTool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TaxidermyTool_C");

	return Clss;
}


// EngramEntry_TaxidermyTool_C EngramEntry_TaxidermyTool.Default__EngramEntry_TaxidermyTool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TaxidermyTool_C* UEngramEntry_TaxidermyTool_C::GetDefaultObj()
{
	static class UEngramEntry_TaxidermyTool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TaxidermyTool_C*>(UEngramEntry_TaxidermyTool_C::StaticClass()->DefaultObject);

	return Default;
}

}


