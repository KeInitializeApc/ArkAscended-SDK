#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Torch.EngramEntry_Torch_C
// (None)

class UClass* UEngramEntry_Torch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Torch_C");

	return Clss;
}


// EngramEntry_Torch_C EngramEntry_Torch.Default__EngramEntry_Torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Torch_C* UEngramEntry_Torch_C::GetDefaultObj()
{
	static class UEngramEntry_Torch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Torch_C*>(UEngramEntry_Torch_C::StaticClass()->DefaultObject);

	return Default;
}

}


