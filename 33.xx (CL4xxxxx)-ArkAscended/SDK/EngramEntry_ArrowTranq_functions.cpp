#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ArrowTranq.EngramEntry_ArrowTranq_C
// (None)

class UClass* UEngramEntry_ArrowTranq_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ArrowTranq_C");

	return Clss;
}


// EngramEntry_ArrowTranq_C EngramEntry_ArrowTranq.Default__EngramEntry_ArrowTranq_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ArrowTranq_C* UEngramEntry_ArrowTranq_C::GetDefaultObj()
{
	static class UEngramEntry_ArrowTranq_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ArrowTranq_C*>(UEngramEntry_ArrowTranq_C::StaticClass()->DefaultObject);

	return Default;
}

}


