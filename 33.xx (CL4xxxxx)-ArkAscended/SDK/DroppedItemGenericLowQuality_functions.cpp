#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C
// (Actor)

class UClass* ADroppedItemGenericLowQuality_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DroppedItemGenericLowQuality_C");

	return Clss;
}


// DroppedItemGenericLowQuality_C DroppedItemGenericLowQuality.Default__DroppedItemGenericLowQuality_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADroppedItemGenericLowQuality_C* ADroppedItemGenericLowQuality_C::GetDefaultObj()
{
	static class ADroppedItemGenericLowQuality_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADroppedItemGenericLowQuality_C*>(ADroppedItemGenericLowQuality_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.BPDroppedItemImpacted
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  ImpactHitInfo                                                    (BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ADroppedItemGenericLowQuality_C::BPDroppedItemImpacted(struct FHitResult* ImpactHitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedItemGenericLowQuality_C", "BPDroppedItemImpacted");

	Params::ADroppedItemGenericLowQuality_C_BPDroppedItemImpacted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ImpactHitInfo != nullptr)
		*ImpactHitInfo = std::move(Parms.ImpactHitInfo);

}


// Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.ExecuteUbergraph_DroppedItemGenericLowQuality
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FHitResult                  K2Node_Event_impactHitInfo                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ADroppedItemGenericLowQuality_C::ExecuteUbergraph_DroppedItemGenericLowQuality(int32* EntryPoint, const struct FHitResult& K2Node_Event_impactHitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedItemGenericLowQuality_C", "ExecuteUbergraph_DroppedItemGenericLowQuality");

	Params::ADroppedItemGenericLowQuality_C_ExecuteUbergraph_DroppedItemGenericLowQuality_Params Parms{};

	Parms.K2Node_Event_impactHitInfo = K2Node_Event_impactHitInfo;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


