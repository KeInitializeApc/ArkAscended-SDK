#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CannonBall.EngramEntry_CannonBall_C
// (None)

class UClass* UEngramEntry_CannonBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CannonBall_C");

	return Clss;
}


// EngramEntry_CannonBall_C EngramEntry_CannonBall.Default__EngramEntry_CannonBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CannonBall_C* UEngramEntry_CannonBall_C::GetDefaultObj()
{
	static class UEngramEntry_CannonBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CannonBall_C*>(UEngramEntry_CannonBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


