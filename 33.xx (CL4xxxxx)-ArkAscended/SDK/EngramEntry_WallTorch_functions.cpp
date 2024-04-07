#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WallTorch.EngramEntry_WallTorch_C
// (None)

class UClass* UEngramEntry_WallTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WallTorch_C");

	return Clss;
}


// EngramEntry_WallTorch_C EngramEntry_WallTorch.Default__EngramEntry_WallTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WallTorch_C* UEngramEntry_WallTorch_C::GetDefaultObj()
{
	static class UEngramEntry_WallTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WallTorch_C*>(UEngramEntry_WallTorch_C::StaticClass()->DefaultObject);

	return Default;
}

}


