#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CFCoreRchTextBlockDecorator.BP_CFCoreRchTextBlockDecorator_C
// (None)

class UClass* UBP_CFCoreRchTextBlockDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CFCoreRchTextBlockDecorator_C");

	return Clss;
}


// BP_CFCoreRchTextBlockDecorator_C BP_CFCoreRchTextBlockDecorator.Default__BP_CFCoreRchTextBlockDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CFCoreRchTextBlockDecorator_C* UBP_CFCoreRchTextBlockDecorator_C::GetDefaultObj()
{
	static class UBP_CFCoreRchTextBlockDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CFCoreRchTextBlockDecorator_C*>(UBP_CFCoreRchTextBlockDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


